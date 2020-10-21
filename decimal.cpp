#include<stdio.h>

int main() {
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)&&!(a==0&&b==0&&c==0)){
		printf("%.*lf",c,1.0*a/b);//*表示输出位数，代替常量，将变量赋给* 
	}
	return 0;
}
