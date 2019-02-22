#include <stdio.h>
 
const int MAX = 4;
 
int main ()
{

    int *p;
    int value = 9999;
    p = &value; // int类型必须通过取地址符号进行操作后赋值给指针类型
    printf("the address of value:%d\n", p);
    printf("the value of value:%d\n", *p);
    const char names[] = {
                    "Aabc",
                    "Bdef",
                    "Cghi",
                    "Djkl",
    };
    char *p2;
    p2 = names; // 数组类型可以直接赋值给指针类型
    printf("the value of first arr ele %c\n", *p2);
    for (int i = 0; i < 4; i++) {
        p2++;
        printf("the value of first arr ele %c\n", *p2); // 此时p2指向names[0]，names[0]相当于一个数组
    }
}