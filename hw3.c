#include <stdio.h>

int main() {
    int sz = 5;
    for(int i=1;i<=sz;i++){
        for(int j=1;j<=sz-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        puts("");
    }
    return 0;
}