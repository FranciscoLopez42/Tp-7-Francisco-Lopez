#include <stdio.h>
#include <stdlib.h>

int main(){
	int torre[20][6]={0};
	int totalha=0;
	int happ=[20]={0}
	int piso,depto;
	float proppiso=0;
	
	for(piso=0;piso<20;piso++){
		for(depto=0;depto<6;depto++){
			printf("Ingrese la cantidad de habitantes en el piso %d, departamento %d: \n",piso+1,depto+1);
			scanf("%d",&torre[piso][depto]);
			totalha+=torre[piso][depto];
			happ[piso]+=torre[piso][depto];
		}
	}
	for(piso=0;piso<20;piso++){
		proppiso+=happ=[piso];
	}
	proppiso=proppiso/20;
	
	printf("Cantidad total de habitantes: %d\n",totalha);
	printf("Cantidad promedio de habitantes: %d\n",proppiso);
	
	system("pause");
	return 0;
}
