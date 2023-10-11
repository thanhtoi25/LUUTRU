#include <stdio.h>
void inra(int t){
	int a;
	for (a = 0; a < t; a++) {
    	printf("Gia tri cua a: %d\n", a);
   };
int main(){
	int n,a[10],dem;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
    for (dem = 0; dem < n; dem++) {
    	fflush(sdin);		
    	printf("Gia tri cua a %d \n",dem);																												
    	scanf("%d",&a[dem]);   
    }
    inra(n);
    return 0;
}

	
