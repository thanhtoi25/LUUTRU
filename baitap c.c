#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void nhap(int a[][100],int x, int y){
	int i,j;
	for(i = 0;i < x; i++ ){
		for(j =0; j<y ; j++){
			printf("phan tu a[%d][%d]: ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat(int a[][100],int x, int y){
	int i,j;
	for(i = 0;i < x; i++ ){
		for(j =0; j<y ; j++)
			printf("%d   ",a[i][j] );	
		printf("\n");
	}
		
}

void timmax(int a[][100],int x, int y){
	int i,j,max;
	max = a[0][0];
	for(i = 0;i < y; i++ ){
		for(j =0; j<x ; j++)
				if(max < a[i][j])
					max = a[i][j];
	}
	printf("\nphan tu lon nhat trong mang %d: ",max);
}

bool ktsnt(int n){
	int i;
	if(n<2) 
	return false;
	for(i = 2; i< n/2; i++)
		if( n%i == 0) return false;
	return true;
	
}

int songuyento(int a[][100],int x, int y){
	int c = 0;
	int i,j;
	int tong = 0;
	for(i = 0;i < y; i++ ){
		for(j =0; j<x ; j++)
				if(ktsnt(a[i][j]) == true )
				tong = tong + a[i][j] ;
				c++;
	}
	printf("\nco %d so nguyen to trong mang: \ntong cac phan tu nguyen to trong %d: ",c,tong);
}
	
void sx(int x, int y, int a[][100]){
    int i, j;
    for(i = 0;i<x;i++){
        for(j = 0; j<y; j++){
            int k,l;
            for(k = i; k<x; k++){
                int t = 0;
                if(k == i) 
				t = j+1;
                for(l = t; l<y;l++){
                    if(a[i][j] > a[k][l]){
                        int temp = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
    }
    xuat(a,x,y);
}

void tong(int a[][100],int x, int y){
    int i, j,tong = 0;
    for(i = 0;i<x;i++){
        for(j = 0; j<y; j++){
		if(i==j) tong = tong + a[i][j];
		}
	}
	printf("tong duong cheo chinh: %d ",tong);
}

void nguaba(int a[][100],int x, int y){
	int i,j,pos = 0,min = a[0][0];
	int c=x;
	for(i = 0; i < x;i++){
			for(j = 0;j<y; j++){
				if(min > a[i][j]){
						min = a[i][j];
						pos = j;
						}
					int k;
					if( j == y-1){
						for(k = i; k<x; k++){
						if(min < a[k][pos]){
							if(k == x-1){
							if(k == c) continue;
							printf("\ndiem yen ngua %d\n", a[k][pos]);
							c=k;
									}
						}
					}
		
				}
		
		}}}
			
void chan(int a[][100],int x, int y){
    int i, j,tong = 0;
    for(i = 0;i<x;i++){
        for(j = i+1; j<y; j++){
		if(a[i][j] % 2 ==0 ) tong ++;
		}
	}
	printf("\nco tat ca %d so chan trong tam giac tren cua duong cheo chinh\n",tong);
}
void le(int a[][100],int x, int y){
    int i, j,tong = 0,t=0;
    for(i = x-1;i>=0;i--){
        for(j = t; j<y; j++){
		if(a[i][j] % 2 !=0 ) tong ++;
		}
		t++;
	}
	printf("\nco tat ca %d so le trong tam giac duoi cua duong cheo phu\n",tong);
}
          			
int tich(){
	int a[100][100];
	int b[100][100];
	int x,y;
    printf("nhap so dong ma tran a: ");scanf("%d", &x);
    printf("nhap so cot ma tran b: ");scanf("%d", &y);
    nhap(a,x,y);

    printf("nhap so dong ma tran b: ");scanf("%d", &z);
    printf("nhap so cot ma tran b: ");scanf("%d", &t);
    nhap(b,z,t);
	int i, j,t[100][100];
	for(i = 0;i<x;i++){
    	for(j = 0; j<y; j++){
			t[i][j] = a[i][j] * b[i][j];
		}
	xuat(t,z,t)	
}
	
	
int main() {
	int a[100][100];
	int b[100];
	int x,y;
    printf("nhap so dong");scanf("%d", &x);
    printf("nhap so cot");scanf("%d", &y);
    nhap(a,x,y);
    xuat(a,x,y);
    timmax(a,x,y);
    songuyento(a,x,y);
    printf("\n");
    sx(x,y,a);
    nguaba(a,x,y);
    tong(a,x,y);
    chan(a,x,y);
    le(a,x,y);
    }
