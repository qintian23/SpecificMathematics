#include <stdio.h>

int L(int);

int main(int argv, char** argc)
{
    int n=0;
    printf("n = ");
    scanf("%d",&n);
    printf("L_%d = %d\n",n,L(n));
    return 0;
}

int L(int n)
{
    if(n==0) return 1;
    else
    {
        return L(n-1)+n;
    }
}