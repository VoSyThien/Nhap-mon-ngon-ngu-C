#include <stdio.h>

int main(void) {
			//khai bao bien dongia, so luong, thanh tien
int dongia, soluong, thanhtien;
			//hien thi nhap don gia
  		printf("nhap don gia :"); 
	scanf("%d", &dongia);
      //hien thi nhap so luong
		printf("nhap so luong : ");
	scanf("%d", &soluong);

			// cong thuc tinh thanh tien
thanhtien = dongia * soluong;

			//soluong >=5 vs don gia >=500 se giam 50%
	if (soluong >= 5, dongia>=500){
  		printf("so tien can phai thanh toan la %d", thanhtien *50/100);

}else{

  		printf("so tien can phai thanh toan la %d", thanhtien);
			// neu be hon 5 thi khong giam gia
}
  return 0;
}
