#include <stdio.h>
#include <stdlib.h>
#include <emscripten.h>

int main() {
    int x = EM_ASM_INT({
        return $0 + 42;
    }, 100);

    int y = EM_ASM_INT(return TOTAL_MEMORY);

    char *str = (char*)EM_ASM_INT({
        var jsString = 'Hello with some exotic Unicode characters: Tässä on yksi lumiukko: ☃, ole hyvä.';
        var lengthBytes = lengthBytesUTF8(jsString)+1; // 'jsString.length' would return the length of the string as UTF-16 units, but Emscripten C strings operate as UTF-8.
        var stringOnWasmHeap = _malloc(lengthBytes);
        stringToUTF8(jsString, stringOnWasmHeap, lengthBytes+1);
        return stringOnWasmHeap;
    });
    printf("UTF8 string says: %s\n", str);
    free(str); // Each call to _malloc() must be paired with free(), or heap memory will leak!
}
