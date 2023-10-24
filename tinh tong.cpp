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

void nt(int a[],int n)
{
	int e = 0;
	int s = 0;
	for (int i=0; i < n; i++)	
	{
		
		int j = a[i] % 2;
		for(int z = 2; z< j ; z++ ) 
		{
			if(a[i]%z == 0)
				{
				break;
				} 					
				e++;
				s = s+ a[i];
			}
		}
	
	}
	printf("\n ma no bang %d,%d", e, s);
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
    nt(a,n);
}
