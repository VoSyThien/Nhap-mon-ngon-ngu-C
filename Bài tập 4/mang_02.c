#include <stdio.h>

int main(){
	int n,c;
	printf("nhap so luong phan tu: ");scanf("%d",&n);
	int a[n];
	
	
	for (c=0;c<n;c++){
		printf("nhap phan tu thu %d: ",c);scanf("%d",&a[c]);
	}
	
	printf("\n\nMang a[");
	for (c=0;c<n;c++){
		printf(" %d ",a[c]);
	}
	printf("]\n\n");
	
	printf("cac so le trong mang: ");
	for (c=0;c<n;c++){
		if(a[c]%2==1){
			printf(" %d ",a[c]);
		}
	}
	return 0;
}
