#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   char  s[1000];
scanf("%s", s);
int n = strlen(s);
char numbers[] = {'0','1','2','3','4','5','6','7','8','9'};
int freqs[10] = {};

for (int i = 0; i < n; i++)       
    for (int j = 0; j < 10; j++)
        freqs[j] += (s[i] == numbers[j]) ? 1 : 0;

for (int i = 0; i < 10; i++)
    printf("%d ", freqs[i]); 
    return 0;
}
