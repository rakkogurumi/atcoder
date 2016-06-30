#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
	if(a<b) return a;
	else return b;
}

int main(void){
	int N;
	scanf("%d",&N);
	int a[N+1];
	int i;
	for(i=1;i<N+1;i++){
		scanf("%d",&a[i]);
	}

	int dp[N+1];
	dp[1] = 0;
	dp[2] = abs(a[2]-a[1]);
	for(i=3;i<N+1;i++){
		dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]) ,
			 dp[i-2]+abs(a[i]-a[i-2]));
	}
	printf("%d\n",dp[N]);
	return 0;
}