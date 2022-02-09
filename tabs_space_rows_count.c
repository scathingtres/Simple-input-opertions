#include<stdio.h>
int nt =0 ,ns =0 ,nw =0,c = 0;
int main(){

    while(( c = getchar())!= EOF){
         if( c == '\n')
                ++nw;
         if( c == '\t')
             ++nt;
         if( c ==' ')
             ++ns;
              }
    printf("Tabs:  %4d, Spaces:  %6d,  Rows : %2d",nt,ns,nw);
    }
