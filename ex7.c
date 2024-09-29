#include <stdio.h>
int main ()
{
    int n , count=0;
    printf (" enter a number:");
    scanf(" %d", &n);

     while  (n !=1 ){
        printf("%d\n", n);
        count++;
        if (n%2==0){
              n=n/2 ;
        }else
        
        { n=n*3+1;

        }
     }

    printf ("\n");
    count++;
    printf ("length: %d\n" ,count);

    return 0;
}