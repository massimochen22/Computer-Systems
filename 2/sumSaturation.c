#include <stdio.h>
#include <limits.h>


int saturating_add(int x , int y) { 
    int mask = 1<<31;
    int xMsb = x & mask;
    int yMsb = y & mask;
    int sum = (unsigned int) (x+y);
    int sMsb = sum & mask;
    int overflow = ~xMsb & ~yMsb & sMsb; 
    int underflow = xMsb & yMsb & ~sMsb; 
    (overflow) && (sum  = INT_MAX); 
    (underflow) && (sum  = INT_MIN); 
    return sum ; 

}

int main (int argc, char ** argv){
    printf("The sum is %d\n", saturating_add(INT_MIN, -4));
}