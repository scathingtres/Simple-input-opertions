#include<stdio.h>
int main(void){
    int nwspaces =0, nother =0, c =0;
    int ndigits[10];
    int i =0;
    for(i; i<10; ++i)
        ndigits[i]=0;
    while((c = getchar())!= EOF){
        if(c>='0' && c<='9')
           ++ndigits[c-'0'];
        else if (c == ' ' || c =='\t' || c =='\n')
            ++nwspaces;
        else
            ++nother;
        }
    printf("digits\n\n RESULTS\n\n\n" );
    for(i=0 ; i<10 ; ++i)
        printf("number of %d : %d;\n",i,ndigits[i]);
    printf("number of white spaces:%d;\nnumber of others: %d;\n",nwspaces,nother);}
