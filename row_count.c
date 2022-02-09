#include<stdio.h>
int nw,c;
int main(){
    nw  =0; 
    while(( c = getchar())!= EOF){
         if( c == '\n')
                ++nw;
            
              }
    printf("%d\n",nw);
    }
