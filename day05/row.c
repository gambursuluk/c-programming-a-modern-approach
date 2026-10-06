#include <stdio.h>
int main(){
    int num1,num2,num3,num4,
        num5,num6,num7,num8,
        num9,num10,num11,num12,
        num13,num14,num15,num16;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        &num1,&num2,&num3,&num4,
        &num5,&num6,&num7,&num8,
        &num9,&num10,&num11,&num12,
        &num13,&num14,&num15,&num16
    );
    printf("\n\n%d %d %d %d \n", num1,num2,num3,num4);
    printf("%d %d %d %d \n", num5,num6,num7,num8);
    printf("%d %d %d %d \n", num9,num10,num11,num12);
    printf("%d %d %d %d \n", num13,num14,num15,num16);
    
    int row1 = num1+num2+num3+num4;
    int row2 = num5+num6+num7+num8;
    int row3 = num9+num10+num11+num12;
    int row4 = num13+num14+num15+num16;

    int col1 = num1+num5+num9+num13;
    int col2 = num2+ num6+num10+num14;
    int col3 = num3+num7+num11+num15;
    int col4 = num4+ num8+ num12+num16;
    
    int dia1 = num1+num6+num11+num16;
    int dia2 = num4+num7+num10+num13;
    printf("\nRow sums: %d %d %d %d\n", row1, row2,row3,row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", dia1, dia2);

        return 0;
}