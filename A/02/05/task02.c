#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c;
   scanf("%f",&a);
   scanf("%f",&b);
   scanf("%f",&c);

   if(a>b && a>c){
    printf("%.2f\n",a);
   }
   if(b>a && b>c){
    printf("%.2f\n",b);
   }
   if(c>a && c>b){
    printf("%.2f\n",c);
   }
}
