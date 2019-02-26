#include <stdio.h>
#include <emscripten.h>

EM_JS(void, read_data, (int* data), {
    console.log('index:', data, HEAP32[data]);
    console.log('Data: ' + HEAP32[data>>2] + ', ' + HEAP32[(data+4)>>2]);
});

int main() {
  int arr[2] = { 30, 45 };
  read_data(arr);
  return 0;
}