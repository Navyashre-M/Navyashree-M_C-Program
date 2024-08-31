#include <stdio.h>
int isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        return 1; 
    }
    return 0;
}

int main() {
    int year;
    int count = 0;
    printf("Enter the current year: ");
    scanf("%d", &year);

    printf("The next 5 leap years are:\n");
    while (count < 5) 
    {
        year++;
        if (isLeapYear(year)) 
        {
            printf("%d\n", year);
            count++;
        }
    }

    return 0;
}

