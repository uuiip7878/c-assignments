#include <stdio.h>

void swap(int *a, int *b){
    if(a==b)return;
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

void swparr(int a[],int b[], int sz){
    for(int i=0;i<sz;i++){
        swap(a+i,b+i);
    }
}

void print(int **ptr){
    for(int j=0;j<2;j++){
        printf("arr%d:",j+1);
        for(int i=0;i<6;i++){
            printf(" %d",ptr[j][i]);
        }
        puts("");
    }
}

int main(){
    int arr1[6]={1,2,3,4,5,6},arr2[6]={7,8,9,10,11,12};
    int *ptr[2]={arr1,arr2};
    print(ptr);
    swparr(ptr[0],ptr[1],6);
    puts("\nafter swap");
    print(ptr);
}