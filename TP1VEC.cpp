#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// aplicacion para resto realizada con vectores
// trabajo realizado para la materia PROGRAMACION 1° año ANALISTA DE SISTEMAS

/*Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se anotan los
    siguientes datos, que terminan con número de factura = 0

			número de factura
			número de mozo 
			número de mesa
			cantidad de personas que comieron
			monto de la cuenta


 Se desea saber lo siguiente

A.	cantidad de personas atendidas por cada mozo
B.	caja diaria realizada
D.	cuál mozo atendió más personas en total
E.	mesa a la que se facturó más veces, o sea que más recambio de clientes tuvo*/
int main ()
{
	int nfactura, personas,flag=0, nmozo=0,nmesa=0, cont=0, aux=0,max=0,max1=0,aux1=0;
	float monto=0, totalcobrado=0;
	
	int vecmozo[7]={0};
	float vecmozotot[7]={0};
	int vecmesa [13]={0};
	
	printf("Ingrese el numero de factura : \n");
	scanf("%d",&nfactura);
	
	while (flag==0)
	{
		if(nfactura !=0)
		{
			do
			{
				printf("Ingrese numero de mozo : \n");
				scanf("%d",&nmozo);
			}while(nmozo>6);
			
			do
			{
				printf("Ingrese numero de mesa : \n");
				scanf("%d",&nmesa);
			}while(nmesa>12);
			
			printf("Ingrese la cantidad de personas que comeran : \n ");
			scanf("%d",&personas);
			printf("Ingrese el monto de la cuenta : \n");
			scanf("%f",&monto);
			
			totalcobrado=totalcobrado+monto;
			
			vecmozo[nmozo]=vecmozo[nmozo]+personas;
			vecmozotot[nmozo]=vecmozotot[nmozo]+monto;
			vecmesa[nmesa]=vecmesa[nmesa]+1;
			
			vecmozotot[0]=vecmozotot[0]+monto;
			
			printf("Ingrese el numero de factura : \n");
			scanf("%d",&nfactura);
			
			
		} else
			 {
				printf("ERROR DE FACTURA !!\n ");
				flag=1;
			 }
			 
	}
			
			for(cont=1;cont<7;cont++)
			{
				printf("El mozo %d atendio %d personas. \n",cont,vecmozo[cont]);//  A   cant de personas atendidas por cada mozo
			}
			max=vecmozo[1];
			aux=1;
			for (cont=2;cont<7;cont++)
			{
				if(vecmozo[cont]>max)
				{
					max=vecmozo[cont];
					aux=cont;
				}
			}
			
			for(cont=aux;cont<7;cont++)
			{
				if(vecmozo[cont]==max)
				{
					printf("El mozo %d atendio un maximo de %d personas \n",cont,max);//   D     mozo que mas personas atendio
				}
			}
			
			max1=vecmesa[1];
			aux1=1;
			for(cont=2;cont<13;cont++)
			{
				if(vecmesa[cont]>max1)
				{
					max1=vecmesa[cont];
					aux1=cont;
				}
			}
			for(cont=aux1;cont<13;cont++)
			{
				if(vecmesa[cont]==max1)
				{				
					printf("La mesa %d fue solicitada %d veces \n",cont,max1);// E    mesa que mas se utilizo
				}
			}
			
						
		printf("El total cobrado fue de %f \n",totalcobrado);// B  total cobrado(caja)
	
	
	
	
	
}
