#include<stdio.h>
#include<string.h>
#define maxn 20
int a[maxn][maxn];
int main() {
	int n,x,y,tot=0;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	tot = a[x=0][y=n-1] = 1;
	while(tot<n*n)
	{
		while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot;//先加tot，再赋值 
		while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;
		while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++tot;
		while(y+1<n && !a[x][y+1]) a[x][++y] = ++tot;
	}
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++) printf("%3d",a[x][y]);//保证数与数之间的间隔，%3d输出位宽为3位 
		printf("\n");
	}
	return 0;
}
