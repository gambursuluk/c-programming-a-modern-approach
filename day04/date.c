#include <stdio.h>
int main(){
    int mounth, day, year;
    printf("Enter date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &mounth, &day, &year);
    printf("Your entered the date %d/%d/%d\n", year, mounth, day);
    return 0;
}