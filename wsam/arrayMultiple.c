#include<stdio.h>
#include<time.h>

void multiply (int (*p1)[3], int rownum1, int (*p2)[6], int rownum2, int (*res)[6]);

int main(int argc,char **argv){
    clock_t start_t, end_t;
    double total_t;
    int i;
    
    int ma1[][3] = {
        {5,8,4},
        {4,6,2},
        {4,8,6},
        {1,2,4},
        {7,8,9}
    };
    int ma2[][6] = {
        {5,8,4,7,8,2},
        {4,6,2,6,4,2},
        {4,8,6,8,9,3}
    };
    int res[5][6];

    int (*p1)[3] = ma1;
    int (*p2)[6] = ma2;
    int (*pr)[6] = res; 

    int rowNum1 = sizeof(ma1) / sizeof(*p1);
    int rowNum2 = sizeof(ma2) / sizeof(*p2);

    start_t = clock();
    printf("程序开始，start_t = %ld\n", start_t);
    for(i=0; i< 10000; i++)
    {
        multiply(p1, rowNum1, p2, rowNum2, pr);
        // for (int i = 0; i < 5; i++) {
        //     for (int j = 0; j < 6; j++) {
        //         printf("%d\t", res[i][j]);
        //     }
        //     printf("\n");
        // }
        //  printf("\n");
    }

    


    end_t = clock();
    printf("程序结束，end_t = %ld\n", end_t);
    
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC ;
    printf("每秒cpu占用时钟个数:%d\n", CLOCKS_PER_SEC);
    printf("CPU 占用的总时间(ms)：%f\n", total_t * 1000 );
    printf("程序退出...\n");
    
    return(0);
}

void multiply (int (*p1)[3], int rowNum1, int (*p2)[6], int rowNum2, int (*res)[6]) {
    int colNum1 = sizeof(*p1) / sizeof(int);
    int colNum2 = sizeof(*p2) / sizeof(int);
    for (int i = 0; i < rowNum1; i++) {
        for (int j = 0; j < colNum2; j++) {
            int temp = 0;
            for (int k = 0; k < colNum1; k++) {
                temp +=  (*(*(p1+i)+k)) * (*(*(p2+k)+j));
                // printf("%d*%d+", (*(*(p1+i)+k)), (*(*(p2+k)+j)));
            }
            // printf("%d\n", temp);
            *(*(res+i) + j) = temp;
        }
        // printf("\n");
    }
}