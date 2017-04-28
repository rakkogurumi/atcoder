#include  <stdio.h>

int main(int argc, char* argv[]){
  int n,k,x,y;
  scanf("%d\n%d\n%d\n%d",&n,&k,&x,&y);
  int ans;
  if(k>=n) ans = x*n;
  else ans = x*k + y*(n-k);
  printf("%d\n",ans);
  return 0;
}
