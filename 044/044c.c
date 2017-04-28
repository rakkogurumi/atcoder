#include <stdio.h>

typedef long long ll;

ll dp[55][55][2510];

int main(void){
  int n,a;
  int x[50];
  scanf("%d %d",&n,&a);
  int i,ma=0;
  for(i=0;i<n;i++){
    scanf(" %d",&x[i]);
    ma += x[i];
  }
  for(i=0;i<55;i++){
    dp[i][0][0] = 1ll;
  }
  int j,k,s;
  for(j=0;j<n;j++){
    for(k=1;k<=n;k++){
      for(s=1;s<=ma;s++){
        if(s<x[j]) dp[j+1][k][s] = dp[j][k][s];
        else  dp[j+1][k][s] = dp[j][k][s] + dp[j][k-1][s-x[j]];
      }
    }
  }
  ll ans=0;
  for(k=1;k<=n;k++){
    ans += dp[n][k][k*a];
  }
  printf("%lld\n",ans);
  return 0;
}
