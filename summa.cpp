/*Котов Матвей 202-ИС*/
#include <stdio.h>
int main (){
	int n,sum;
	scanf("%d", &n);
	if (n<0) {
	for (int i=n; i<=1; i++){
	sum=sum+i;
	}
		printf("%d", sum);
	} if(n>0) {
		for (int i=n; i>=1; i--) {
			sum = sum+i;
		}
		printf("%d", sum);
	} if (n==0){
		printf("1");
	}
	
}
