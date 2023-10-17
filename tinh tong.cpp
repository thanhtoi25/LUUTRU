#include<stdio.h>
#include<math.h>
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
bool KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0) 
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2) 
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
    
}
int demnguyento(int a[], int n)
{
    int dem = 0;
    int tong = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == true && a[i] < 100)
        {
            dem++;
            tong = tong + a[i];
        }
    }
	printf("\nso nguyen to %d \ntong cac so nguyen to %d" ,dem, tong);
	return dem;
}
void timvitri(int a[], int n)
{
	int x;
	printf("\nnhap gia tri can tim: ");
	scanf("%d",&x);
	int c = 0;
	for (int i = 0 ; i < n ; i++ ){
		if (a[i] == x)
		{
			printf(" \nvi tri cac so bang gia tri: %d",i);
			c++;
		} else if(i == n-1 && c==0 )
		 	{
			printf("\ndeo co");
		 	};
	}
}



void sapxep(int a[], int n)
{
	for (int i = 1 ; i < n ; i++ ){
			for (int j = 0 ; j < n ; j++ ){
		
		if (a[j] > a[i] ){
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			
		}
	}
}
printf("\nmang duoc xap xep: ");
Xuat(a,n);
}




void themphantu(int a[], int n)
{
	int z,PhanTu;
	printf("\nthem phan tu vao mang: ");
	scanf("%d", &PhanTu);
	for(int i = n; i > z; i--){
        a[i] = a[i-1];
    }
    a[z] = PhanTu;
    n++;
    sapxep(a,n);

}


 void xoaphantu(int a[], int n){
 	int x;
 	printf("\nxoa phan tu trong mang: ");
	scanf("%d", &x);
	
    for(int i=0;i<n;i++){
		 	if(a[i]==x)
			   {
			     for(;i<n;i++)
				 a[i]=a[i+1];
			     n--;     
			   }
	}
	Xuat(a,n);
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
    demnguyento(a,n);
	timvitri(a,n);
	sapxep(a,n);
	themphantu(a,n);
	xoaphantu(a,n);
	
    
}
