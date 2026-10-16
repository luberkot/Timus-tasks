/*Котов Матвей 202-ИС*/
#include <stdio.h>
	int main () {
		int a,b;
		scanf("%d%d", &a,&b);
		if (a%2==0 || a==b || (a-b)%2==0){
			printf("yes");
		} else {
			printf("no");
		}
		return 0;
	}
