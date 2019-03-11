#include<stdio.h>
#include<time.h>

int add ();

int main(){
    printf("c程序开始执行了：\n");
    return add(3, 2);
}


int add (int a, int b) {
    printf("参数为：%d,%d\n", a, b);
    return a+b;
}