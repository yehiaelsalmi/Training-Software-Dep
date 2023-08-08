#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *arr , n;
    int sum = 0;
    printf("Enter the number of Elements : ");
    scanf("%d",&n);
    arr = malloc(n*sizeof(int));
    printf("Enter The Elements : ");
    for(int i = 0 ; i<n ; i++)
    {
                scanf("%i", &arr[i]);
                sum += arr[i];
    }
    printf("sum = %i",sum);
    free(arr);
    return 0;
}
