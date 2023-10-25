#include"stdio.h"
int main(){
	int x,y,z;
	for(x = 1;x < 48;x ++)
	{
		for(y = 1; y < 94;y ++){
			for(z = 1; z <95;z ++){
				 	//int e = 1/3;
				 	if(z%3 == 0){
				 		float r;
					r = 5*x + 3*y + z/3;
				 	int m= x + y + z ;
					if( m == 100.00 ){
						if(r == 100.00)
						printf("dung %d, nam %d gia %d \n", x, y ,z);
				}
			}
		}
	}
	
}
				 	}
				 	
