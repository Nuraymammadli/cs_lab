#include <stdio.h>
int main (){
    int a = 0, b=1 , n;
    printf(" enter a position:\n");
    scanf(" %d" , &n);

    if (n<0)
    {
        printf (" PLEASE ENTER A POSITIVE INTEGER");
        return 1;
    }
    
    for (int i = 1; i < n; i++)
    {
        b=a+b;
        a=b-a;
    }
    printf ("%dth number is:\n %d", n, b);
    return 0;
}