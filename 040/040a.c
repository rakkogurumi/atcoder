#include <stdio.h>

int min(int a, int b);

int main(int args, char *argv[]){
	int n,x;
	scanf("%d %d",&n,&x);
	printf("%d\n",min(x-1,n-x));
	return 0;
}

int min(int a, int b){
	if(a>b) return b;
	else return a;
}