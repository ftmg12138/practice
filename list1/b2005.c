#include "stdio.h"
#include "string.h"
int main(){
    char c=getchar();
    for(int i=1;i<=3;i++){
        for(int j=1;j<=5;j++){
            if(j>3-i&&j<i+3){
                printf("%c",c);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}