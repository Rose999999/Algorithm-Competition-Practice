#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a*b*c<10||a*b*c>100)
		printf("No answer\n");
	for(int i=10;i<=100;i++){
		if(i%3==a&&i%5==b&&i%7==c)
			printf("%d\n",i);
	}
	return 0;
}
