#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int x = 0,y = 0,maxand = 0,maxor = 0, maxxor = 0;
  int and, or, xor;
  for(x=1; x <= n; x++){
      for(y=x+1; y <= n; y++){
          
          and = x&y;
          or = x|y;
          xor = x^y;
          
        if(and>maxand && k>and)
            maxand = and;
        
        if(or>maxor && k>or)
            maxor = or;
            
        if(xor>maxxor && k>xor)
            maxxor = xor;
            
      }
  }
  printf("%d\n%d\n%d",maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

