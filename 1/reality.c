#include <stdio.h>
#include <stdlib.h>

void reality_1_example_1();
void reality_1_example_2();
void reality_3();
double fun();

typedef struct {
  int a[2];
  double d;
} struct_t;

int main(int argc,char **argv) {
  int n;			/* used to loop for reality_3() */

  reality_1_example_1();
  reality_1_example_2();

  if (argc==1) n = 5;		/* default 5 iter */
  else n = atoi(argv[1]);
  reality_3(n);

  return 0;
}

void reality_1_example_1(){
  float f=50000;
  int i=40000;
  printf("reality_1_example_1_float: f=50000.000000\n");
  printf("f*f= %f >= 0\n\n",(f*f));
  printf("reality_1_example_1_int: i=40000\n");
  printf("i*i= %u >= 0\n\n",(i*i));
  i=50000;
  printf("reality_1_example_1_int: i=50000\n");
  printf("i*i= %d < 0\n\n",(i*i));
}

void reality_1_example_2(){
  float fx=1e20,fy=-1e20,fz=3.14;
  unsigned int uix=12,uiy=34,uiz=56;
  int six=12,siy=34,siz=56;

  printf("reality_1_example_2_unsigned: uix=12 uiy=34 uiz=56\n");
  printf("((uix+uiy)+uiz)=%u == (uix+(uiy+uiz))=%u\n\n",((uix+uiy)+uiz),(uix+(uiy+uiz)));

  printf("reality_1_example_2_signed: six=12 siy=34 siz=56\n");
  printf("((six+siy)+siz)=%d == (six+(siy+siz))=%d\n\n",((six+siy)+siz),(six+(siy+siz)));

  printf("reality_1_example_2_float: fx=1.000000e+20 fy=-1.000000e+20 fz=3.140000\n");
  printf("((fx+fy)+fz)=%e != (fx+(fy+fz))=%e\n\n",((fx+fy)+fz),(fx+(fy+fz)));

}

void reality_3(int n) {
  double d;
  int i;
  printf("reality_3: n=%d iterations\n",n);
  for (int variable = 0; variable<=n;variable++){
      fun(variable);
  }
  /* fill here */
}

double fun(int i){
  volatile struct_t s;

  s.d = 3.14;
  s.a[i] = 1073741824;
  printf("fun(%d) -> %f\n",i,s.d);  

  return s.d;
}

/* End of file */