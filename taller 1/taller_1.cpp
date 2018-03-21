#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct estudiante 
{
char nombre[30];
	int notas; 
	
}estudiante[5];



int main(int argc, char** argv) 
{
	int opcion;
	printf("\t\t\t\t\t  MENU \n");
	printf("\n");
	printf("\t\t\t INGRESE LA OPCION QUE DESEA CONOCER \n");	
	printf ("\t\t\t1. CICLO WHILE\n");
	printf("\t\t\t2. CICLO FOR\n");
	printf("\t\t\t3. ARRAY\n");
	printf("\t\t\t4. SWHICH\n");
	printf("\t\t\t5. MATRICES\n");
	printf("\t\t\t6. ESTRUCTURA\n");
	printf("\t\t\t7. CREDITOS & SALIR\n");
	scanf ("%d",&opcion);
	system ("cls");
	switch (opcion)
	{
		case 1:
				int opcion_punto_1,i,resultado;
				printf("INGRESE LA OPCION QUE DESEA CONOCER\n");
				printf("1.sumar los numeros del 1 al 100 \n");
				printf("2.sumar numeros pares del 1 al 50\n");
				printf("3.sumar numeros impares del 1 al 50 \n");
				scanf ("%d",&opcion_punto_1);
				system ("cls");
				switch (opcion_punto_1)
				{
					case 1:
						resultado=0;
						i=0;
						while (i<100)
						{
							i=i+1;
							resultado=resultado+i;
						}
						printf("la suma es %d\n",resultado);
						system("PAUSE");
						
					break;
					
					case 2:
						i=1;
						resultado=1;
						while (i<49)
						{
							i=i+2;
							resultado=resultado+i;
						}
						printf("la suma es %d\n",resultado);
					break;
					
					case 3:
						i=0;
						resultado=0;
						while (i<50)
						{
							i=i+2;
							resultado=resultado+i;
						}
						printf("la suma es %d\n",resultado);	
					break;
						
				}
			
		break;
		
		
		case 2:
			printf("ingrese una opcion segun corresponda\n");
			printf("1. imprimir las tablas de multiplicar del 1 al 20\n");
			printf("2. solucionar el factorial de un numero\n");
			printf("3. solucionar un numero de fibonaci\n");
			int opcion_punto_2;
			scanf ("%d",&opcion_punto_2);
			system ("cls");
			switch (opcion_punto_2)
			{
				case 1:
				int i,j,resultado;
				for(i=1;i<21;i++)
				{
					for(j=1;j<11;j++)
					{
						resultado=i*j;
						printf(" %d x %d = %d\n",i,j,resultado);	
					}
						printf("\n");
				}
				break;
				
				case 2:
					int num;
					printf("ingrese el numero que deseas saber el factorial\n");
					scanf("%d",&num);
					resultado=1;
					for(i=2;i<num+1;i++)
					{
						resultado=resultado*i;
						
					}
					printf ("el facorial del numero %d es: %d",num,resultado);
				break;
					
				case 3:
					
					printf("ingrese el numero que deseas saber el numero fibonaci\n");
					scanf("%d",&num);
				break ;
									
			}
		break;
		
		case 3:
			float vector[5];
			vector[0]=32.583;
			vector[1]=11.239;
			vector[2]=45.781;
			vector[3]=22.237;
			for(i=0;i<5;i++)
			{
				printf("%.3f \n",vector[i]);
			}
						
		break;
		
		case 4:
			printf ("ingrese el numero del mes del sistema\n");
			int mes;
			scanf("%d",&mes);
			switch(mes)
			{
				case 1:
					printf ("enero\n");
				break;
				
				case 2:
					printf ("febrero\n");
				break;
				
				case 3:
					printf ("marzo\n");
				break;
				
				case 4:
					printf ("abril\n");
				break;
				
				case 5:
					printf ("mayo\n");
				break;
				
				case 6:
					printf ("junio\n");
				break;
				
				case 7:
					printf ("julio\n");
				break;
				
				case 8:
					printf ("agosto\n");
				break;
				
				case 9:
					printf ("septiembre\n");
				break;
				
				case 10:
					printf ("octubre\n");
				break;
				
				case 11:
					printf ("noviembre\n");
				break;
				
				case 12:
					printf ("diciembre\n");
				break;
	
			}
			
			case 5:
				int j,num,suma;
			int matrizuno[3][3];
				for (j=0;j<3;j++)
			{
		for(i=0;i<3;i++)
		{
			printf("ingrese el valor del verctor de la pocicion %d %d\n ",i , j);
			scanf("%d",&num);
			matrizuno[i][j]=num;
		}
		}

			for (j=0;j<3;j++)
			{
			for(i=0;i<3;i++)
			{
				printf("el valor de la matriz en la pocicion %d, %d es %d\n",i , j,matrizuno[i][j]);
			}
			}

			for (j=0;j<3;j++)
			{
				for(i=0;i<3;i++)
			{
			suma=suma+matrizuno[i][j];
			}
				}
			printf("la suma es %d",suma);
		break;
		
		case 6:
	float vectorfinal[5];
	for(i=0;i<5;++i)
	{
		printf("\n%i digite su nombre:\n",i+1);
		gets(estudiante[i].nombre);
		printf("%i digite su notas 1:\n",i+1);
		scanf("%i",&estudiante[i].notas);
		printf("%i digite su notas 2:\n",i+1);
		scanf("%i",&estudiante[i].notas);
		printf("%i digite su notas 3:\n",i+1);
		scanf("%i",&estudiante[i].notas);
		fflush(stdin);
		
	}
	
	break;	
	
	break;
	case 7:
		exit;
		break;
			
			
	}
	
	for(int k=0;k<10;k++){
		
		printf("\t\t\t\tCREDITOS :3 \n \n ");
	printf("\t\t ROBERT SANCHEZ, ANDRES FELIPE GAVIRIA, MATEO PELAEZ\n \n");
	printf("\t\t CLASE: ESTRUCTURA DE DATOS ll\n \n");
	printf("\t\t HORARIO: 10:30 - 12:00\n \n");
	printf("\t\t LABORATORIO D \n \n");
	}
	
	
	return 0;
}
