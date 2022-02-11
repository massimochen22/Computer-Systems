/* Print a float in binary: ftob.c */
#include <stdio.h>
#include <stdlib.h>
//void float_to_string(float f, char *s, int n);
void float_to_string(float,char *,int);
void print_float();
#define LEN 32
#define EXP_32 8		/* ending index of s for exponent */
#define MAN_32 9		/* starting index of s for significand */
int main(int argc, char **argv) {
  int n=LEN;
  float f;
  char s[LEN];
  f = atof(argv[1]);
  printf("f=%f\n",f);
  float_to_string(f,s,n);
  print_float(s,n);
  return 0;
}
/* convert float to binary and store in s, a string of 32 chars */
void float_to_string(float f, char *s, int n){
  unsigned int u_int;
  int i;			/* for loop index */
  u_int = *(unsigned int*)&(f);
  unsigned int mask;
  for (i=0; i<n; i++) {
    mask = 1<<((31-i));
    if ((u_int & mask)>>(31-i) == 1)
      s[i] = '1';
    else
      s[i] = '0';
  }
}
/* print space in between sign bit, exponent, and significand */
void print_float(char *s, int n) {
  int i=0;
  for (;i<n;i++){
    if (i==1 || i ==9)
      printf(" ");
    printf("%c",s[i]);
  }
  printf("\n");
}
/* End of ftob.c */