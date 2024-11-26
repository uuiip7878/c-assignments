#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __city{
    char* name,*country;
    int pops;
} city;

char* expand(char* s){
    char* fsafe = realloc(s,strlen(s)*2);
    if(!fsafe){
        puts("Memory reallocation failed in char* expand(char* s). Program exiting.");
        free(s);
        exit(1);
    }
    return fsafe;
}

char* scanline(){
    char* s = malloc(2);
    if(!s){
        puts("Memory allocation failed in char* scanline(). Program exiting.");
        exit(1);
    }
    int lim = 2,ln = 1;
    char c = getchar();
    while(c == '\n'||c == EOF)c = getchar();
    do{
        s[ln-1] = c;
        ln++;
        if(ln>=lim){
            s[ln-1] = '\0';
            s = expand(s);
            lim*=2;
        }
        c = getchar();
    }while(c != '\n'&&c != EOF);
    s[ln-1] = '\0';
    return s;
}

int main(){
    city cities[3];
    int i=3;
    puts("Input three cities:");
    while(i){
        printf("Name> ");
        cities[3-i].name = scanline();
        printf("Country> ");
        cities[3-i].country = scanline();
        printf("Population> ");
        scanf("%d",&cities[3-i].pops);
        i--;
    }
    puts("Printing the three cities: ");
    for(i=0;i<3;i++){
        printf("%d. %s in %s with a population of %d people\n",i+1,cities[i].name,cities[i].country,cities[i].pops);
        free(cities[i].name);
        free(cities[i].country);
    }
}