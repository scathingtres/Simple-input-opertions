#include <stdio.h>
int main(void){
    int c =0 ;
    while((c!= EOF) && (c = getchar())!= EOF){
        
        while(c == ' '){
            putchar('\\');
            c = getchar();}

        while(c =='\b'){
            putchar('\\');
            putchar('b');
            c = getchar();}

        while( c == '\t'){
            putchar('\\');
            putchar('t');
            c = getchar();
        }
        
        if(c!= EOF){
            putchar(c); }
    }}
