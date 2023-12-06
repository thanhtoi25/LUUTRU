#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
	char hoten[50];
	char ma[10];
}Sinhvien;

void doc(char *tenf);
void in(char *tenf);
void tim(char *tenf);

int in(char *tenf){
	FILE * f;
	int n,i;
	Sinhvien sv;
	f = fopen(tenf, "ab");
	printf("nhap vao so luong sinh vien: ");
	scanf("%d",n);
	for(i= 0; i< n, i++){
		printf("nhap sinh vien thu: %d \n", i+1)
		fflush(stdin);
		
	}
}





int viettep(){
	FILE * ten;
	char tentep[67], th ;
	printf("Nhap ten tep: \n");
	gets(tentep);
	ten= fopen(tentep, "w");
	if(ten == NULL)
				{
				printf("sai roi may oi!");
				exit(1);
				}
	while((th = getche()) != '\r' ) putc(th,ten);
	fclose(ten);
	return 0;
	
}

int intep(){
	FILE * ten;
	char tentep[67], th ;
	printf("Nhap ten tep: \n");
	gets(tentep);
	ten= fopen(tentep, "r");
	if(ten == NULL)
				{
				printf("sai roi may oi!");
				exit(1);
				}
	while((th = getc(ten)) != EOF ) printf("%c",th);
	fclose(ten);
	return 0;
}

int matrix(){
	int a[3][3]= {{1,2,3},{2,3,4},{3,4,5}};
	FILE * tep;
	int m =3;
	char tentep[50],ch;
	printf("nhap ten tep: ");
	gets(tentep);
	if ((tep = fopen(tentep, "wt")) == NULL)
	{
	printf("sai roi may oi! ");
	exit(1);

	}else{
		fprintf(tep,"so hang la, so cot la %d\n",m);
		for(int i = 0; i<m ; i++){
			for( int j= 0; j<m; j++){
				fprintf(tep,"%3d",a[i][j]);
			}fprintf(tep,"\n");
		}
	}	fclose(tep);
}




int yeucau4()
{
	int t;
	for(;;){
		printf("*********************\n");
		printf("*   1.Nhap DSSV     *\n");
		printf("*   2. In DSSV      *\n");
		printf("*   3. Tim Kiem     *\n");
		printf("*   4. Thoat        *\n");
		printf("*********************\n");
		printf("  An De Chon: \t\n");
		scanf("%d",&t);
		fflush(stdin);
		if( t == 1)
		{
			nhap("SinhVien.txt");
		}
		else if( t == 2)
		{
			in("SinhVien.txt");
		}
		else if( t == 3)
		{
			doc("SinhVien.txt");
		}
		else break;
				
	}
}
	


int main()

{	
	//matrix();
	//viettep();
	//intep();
	yeucau4();

}

