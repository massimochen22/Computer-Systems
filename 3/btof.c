#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define LEN 32

int main(int argc, char **argv) {
  //argv[1] = sign bit 
  //argv[2] = exponent 
  //argv[3] = fraction
  char s[LEN];
  int i;	
  int j = 0;
  printf("b = %s %s %s\n",argv[1],argv[2],argv[3]);
  for (i=0;i<strlen(argv[1]);i++){
    s[j] = argv[1][i];
    j++;
  }
  for (i=0;i<strlen(argv[2]);i++){
    s[j] = argv[2][i];
    j++;
  }
  for (i=0;i<strlen(argv[3]);i++){
    s[j] = argv[3][i];
    j++;
  }

  unsigned int number = (unsigned int) strtol(s, NULL, 2);
  float f = *(float*)&(number);
  printf("f=%f\n",f);

   return 0;
}