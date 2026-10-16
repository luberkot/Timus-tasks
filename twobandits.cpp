/*Котов Матвей 202-ИС*/
#include <stdio.h>
int main () {
	int a,b,q;
	scanf("%d%d", &a,&b);
	q = a+b-1;
	a = q-a;
	b = q-b;
	printf("%d %d", a,b);
	return 0;
}
