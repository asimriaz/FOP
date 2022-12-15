// This program can be used to convert a number to words

#include <stdio.h>
#include <string.h>
void convert(int num)
{
    char *units[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *hundreds[] = {"", "hundred and", "thousand"};

    // code here
}

int main(void)
{
    int a;
    printf("\nEnter the number : ");
    scanf("%d", &a);
    if(a > 100000)
    {
        printf("Number should be less than 100000");
        return 0;
    }
    convert(a);
    return 0;
}