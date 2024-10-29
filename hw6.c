#include <stdio.h>

int main(){
    int a[5],o[5],e[5];
    int ot,et;
    ot=et=0;
    printf("Please input five integers: ");
    for(int i=0;i<5;i++)scanf("%d",a+i);
    for(int i=0;i<5;i++){
        if(a[i]%2)o[ot++]=a[i];
        else e[et++]=a[i];
    }
    puts("");
    printf("Odd numbers: ");for(int i=0;i<ot;i++)printf("%d ",o[i]);puts("");
    printf("Even numbers: ");for(int i=0;i<et;i++)printf("%d ",e[i]);puts("");
}