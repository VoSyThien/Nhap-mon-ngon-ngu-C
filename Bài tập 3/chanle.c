#include <stdio.h>

int main() {
   int n;
   //gan gia tri n 
   printf("nhap n=");
   scanf("%d", &n);
   if (n % 2 == 0) 
   //hien thi n la so chan
   {printf("%d la so chan", n);
   } else {
     //hien thi n la so le
      printf("%d la so le", n);
      scanf("%d", &n);
      if (n !=0) {
        printf("n khong bang 0");
      } else {
        printf("n bang 0");
      }
   } 
   
   getchar();   
   return 1;
}
