#include<stdio.h>
int main()
{
    long long int binary;
    int octal = 0, remainder, temp = 1;

    printf("Enter Binary Number: ");
    scanf("%lld", &binary);

    while(binary != 0)
    {
        remainder = binary % 10;
        octal = octal + remainder * temp;
        temp = temp * 2;
        binary = binary / 10;
    }
    printf("Octal Number Is: %lo", octal);

    return 0;
}