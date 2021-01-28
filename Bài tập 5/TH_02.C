#include<stdio.h>

int main (){
// khai bao bien
int n, tong = 0;
// Nhap n
printf("nhap n = ");
scanf("%d", &n);
// Tong m
for(int i = 1; i <= n; i++){
tong += i;
}
// xuat ra man hinh tong m
printf("tong = 1 + 2 +.....+ %d = %d",n,tong);

  return 0;
  }
