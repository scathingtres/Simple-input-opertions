#include<stdio.h> 
#define IN 1
#define OUT 0
int main(void){
    int c =0 , nr=0 ,nc  = 0,nw= 0;
    int state =0;
    while((c= getchar())!=EOF){
        ++nc;

    if (c == '\n'){
        ++nr;
        
    }
    if ( c == ' ' || c =='\t' || c == '\n')
        state = OUT;


    else if(state == OUT){
    state = IN;
    ++nw;}}
    
    printf("\n words = %d,  \n rows =  %d \n chars = %d \n ",nw,nr,nc);}

