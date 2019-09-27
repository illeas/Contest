#include <stdio.h>

int main()

{
  int mark[5] = {2, +, 2, -, 1};
  for(int i=0; i<5; i++){
    scanf("%d", &mark[i]);
  }
  int result=0;
  for(int j=0; j<5; j++){
      if(mark[j]=='+'){
        result += mark[j];
      }else if(mark[j]=='-'){
        result -= mark[j];
      }
  }
    printf("%d", result);
  return 0;
}

