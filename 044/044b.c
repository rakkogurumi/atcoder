#include <stdio.h>

int main(int argc, char* argv[]){
  char w[100];
  scanf("%s",&w);
  int count[26]={};
  int i=0;
  while(1){
    if(w[i] == '\0') break;
    int pos;
    pos = w[i]-'a';
    count[pos]++;
    i++;
  }
  for(i=0;i<26;i++){
    if(count[i]%2 == 1){
      printf("No\n");
      return 0;
    }else continue;
  }
  printf("Yes\n");
  return 0;
}
