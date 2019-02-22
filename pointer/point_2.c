#include <stdio.h>

const int MAX = 3;
/**
 * C 指针是一个用数值表示的地址。因此，您可以对指针执行算术运算。可以对指针进行四种算术运算：++、--、+、-。
 */
 
int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* 指针中的数组地址 */
   ptr = var;
   for ( i = 0; i < MAX; i++)
   {

      printf("存储地址：var[%d] = %x\n", i, ptr );
      printf("存储值：var[%d] = %d\n", i, *ptr );

      /* 移动到下一个位置 */
      ptr++;
   }

   const char *names[] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
   int j = 0;
 
   for ( j = 0; j < MAX; j++)
   {
      printf("Value of names[%d] = %s\n", j, names[j] );
   }
   return 0;
   return 0;
}