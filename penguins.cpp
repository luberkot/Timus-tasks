/*Котов Матвей 202-ИС*/
#include <stdio.h>
#include <string.h>
#define MAXN 1000
int main(){
	int i,n,count_emp=0,count_mac=0,count_lit=0,j=0;
	scanf("%d", &n);
	getchar ();
	char arr[MAXN][18];
	for(int i=0; i<n;i++) {
		int len = 0;
		int c = 0;
		while((c = getchar()) != '\n' && c != EOF && len < 17) {
			arr[i][len++]=c;
		}
		arr[i][len] = '\0';
	}
	for(i=0; i<n; i++){
	if(arr[i][j] == 'E'){
		count_emp++;
	}
	if(arr[i][j] == 'M'){
		count_mac++;
	}
	if(arr[i][j] == 'L'){
		count_lit++;
	}
	}
	if(count_mac > count_emp && count_mac > count_lit)
		printf("Macaroni Penguin");
	if(count_emp > count_mac && count_emp > count_lit)
		printf("Emperor Penguin");
	if(count_lit > count_mac && count_lit > count_emp)
		printf("Little Penguin");
	return 0;
}
