import java.util.Date;
import java.util.Arrays;
import java.text.SimpleDateFormat;

class ArrayMultiple {
    public static void main(String args[]) {
        
        long t1 = System.currentTimeMillis();
        int ma1[][] = {
            {5,8,4},
            {4,6,2},
            {4,8,6},
            {1,2,4},
            {7,8,9}
        };
        int ma2[][] = {
            {5,8,4,7,8,2},
            {4,6,2,6,4,2},
            {4,8,6,8,9,3}
        };
        int ma3[][] = {new int [6],new int [6],new int [6],new int [6],new int [6]};
        for (int i = 0; i < 10000; i++) {
            arrayMultiple(ma1, ma2, ma3);
        }
        long t2 = System.currentTimeMillis();
        System.out.println("程序执行时间：" + (t2-t1));
        // printArray(ma3);
    }
    public static void arrayMultiple (int ma1[][], int ma2[][], int ma3[][]) {
        int rowNum1 = ma1.length;
        int colNum1 = ma1[0].length;
        int colNum2 = ma2[0].length;
        for (int i = 0; i < rowNum1; i++) {
            for (int j = 0; j < colNum2; j++) {
                int temp = 0;
                for (int k = 0; k < colNum1; k++) {
                    temp +=  ma1[i][k] * ma2[k][j];
                }
                ma3[i][j] = temp;
            }
        }
    }
    public static void printArray (int arr [][]) {
        int row = arr.length;
        int col = arr[0].length;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.println(arr[i][j] + '\t');
            }
            System.out.println('\n');
        }
    }
}