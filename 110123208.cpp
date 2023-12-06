#
include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/*  //CHUONG TRINH BAI 1
int output(int a[50][50], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
	{
        for(j=0;j<n;j++)
		 {
            printf("%d   ", a[i][j]);
         }
        printf("\n");
    }
}

int sapxep(int m, int n, int a[50][50]){
    int i, j;
    for(i = 0;i<m;i++){
        for(j = 0; j<n; j++){
            int k,l;
            for(k = i; k<m; k++){
                int t = 0;
                if(k == i) t = j+1;
                for(l = t; l<n;l++){
                    if(a[i][j] > a[k][l]){ 
                        int temp = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
    }
     
     output(a,m,n);
}

int NHAP(int a[50][50], int m, int n)
{

	for(int i=0; i < m; i++){
		for(int j=0; j<n ; j++){
			printf("nhap phan tu A[%d][%d]: ", i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	} 


}

bool ktsnt(int p)
{   if(p<2) {	return false; }

    int i;
    for(i=2;i<=sqrt((float)p);i++)
	{
		if(p%i == 0) 
		return false;	
	}
	return true;
 }
int intong(int a[50][50], int m, int n)
{
    int i,j,t=0;
    for(i=0;i<m;i++)
	{
        for(j=0;j<n;j++)
		 {
            if(a[i][j]%3 == 0){
            	if(ktsnt(a[i][j]) == true){
            		t = t + a[i][j];
            	}
            }
         }
    }  printf("tong cac so nguyen to chia het cho 3: %d\n",t);}



int main()
{
int key,a[50][50],m,n;
//bool t = true;

while(true){
system("cls");
printf("****************************************************************\n");
printf("*      1.NHAP MANG 2 CHIEU                                     *\n");
printf("*      2.SAP XEP MANG THEO THU TU TANG DAN                     *\n");
printf("*      3.TONG CAC PHAN TU LA SO NGUYEN TO CHIA HET CHO 3       *\n");
printf("*      0.THOAT                                                 *\n");
printf("****************************************************************\n");
printf("\n \t\t AN PHIM CHON TUONG UNG: ");
fflush(stdin);
scanf("%d",&key);
switch (key)

{
    case 1:
    	{	
		printf("nhap so hang: ");
		scanf("%d",&m);
		printf("nhap so cot: ");
		scanf("%d",&n);
    	NHAP(a,m,n);
    	printf("An phim bat ki de tiep tuc! ");
  		getch();
        break;
        }
 
    case 2:{ 
  		sapxep(m,n,a);
  		printf("An phim bat ki de tiep tuc! ");
  		getch();
    	break;
    	
    }
    	
        
    case 3:
		intong(a, m, n);
		printf("An phim bat ki de tiep tuc! ");
  		getch();
    	break;
    case 0:
    	exit(1);
    	break;
    default:{
    	  printf("khong co phim nay\n");
      printf("An phim bat ki de tiep tuc! ");
  	  getch();
    }
    
}
}
}*/
// CHUONG TRINH BAI 2

