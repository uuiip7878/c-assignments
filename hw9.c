#include <stdio.h>
#include <string.h>
#include <malloc.h>

const int C = 'a'-'A';

char swcase(char c){
    if(c>'z'||c<'A'||c>'Z'&&c<'a')return c;
    if(c-'a'>=0)return c-C;
    return c+C;
}

void expand(char* s){
    realloc(s,strlen(s)*sizeof(char)*2);
}

char* scanline(char* s){
    s = malloc(sizeof(char)*2);
    int lim = 2,ln = 1;
    char c = getchar();
    do{
        s[ln-1] = c;
        ln++;
        if(ln>=lim){
            s[ln-1] = '\0';
            expand(s);
            lim*=2;
        }
        c = getchar();
    }while(c != '\n');
    s[ln-1] = '\0';
    return s;
}

int main(){
    char *s;
    s = scanline(s);
    int ln = strlen(s);
    for (int i = 0; i < ln; i++){
        s[i] = swcase(s[i]);
    }
    puts(s);
    free(s);
}