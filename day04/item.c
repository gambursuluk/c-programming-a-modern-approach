#include<stdio.h>
int main(){
    int number;
    float price;
    int date;
    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter date: ");
    scanf("%d",&date);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%.2f\t%d\n",number, price,date);
    return 0;
}