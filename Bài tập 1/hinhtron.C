#include <stdio.h>
int main(void) {
  // khai bao bien DT, CV và R kieu double
  double DT, CV, R;
  // gan gia tri cho R
  R = 1.5;
  // khai bao hang PI
  const double PI = 3.14;
  //tinh chu vi hinh tron
  CV = 2 * R * PI;
  // tinh dien tich hinh tron
  DT = R * R * PI;
  printf("CV = 2 * R * PI = %0.2f\n",CV);
  printf("DT = R * R * PI = %0.2f\n",DT);
  //hien thi R, CV, DT theo 2 hang 3 cot
  printf("R | CV | DT\n");
  printf("1.5 | 9.42 | 7.06");
return 0;
}
