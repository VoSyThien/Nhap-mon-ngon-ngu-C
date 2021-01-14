#include <stdio.h>

int main(void) {
  int a[4];
  int i, tong = 0;
  a[0] = 3;
  a[1] = 5;
  a[2] = 7;
  a[3] = 2;
	printf("%d ", a[0]);
  printf("%d ", a[1]);
  printf("%d ", a[2]);
  printf("%d ", a[3]);
  for(int i = 0; i < 4; i++){
    printf("%d", a[i]);
  }
  for(int i = 0; i < 4; i++){
 tong = tong + a[i];
 }
printf(" tong cac so tu day tren = %d\n", tong);

return 0;
}
