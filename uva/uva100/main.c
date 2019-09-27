#include <stdio.h>
#define MAX 1000000

unsigned int CL[MAX], C, I, J, II, JJ, N;

int main(){
   for(I = 1; I < MAX; I++){
      N = I;
      C = 1;
      while(N != 1){
         if(N%2)
            N = 3*N+1;
         else
            N /= 2;
         C++;
      }
      CL[I] = C;
   }

   while(scanf("%u%u", &I, &J) == 2){
      II = I;
      JJ = J;
      if(II > JJ){
         N = II;
         II = JJ;
         JJ = N;
      }
      C = CL[II++];
      while(II <= JJ){
         if(C < CL[II])
            C = CL[II];
         II++;
      }
      printf("%u %u %u\n", I, J, C);
   }
   return 0;
}
