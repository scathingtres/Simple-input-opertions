#include <stdio.h>
int main(void){
    int c =0 ;
    while((c!= EOF) && (c = getchar())!= EOF/*ctr+d typically in  Unix*/){
        
        if(c ==' '){
            putchar(c);
            while( (c = getchar())!= EOF && c ==' '){}}
        putchar(c);



        
            
}}
