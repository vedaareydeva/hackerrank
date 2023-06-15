#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  int val;
  for(int row=0;row<(2*n-1);row++){
    for(int col=0;col<(2*n-1);col++) {
        if(row<n){
       if(col<=row){
       printf("%d ",n-col);
       val=n-col;
    }else if (col<=(2*n-2-row)){
        printf("%d ",val);
    }else {
    val++;
    printf("%d ",val);
    }
        }   
        else{
             if(col<=2*n-2-row){
       printf("%d ",n-col);
       val=n-col;
    }else if (col<=(row)){
        printf("%d ",val);
    }else {
    val++;
    printf("%d ",val);
    }
        }
    }
    printf("\n");
  }
      
    return 0;
}
