#include <stdio.h>

int max_num (int a , int b)
{
    if (a>b)
    return a;
    else {
    return b;
    }
}
int max_of_four(int a, int b, int c, int d)
{
    int n = max_num(a,b);
    n=max_num(n, c);
    n=max_num(n,d );
    return n;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
