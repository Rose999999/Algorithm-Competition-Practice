#include <stdio.h>
int main() {
	int a,b,c;
	for(int i = 100; i <=999; i++){
		a = i/100;
		b = i/10%10;
		c = i%10;
		if(i==a*a*a+b*b*b+c*c*c)
			printf("%d ",i);
	}
	return 0;
}
