<<<<<<< HEAD
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
=======
/*Given a sequence of integers. Find the sum of even and sum of odd elements
with using a single repetition and print them separately*/

#include <stdio.h>

int main() {
    int num;
    int even_sum = 0, odd_sum = 0;

    printf("Enter integers (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break; 
        }
  
        (num % 2 == 0) ? (even_sum += num) : (odd_sum += num);
    }

    printf("Total sum of even elements: %d\n", even_sum);
    printf("Total sum of odd elements: %d\n", odd_sum);

    return 0;}
>>>>>>> 831c033 (Initial commit)
