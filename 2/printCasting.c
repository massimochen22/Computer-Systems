#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(int argc,char **argv){

    if ((signed int)0 == (unsigned int)0){
        printf("0 is equal to 0U\n");
    }

    if ((signed int)-1 < (signed int)0){
        printf("-1 is less than 0 \n");
    }

    if ((signed int)-1 > (unsigned int)0){
        printf("-1 is greater than 0U\n"); 
    }

    if ((int)2147483647 > (int)-2147483647-1){
        printf("2147483647 is greater than -2147483647-1 \n"); 
    }

    if ((unsigned int)2147483647 < (int) -2147483647-1){
        printf("2147483647U is less than -2147483647-1	\n"); 
    }

    if ((int)-1 > (int)-2){
        printf("-1 is greater than -2\n");
    }

    if ((unsigned int)(int)-1 > (int)-2){
        printf("(unsigned) -1 is greater than -2\n");
    }

    if ((int)2147483647 < (unsigned int)2147483648){ //----
        printf("2147483647 is less than 2147483648U\n");
    }

    if ((int)2147483647 > (int)(unsigned int)2147483648){//----
        printf("2147483647 is greater than (int)2147483648U\n");
    }
    return 0;
}