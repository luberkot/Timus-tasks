/*Котов Матвей 202-ИС*/
#include <stdio.h>
int main () {
	int a,b,c,min,m1,m2;
	scanf("%d%d%d", &a,&b,&c);
	m1=a-b*c;
	m2=a-b-c;
	if (m1<m2) {
		printf("%d", m1);
	} else {
		printf("%d", m2);
	}
	return 0;
}


