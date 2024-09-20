#include <stdio.h>

int main(){
    double a;
    printf("Please enter kilometers: ");scanf("%lf",&a);
    printf("%.1f km is equal to %.1f miles.\n",a,a/1.609);
    return 0;
}