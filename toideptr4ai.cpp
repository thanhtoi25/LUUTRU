#include <stdio.h>
#include <conio.h>
#include <math.h>
int nhapmang(int a[], int n){
	for(int i=0;i <n; i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
}

int xuatmang(int a[], int n){
	printf("mang cua ban la: ");
	for(int i=0;i <n; i++){
		printf("%d ",a[i]);
	}
}
int xuatmang1(int a[], int n){
	//printf("mang cua ban la: ");
	for(int i=0;i <n; i++){
		printf("%d ",a[i]);
	}
}


int KTTT(int a[], int n,int x){
	for(int i=0;i <n; i++){
		if (a[i] == x ){
			printf("x co trong mang \n");
			return 1;
		}
	}
	return -1;
}
int TKTT(int a[], int n){
	int x,z=0,b[100];
	printf("\nnhap gia tri can tim: \n");
	scanf("%d", &x);
	if(KTTT(a,n,x) == 1){
		for(int i=0;i <n; i++){
			if (a[i] == x ){
				b[z] = i;
				z++;
			}
		}
	printf("x lap lai %d lan ",z);
	printf("\nvi tri x xuat hien la: ");
	xuatmang1(b,z);
	}else printf("x khong co trong mang");
	
}

int KTSNT(int n){
	if (n == 2) return 1;
	if (n <= 1 )return -1;
	for(int i= 2 ;i <= n/2 ; i++){
	if (n % i == 0 ){
		return -1;
		}
	}
	return 1;
};

int SNT(int a[], int n){
	int z=0,b[100];
	for(int i=0;i <n; i++){
		if( KTSNT(a[i]) == 1 ){
			b[z] = i;
			z++;
		}
	}
	if(z == 0){
		printf("\nkhong co so nguyen to trong mang");
	}else{
		printf("\nco %d so nguyen to trong mang",z);
		printf("\nvi tri so nguyen to xuat hien la: ");
		xuatmang1(b,z);
	}

}




int TKNP(int a[], int cuoi,int x){
	int dau = 0;
    while (dau <= cuoi) {
        int mid = dau + (cuoi - dau)/2;
        if (a[mid] == x)
            return mid;       	
        else if (a[mid] < x)
            dau = mid+1;
        else
            cuoi = mid-1;
    }
    return -1;
}    	

int kiemtra(int a[],int n){
	int x,z=1,b[100],mid = TKNP(a,n,x);
	printf("\nnhap gia tri can tim: \n");
	scanf("%d", &x);
	if(TKNP(a,n,x) == -1){
		printf("deo co");
	}else{
	b[0] = mid;
	for(int i = mid; i>0 ;i--){
		if(a[i]== x ){
			b[z] == i;
			z++;
		}else break;
	}
	for(int i = mid; i<n ;i++){
		if(a[i]== x ){
			b[z] == i;
			z++;
	}else break;
	}printf("vi tri x xuat hien %d" ,xuatmang1(b,z));
	}
}



int main(){ 
	int a[100],n;
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
//	TKTT(a,n);
//	SNT(a,n);
	kiemtra(a,n);
}



