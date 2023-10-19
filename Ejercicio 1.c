#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[2][3],fila=0,col=0;
	for(fila=0;fila<2;fila++){
		for(col=0;col<3;col++){
			printf("De la fila n°%d, ingrese el valor n°%d: ",fila+1,col+1);
			scanf("%d",&matriz[fila][col]);
		}
		printf("\n\n");
	}
	
	printf("\n\n");
	for(fila=0;fila<2;fila++){
		for(col=0;col<3;col++){
			printf("%d ",matriz[fila][col]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
