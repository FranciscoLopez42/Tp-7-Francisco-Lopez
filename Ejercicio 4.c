#include <stdio.h>
#include <stdlib.h>

int main(){
	int repli[3]={0};
	int repco[3][12]={0};
	int retotal=0;
	
	while(1){
		int coche,linea,recaudacion;
		printf("Ingrese el numero de coche (1-12), numero de linea (1-13) y recaudacion (ingrese un valor menor a 1 para salir): \n");
		scanf("%d",&coche);
		if(coche<1){
			break;
		}
		scanf("%d %d",&linea,&recaudacion);
		repli[linea-1]+=recaudacion;
		repco[linea-1][coche-1]+=recaudacion;
		retotal+=recaudacion;
	}
	for(int i=0;i<3;i++){
		printf("Recaudacion total de la linea %d: %d\n",i+1,repli[i]);
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<12;j++){
			printf("Recaudacion total para el coche %d de la linea %d: %d",j+1,i+1,repco[i][j]);
		}
	}
	printf("Recaudacion total: %d\n",retotal);
	
	system("pause");
	return 0;
}
