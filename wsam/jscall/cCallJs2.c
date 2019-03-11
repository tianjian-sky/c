#include <stdio.h>
#include <stdlib.h>
#include <emscripten.h>

void add ();
void error ();

typedef void (*em_callback_func)(void);

int main() {
    int x = EM_ASM_INT({
        return $0 + 42;
    }, 100);
    add();
    int y = EM_ASM_INT(return TOTAL_MEMORY);
    printf("Total memory is: %d\n", y);

    char greeting[9] = {'i', 'n', 'd', 'e', 'x', '.', 'j', 's', '\0'};

    emscripten_async_load_script(greeting, add, error);
}

void add () {
    printf("c callback func");
}

void error () {
    printf("load script error");
}