#include<stdio.h>
#include<math.h>
#define MAX 100
void nhap (int a[], int &n)
{
  //su dung vong lap de in ra man hinh
    do
    {
        printf("\n Nhap v�o so phan tu: ");
        scanf("%d", &n);
        //neu so phan tu kh�ng hop le th� in ra m�n h�nh
        if(n <= 0 || n > MAX)
        {
            printf("\n So phan tu kh�ng hop le");
        }
    }while(n <= 0 || n > MAX);
    //d�ng v�ng lap for do nhap c�c gi� tri cho mang
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
/* h�m xuat c�c gi� tri trong mang ra m�n h�nh */
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
