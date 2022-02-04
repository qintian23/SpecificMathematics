# 递归问题 Recursive problem

## 1.1 汉诺塔 Tower of Hanoi

> 设有n个圆盘，三根杆，按把大放在小上面的顺序摆放到第一根杆子上，问需要多少步T？

当为$n=0$个时，$T_0=0$步；当$n>0$时，$T_n=2T_{n-1}+1$ 步

$\because T_0+1=1$ 

 $T_n+1=2T_{n-1}+2$, 

if $U_n=T_{n-1}+1$,

s.t. $U_n=1$

$U_n=2U_{n-1},(n>0)$

$\therefore U_n=2^n,即 T_n=2^n-1$

* 递归算法

```
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
```

