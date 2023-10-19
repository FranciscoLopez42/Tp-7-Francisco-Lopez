#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[2][3],fila=0,col=0,min,suma=0;
	for(fila=0;fila<2;fila++){
		for(col=0;col<3;col++){
			printf("De la fila n°%d, ingrese el valor n°%d: ",fila+1,col+1);
			scanf("%d",&matriz[fila][col]);
		}
		printf("\n\n");
	}
	min=matriz[0][0];
	for(fila=0;fila<2;fila++){
		for(col=0;col<3;col++){
			if(matriz[fila][col]<min){
				min=matriz[fila][col];
				if(fila==0){
					matriz[fila][3]*=4;
				}
				if(col==2){
					matriz[fila][col]*=3;
				};
			}
		}
	}
	
	
	for(fila=0;fila<2;fila++){
		for(col=0;col<3;col++){
			printf("%d ",matriz[fila][col]);
			suma=suma+matriz[fila][col];
		}
		printf("\n");
	}
	printf("Valor minimo de la matriz %d \n",min);
	printf("Suma de todos los valores de la matriz %d \n",suma);
	
	system("pause");
	return 0;
}
