#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,x1,x2,D;
    printf("Enter a: ");
    scanf("%lf",&a);
    printf("Enter b: ");
    scanf("%lf",&b);
    printf("Enter c: ");
    scanf("%lf",&c);
    D=(b*b)-(4*a*c);
    if(D>0){
        printf("D>0\n");
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        printf("First root is %lf\n",x1);
        printf("Second root is %lf",x2);
    }
    else if(D==0){
        printf("D=0\n");
        x1=(-b)/2*a;
        x2=(-b)/2*a;
        printf("First root is %lf\n",x1);
        printf("Second root is %lf",x2);
    }
    else{
        printf("D<0\n");
        x1=(-b+sqrt(-D))/2*a;
        x2=(-b-sqrt(-D))/2*a;
        printf("First root is %lf\n",x1);
        printf("Second root is %lf",x2);
    }
    return 0;
}    