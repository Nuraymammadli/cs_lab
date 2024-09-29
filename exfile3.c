#include <stdio.h>
int main(){

int n;
float sum = 0.0 ;
 
 printf(" please enter an number:");
 scanf("%d", &n);
 for (int i =1 ; i<=n; i++)
 {
    sum+= 1.0 /i;
    
 }
 printf(" the sum is : %.3f\n", sum);
    return 0;
}
