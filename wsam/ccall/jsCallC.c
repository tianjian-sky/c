#include <stdio.h>
#include <emscripten/emscripten.h>



int main(int argc,char **argv){
    printf("程序启动！\n");
    return (0);
}

#ifdef __cplusplus
extern "C" {
#endif

int EMSCRIPTEN_KEEPALIVE add(int a, int b) {
    printf("我的函数已被调用\n");
    return (a + b);
}

#ifdef __cplusplus
}
#endif