#include <cs50.h>
#include <stdio.h>
#include <math.h>

int getstart(void);
int getend(int size);
int docomp(int size, int end);

int main(void)
{
    // TODO: Prompt for start size
    int s= getstart();
    // TODO: Prompt for end size
    int e=getend(s);
    // TODO: Calculate number of years until we reach threshold
    int y=docomp(s,e);
    // TODO: Print number of years
    printf("Years: %i\n",y);
}
int getstart(void){
   int size;
    do{
         size= get_int("What is the starting population? ");
    } while(size<9);
    return  size;
}

int getend(int size){
    int end;
    do{
         end = get_int("Where would you like the population to end? ");
    }while(end<size);
    return end;
}

int docomp(int size, int end){
int y;
    for( y=0;size<end;y++){
        size=size+(size/3)-(size/4);
        size=round(size);
    }
    return y;
}
