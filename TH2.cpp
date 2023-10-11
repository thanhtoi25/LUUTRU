#include<stdio.h>
#include<math.h>
#define MAX 100
void nhap (int a[], int &n)
{
  //su dung vong lap de in ra man hinh
    do
    {
        printf("\n Nhap vào so phan tu: ");
        scanf("%d", &n);
        //neu so phan tu không hop le thì in ra màn hình
        if(n <= 0 || n > MAX)
        {
            printf("\n So phan tu không hop le");
        }
    }while(n <= 0 || n > MAX);
    //dùng vòng lap for do nhap các giá tri cho mang
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
/* hàm xuat các giá tri trong mang ra màn hình */
void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
    	printf("%d", a[i]);
    }
}
int main()
{
    int n;
    int a[Max];
    nhap(a, n);
    xuat(a, n);
}
