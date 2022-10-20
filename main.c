#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x,y;
    printf("Enter x:\n");
    scanf("%lf", &x);
    if(x >= -15 && x < -5){
       y = pow(x,3)+2* pow(x,2);
    }
    else if (x >= 2 && x < 18){
        y = 5;
    }
    else if (x >= 58 && x < 104){
        y = sqrt(pow(x,2)+ 10*x );
    }
    else {
        y = -2-x/25;
        }
   system("cls");
   printf("x = %lf", x);
   printf("\ny = %lf", y);

    return 0;
}
