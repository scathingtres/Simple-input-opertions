#include<stdio.h> 
#define IN 1
#define OUT 0
int main(void){
    int c =0 , nr=0 ,nc  = 0,nw= 0;
    int state =OUT;
    putchar('\n');
    while((c= getchar())!=EOF){

        while(c != ' '&& c != '\n' && c!= '\t' && c != EOF)
        {    putchar(c);
             state = IN;
             c = getchar();   }
        if( state == IN){
            putchar('\n');
            state = OUT;}}
    putchar('\n');}

    

