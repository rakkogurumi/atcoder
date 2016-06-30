#include <stdio.h>
#include <stdlib.h>

int min(int a, int b){
	if(a<b) return a;
	else return b;
}

int main(void){
	int n;
	scanf("%d",&n);
	int h,w;
	int ans = 100000;
	for(h=1;h<=n;h++){
		for (w=1;w<=n/h;w++){
			ans = min(ans, (n-h*w) + abs(h-w));
		}
	}
	printf("%d\n",ans);
	return 0;
}
