#include<stdio.h>
void Nhap(int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        printf("%d \t", a[i]);
    }
}

void Sum(int a[], int n)
{
    int Tong = 1; 
    
    for(int i=0; i<n ; i++)
    {
        Tong = Tong * a[i];}
    printf("\nTich cac phan tu trong mang la: %d", Tong);
}
void lon(int a[],int n)
{
	int MAX = a[0];
    for(int i=0; i< n; i++)
    {
        if(a[i]>MAX)
        {
            MAX = a[i];
        }
    };
    printf("\nPhan tu lon nhat trong mang la %d", MAX);
}


void timso(int a[],int n){
	int x,t;
	t=0;
	printf("\nnhap so can tim");
	scanf("%d",&x);
	for(int i = 0; i<n; i++){
		if(a[i]== x){
			printf("\n vi tri: %d", i );
			t++;
		}else if(i == (n - 1)  && t == 0){
			printf("deoconhe cu" );
		}
	}
		
}

bool KTSNT(int x)
{
	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return false;
	return true;
}
int Tongsnt(int a[], int n)
{
	int tong=0;
	int t = 0;
	for(int i=0; i<n; i++)
		if(KTSNT(a[i])==true){
				tong = tong + a[i];
				t ++;
		}
		
		//return tong;
	printf("\n co tat ca %d so nguyen to trong mang ",t,"\n tong so nguyen to %d", tong);
		printf("\n tong so nguyen to %d", tong);
}





int main()
{
    int a[100];
    int n;
    do{
        printf("Nhap so phan tu cua mang:");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("Nhap lai:");
        }
    }while(n<1 || n>100);
    Nhap(a, n);
    printf("\nCac phan tu co trong mang la:\n");
    Xuat(a,n);
    Sum(a,n);
    lon(a,n);
    timso(a,n);
    Tongsnt(a, n);
}
