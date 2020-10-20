#include<stdio.h>
#define INF 1000000
int main() {
	int n,m;
	double sub=0;
	while(scanf("%d%d",&n,&m)&&!(n==0&&m==0)){
		if(n<m&&m<INF){
			while(n<=m){
				sub+=1.0/n/n;
				n++;
			}
		}
		else{
			break;
		}
		printf("%.5f",sub);
	}
	return 0;
}
