#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc,char **argv){
    printf("\n");
    printf("Value   8       16         32               64 \n");
    printf("---------------------------------------------------------------\n");
    printf("Umax_w 0x%x   0x%x   0x%x   0x%lx\n",UCHAR_MAX,USHRT_MAX, UINT_MAX, ULONG_MAX);  
    printf("       %u    %u    %u   %lu\n\n",UCHAR_MAX,USHRT_MAX, UINT_MAX, ULONG_MAX); 
    printf("Tmin_w 0x%x   0x%x   0x%x   0x%lx\n",(unsigned char)SCHAR_MIN,(unsigned short)SHRT_MIN, INT_MIN, LONG_MIN);  
    printf("       %d   %d   %d  %ld\n\n",SCHAR_MIN,SHRT_MIN, INT_MIN, LONG_MIN); 
    printf("Tmax_w 0x%x   0x%x   0x%x   0x%lx\n",CHAR_MAX,SHRT_MAX, INT_MAX, LONG_MAX);  
    printf("       %d    %d    %d   %ld\n\n",CHAR_MAX,SHRT_MAX, INT_MAX, LONG_MAX); 
    printf("-1     0x%x   0x%x   0x%x   0x%lx\n\n",(unsigned char)-1,(unsigned short)-1, (int)-1, (long)-1);  
    printf("0      0x%02x   0x%04x   0x%08x   0x%016lx\n\n",(unsigned char)0,(unsigned short)0, (unsigned int)0, (unsigned long)0); 
}