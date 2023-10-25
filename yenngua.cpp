void nguaba(int a[][100],int x, int y){
	int i,j,pos = 0,min = a[0][0];
	int c=x;
	for(i = 0; i < x;i++){
			for(j = 0;j<y; j++){
				if(min > a[i][j]){
						min = a[i][j];
						pos = j;
						}
					int k;
					if( j == y-1){
						for(k = i; k<x; k++){
						if(min < a[k][pos]){
							if(k == x-1){
							if(k == c) continue;
							printf("\ndiem yen ngua %d", a[k][pos]);
							c=k;
									}
						}
					}
		
				}
		
		}}}
			
			
				 	
