#include <stdio.h>
#include <math.h>

double getd(double *n){
    double mu=(n[0]+n[1]+n[2]+n[3]+n[4])/5,sum=0;
    for(int i=0;i<5;i++){
        sum+=pow(n[i]-mu,2);
    }
    return sqrt(sum/5);
}

int main(){
    double n[5],s;
    printf("Enter 5 real numbers: ");
    for(int i=0;i<5;i++)scanf("%lf",n+i);
    s = getd(n);
    printf("Standard Deviation: %.3f",s);
}