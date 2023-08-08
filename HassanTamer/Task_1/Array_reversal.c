/****************************************
                                k=n
This code calculates the sum : sigma(k!/k)
                                k=1
****************************************/
#include <stdio.h>
/*****************/
unsigned long long getFacDiv_n(int Num);
/*****************/
unsigned long long result;
unsigned long long series;
/*****************/
int main()
{
    unsigned int Term , iterator;
    printf("Enter the number of terms : ");
    scanf("%i",&Term);
    for(iterator = 1 ; iterator <= Term ; iterator ++)
    {
        result = getFacDiv_n(iterator);
        series += result;
    }
    printf("The sum of the series = %llu\n");
    return 0;
}
unsigned long long getFacDiv_n(int Num)
{
    unsigned long long FactorialDiv_n = 1;
    unsigned int counter ;
    for(counter = 1 ; counter < Num ; counter++)
    {
        FactorialDiv_n *= counter;
    }
    return FactorialDiv_n;
}