#include <stdio.h>

void Sum(int x, int y, int z){
	printf("%d",x+y+z);
	
}

int main(){
	int x,y,z;
	
	printf("Nhap so x: ");scanf("%d",&x);
	printf("Nhap so y: ");scanf("%d",&y);
	printf("Nhap so z: ");scanf("%d",&z);

	Sum(x,y,z);
	return 0;
}
