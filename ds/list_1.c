#include <stdio.h>
#include <stdlib.h>

int* merge_list (int a[], int b[]) {
    int * c = malloc(sizeof(int) * 10);
    int *aa = a;
    int *bb = b;
    int *cc = c;
    while(aa < a +5 && bb < b+5) {
        printf("%d,%d\n", *aa, *bb);
        if (*aa <= *bb) {
            *cc = *aa;
            aa++;
            cc++;
        } else {
            *cc = *bb;
            cc++;
            bb++;
        }
    }
    while(aa < a + 5) {*cc++ = *aa++;}
    while(bb < b + 5) {*cc++ = *bb++;}
    return c;
}
 
int main () 
{
    int a[] = {2,4,6,8,10};
    int b[] = {1,3,5,7,9};
    int * c = merge_list(a, b);
    for (int i = 0; i < 10; i++) {
        printf("c[%d]:%d\n", i, c[i]);
    }
}