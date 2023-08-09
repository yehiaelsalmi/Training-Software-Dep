
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n,i;
int sum=0;
scanf("%d ",&n);
int arr[n];
if(n>=1 && n<=1000)
{
    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=1 && arr[i]<=1000)
        {
        sum +=arr[i];
        }
}
}
printf("%d ",sum);
return 0;
}








