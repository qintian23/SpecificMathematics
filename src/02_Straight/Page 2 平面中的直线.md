# 1.2 平面中的直线 Straight line in space

> 由平面中n条直线确定的最大区域数$L_n$是多少？ （瑞士数学家 Jacob Stciner 在1826年首先解决了这个问题）

使n条直线不和其他任何直线平行，且使它不ton过任何存在的交点，所以递归式：

$\begin{array}{l} L_0 = 1 \\ L_n = L_{n-1}+n,(n>0)\end{array}$

展开：

$\begin{array}{l} L_n &=& L_{n-1}+n \\ &=& L_{n-2}+n+(n-1) \\ &=& L_{n-3}+n+(n-1)+(n-2)\\ && \vdots  \\ &=& L_{0}+n+(n-1)+(n-2)+\cdots +2+1 \\ &=& 1+S_n \end{array}$

其中 $S_n=1+2+3+\cdots+(n-1)+n=1+\frac{n(n+1)}{2},(n>0)$

$\therefore L_n=\frac{n(n+1)}{2}+1,(n\ge 0)$

易知，当是曲线条时，$Z_n=L_{2n}-2n=\frac{2n(2n+1)}{2}+1-2n=2n^2-n+1,(n\ge 0)$

`make run dir=02_Straight`