#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
	char hoten[50];
	char ma[10];
}Sinhvien;

void nhap(char *tenf);
void in(char *tenf);
void tim(char *tenf);

void nhap(char *tenf){
	FILE *f;
	int n, i ;
	Sinhvien sv;
	f = fopen(tenf, "ab");
	printf("nhap vao so luong sinh vien: ");
	scanf("%d",&n);
//	printf("%d ",n);
	for(int i= 0; i< n;i++){
		printf("nhap sinh vien thu: %d \n", i+1);
		fflush(stdin);
		printf(" - MSSV: ");
		gets(sv.ma);
		printf(" - Ho ten: ");
		gets(sv.hoten);
		fwrite(&sv,sizeof(sv),1,f);
	}
	fclose(f);
	printf("an phim bat ki de tiep tuc!");
	getch();
}
 void in(char *tenf){
 	FILE *f;
 	Sinhvien sv;
 	f = fopen(tenf, "rb");
 	printf(" MSSV | Ho va ten \n");
 	fread(&sv, sizeof(sv), 1 ,f);
 	while(!feof(f)){
 		printf(" %s    |     %s\n", sv.ma, sv.hoten);
 		fread(&sv,sizeof(sv),1,f);
 	}
 	fclose(f);
	printf("an phim bat ki de tiep tuc!\n");
	getch();
 }

void tim(char *tenf){
	char MSSV[10];
	FILE *f;
	int vitri = 0;
	Sinhvien sv;
	fflush(stdin);
	printf("Ma so sinh vien can tim: ");
	gets(MSSV);
	f = fopen(tenf,"r");
	while(!feof(f) && vitri == 0)
	{
		fread(&sv, sizeof(sv),1,f);
		if(strcmp(sv.ma,MSSV)==0)
		vitri=1;
	}

	if (vitri == 1){
		printf("Tim thay sv co ma %s ho ten la %s \n",sv.ma,sv.hoten);
	}else {
		printf(" tim khon thay sinh vien co ma %s", MSSV);
	}	
	printf("an phim bat ki de tiep tuc!");
	getch();
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
		printf("\n*********************\n");
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
			nhap("Sinhvien.txt");
		}
		else if( t == 2)
		{
			in("Sinhvien.txt");
		}
		else if( t == 3)
		{
			tim("Sinhvien.txt");
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

