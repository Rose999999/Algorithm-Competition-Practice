#include<stdio.h>

int add(int num)
{
    int i, j, k;
    i = num / 100;        //百位
    j = num / 10 % 10;    //十位
    k = num % 10;         //个位
	return(i+j+k);
}

int mul(int num)
{
    int i, j, k;
    i = num / 100;        //百位
    j = num / 10 % 10;    //十位
    k = num % 10;         //个位
	return(i*j*k);
}

int main() {
	int i,j,k,result_add,result_mul;
	for(i=123;i<=329;i++){
		j=i*2;
		k=i*3;
		result_add=add(i)+add(j)+add(k);
		result_mul=mul(i)*mul(j)*mul(k);
		
		if(result_add==45&&result_mul==362880)
			printf("%d %d %d\n",i,j,k);
	}
	return 0;
}
