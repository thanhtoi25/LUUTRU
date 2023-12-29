#include<string.h>
#include<conio.h>
#include<stdio.h>
/*int fibonaci(int n){
	if(n<0){
		return -1;
	}else if(n == 0 || n == 1){
		return n;
	}else{
		return fibonaci(n -1 ) + fibonaci(n-2);
}}
int main(){
	int i;
	printf("10 so dau tien cua day fibonaci\n");
	for(i=0;i<10;i++){
		printf("%d ", fibonaci(i));
	}
} */



/*int tinhgiaithua(int n){
	if(n > 0){
		return n * tinhgiaithua(n-1);
	}else{
		return 1;
	}
}
int main(){
	int t;
	printf("nhap n: ");
	scanf("%d", &t);
	printf("giai thua cua so da cho la: %d", tinhgiaithua(t));
}*/
/*int tinhtong(int n){
	int f;
	if(n==1){
		return 1;
	}else {
		f =n + tinhtong(n-1);
	
	}
		return f;
}
int main(){
	int t;
	printf("Nhap so can tinh tong: ");
	scanf("%d",&t);
	printf("tong cac so tu 1 den n la: %d ", tinhtong(t));
}*/ 

int nhapmang(int a[100], int n, int i ){
	if (i==n) return 0;
	printf("nhap phan tu thu %d: ",i+1);
	scanf("%d",&a[i]);
	nhapmang(a,n,i+1);
}
int xuatmang(int a[100],int  n, int i){
	if (i==n) return 0;
	printf("%d  ",i,a[i]);
	xuatmang(a,n,i+1);
}

int main(){
	int a[100];
	int n,i=0;
	printf("nhap so luong phan tu ");
	scanf("%d",&n);
	nhapmang(a,n,i);
	printf("\nnhap phim bat ki de tiep tuc!\n\n ");
	getch();
	printf("mang vua duoc nhap la:  ");
	xuatmang(a,n,i);
}































