/*Котов Матвей 202-ИС*/
#include <stdio.h>
int main (){
	int n,a,sum,count3=0,count5=0,none=0,common=0,named=0,high=0;
	double sr=0.0;
	scanf("%d",&n);
	for(int i=n; i>0; i--){
		scanf("%d",&a);
		sr=sr+a;
		if(a==3){
			count3++;
		} if(a==5){
			count5++;
		}
	} 
	sr= sr/n;
	if(count3>=1)
		none++;
	if(count5==n)
		named=+4;
	if(sr>=4.5 && count3==0)
		high=+3;
	if(none==0 && named==0 && high==0)
		common=+2;
	if(none>common && none>high && none>named)
		printf("None");
	if(common>none && common>high && common>named)
		printf("Common");
	if(high>none && high>common && high>named)
		printf("High");
	if(named>none && named>common && named>high)
		printf("Named");
	return 0;
}
