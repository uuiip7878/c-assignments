#include <stdio.h>
#include <stdbool.h>

bool lz;

void itob(int a,int b){
    if(!lz&&(a&b)/b)lz=!lz;
    else if(!lz&&!((a&b)/b)){
        if(b!=1)itob(a,b>>1);
        return;
    }
    printf("%d",(a&b)/b);
    if(b!=1)itob(a,b>>1);
}

int main(){
    int a,b=1;
    printf("Please enter a number. ");
    scanf("%d",&a);
    if(a!=1){
        do{
            b<<=1;
        }while(a>b);
    }
    itob(a,b);
}