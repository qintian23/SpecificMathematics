#include <stdio.h>

void swap(char*,char*);
void move(char,char);
void hanoi(char,char,char,int);

int i=0, j=0;

int main(int argv, char** argc)
{
    int n;
    char a='A',b='B',c='C';
    printf("n = ");
    scanf("%d",&n);

    hanoi(a,b,c,n);
    printf("T_%d = %d\n",n,i);
    return 0;
}

void swap(char* x, char* y)
{
    char* temp=x;
    x=y;
    y=temp;
}

void move(char x, char y)
{
    j++;
    printf("Step %d: %c --> %c\n",j,x,y);
    swap(&x,&y);
}

void hanoi(char a, char b, char c, int n)
{
    i++;
    if(n==1)
    {
        move(a,c);
        return;
    }
    else
    {
        hanoi(a,c,b,n-1);
        move(a,c);
        hanoi(b,a,c,n-1);
    }
}