#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void f(int * p);
void ff(int sz [][3]);
/**
 * C 指针是一个用数值表示的地址。因此，您可以对指针执行算术运算。可以对指针进行四种算术运算：++、--、+、-。
 */
 
int main () 
{
    int a = 1;
    int b = 2;
   printf("%d,%d\n", a, b);
   swap(&a, &b);
   printf("%d,%d\n", a, b);

   /**
    * 动态申请内存
    **/
   int n = 20;
   int * students = malloc(sizeof(int) * 20); // int 4字节
   students[19] = 12;
   printf("size of size:%d\n", sizeof(int));
    printf("%d\n",students[19]);
   free(students);
   int c[] = {1,2,3,4,5,6,7,8,9, 10};
   int d[][3] = {{1,2,3}, {4,5,6}};
   int * p = c;
   printf("c[0]=%d\n", *(p+9));
   f(&c);
   ff(d);
   char str [] = "hello";
   char * p = str;
   return 0;
}
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void f(int * p) {
    printf("%d\n", *(p + 8));
}

void ff(int sz [][3]) { // 为什么第一纬可以省略，因为知道第二纬后就可以根据实际的数组进行截断。从而确定大小
    printf("%d\n", sz[1][2]);
}