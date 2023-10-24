#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void nhap(int a[][100],int x, int y){
	int i,j;
	for(i = 0;i < y; i++ ){
		for(j =0; j<x ; j++){
			printf("phan tu a[%d][%d]: ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat(int a[][100],int x, int y){
	int i,j;
	for(i = 0;i < y; i++ ){
		for(j =0; j<x ; j++)
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
	printf("/nco %d so nguyen to trong mang: \ntong cac phan tu nguyen to trong %d: ",c,tong);
}
	
void sx1c(int b[], int c) 
{ int i,temp; 
	for(i = 0; i<c; i++){
		if(b[i]< b[i+1]){
	 	  temp= b[i]; 
 		  b[i] = b[i]; 
		  b[i] = temp; 
	}
	 
	 }
	 return b;

}	
	
	
	
	
void sx(int a[][100], int b[],int x, int y){
	int i,j,c = x*y;
	for(i = 0;i < y; i++ ){
		for(j =0; j<x ; j++)
			b[j] = a[i][j];
	}
	sx1c(b,c);
	xuat(b,x,y);
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
    sx(a,b,x,y);
    }
