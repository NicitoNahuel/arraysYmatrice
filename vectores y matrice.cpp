#include <stdio.h>
int opcion;
int vector[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int numeros[10];
int i, dia, mes, prom,acum, count;
main ()
while (1)
{
	printf ("ingrese el numero de ejercicio que quiere ver");
	scanf ("%d", &opcion);
	i=0;
	switch(opcion)
	{
		case 1:{
			break;
		}
		
		case 2:{
			break;
		}
		//Un programa que almacene en una tabla el n�mero de d�as que tiene cada mes (su�pon�dremos que es un a�o no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) y muestre en pantalla el n�mero de d�as que tiene ese mes.
		case 3:{
			mes=0;
		//pregunta que mes
 		  printf("Un programa que almacene en una tabla el n�mero de d�as que tiene cada mes (su�pon�dremos que es un a�o no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) y muestre en pantalla el n�mero de d�as que tiene ese mes.\n");
		  printf("Ingrese un mes (1-12): \n ");
		  scanf("%d", &mes);
		//dice cuantos dias tiene ese mes
		  printf("El mes %d tiene %d d�as.\n",i+1, vector[i+1]);	
			break;
		}
		
		case 4:{
			mes=0; dia=0;
		//Un programa que almacene en una tabla el n�mero de d�as que tiene cada mes (a�o no bisiesto), pida al usuario que le indique un mes (ej. 2 para febrero) y un d�a (ej. el d�a 15) y diga qu� n�mero de d�a es dentro del a�o (por ejemplo, el 15 de febrero ser�a el d�a n�mero 46, el 31 de diciembre ser�a el d�a 365).
		  int dia_a�o;
		  printf ("Un programa que almacene en una tabla el n�mero de d�as que tiene cada mes (a�o no bisiesto), pida al usuario que le indique un mes (ej. 2 para febrero) y un d�a (ej. el d�a 15) y diga qu� n�mero de d�a es dentro del a�o (por ejemplo, el 15 de febrero ser�a el d�a n�mero 46, el 31 de diciembre ser�a el d�a 365).\n");
		  printf("Ingrese el dia y el mes: \n ");
		  scanf("%d, %d", &mes, &dia);
		
		  //suma lo dia de los meses que pasaron
		  for (i=0; i<mes-1; i++) 
		  {dia_a�o=dia_a�o+vector[i];}
		
		  //sumar los dias que pasaron del me
		  dia_a�o=dia_a�o+dia;
		
		  printf("es el dia numero %d del a�o.\n", num_dia);
			break;
		}
		
		case 5:{
				//A partir del programa que almacenaba en una tabla el n�mero de d�as que tiene cada mes, crear otro que pida al usuario que le indique la fecha, detallando el d�a (1 al 31) y el mes (1=enero, 12=diciembre), como respuesta muestre en pantalla el n�mero de d�as que quedan hasta final de a�o.
			printf ("A partir del programa que almacenaba en una tabla el n�mero de d�as que tiene cada mes, crear otro que pida al usuario que le indique la fecha, detallando el d�a (1 al 31) y el mes (1=enero, 12=diciembre), como respuesta muestre en pantalla el n�mero de d�as que quedan hasta final de a�o.\n");
		  int dias_faltan=365;
		  mes=0; dia=0;
		  printf("Ingrese el d�a y mes en numeros: \n");
		  scanf("%d, %d", &dia, &mes);
		
		  //que dia del me es
		  for (i=0; i<mes+1; i++) 
		  {dia_a�o=dia_a�o+vector[i];}
		
		  //sumar los dias que pasaron del mes
		  dia_a�o=dia_a�o+dia;
		  //a los dias del a�o le resta lo dias que ya pasaron
		  dias_faltan= dias_faltan - dia_a�o;
		  
		  printf("quedan %d dias de tortura.\n", dias_restantes);

			break;
		}
		
		case 6:{
			printf ("Crear un programa que pida al usuario 10 n�meros enteros y luego los muestre en orden inverso (del �ltimo al primero), usando for \n");
			// Pedir al usuario que ingrese 10 n�meros enteros
		    for (i=0; i<10;i++) 
			{
		        printf("Ingrese el n�mero %d: ", i+1);
		        scanf("%d", &numeros[i]);
		    }
		    
		    // Mostrar los n�meros en orden inverso
		    printf("al revez seria:\n");
		    for (i=9;i>=0;i--) 
			{printf("%d ", numeros[i]);}
			break;
		}
		case 7:{
			Printf ("Crear un programa que pida al usuario 10 n�meros reales, calcule su media y luego muestre los que est�n por encima de la media.\n");
			// Pide los numeros
			for (i=0;i<10;i++)
			 	{
				    printf("Ingrese el n�mero %d: ", i+1);
				    scanf("%d", &numeros[i]);
				    acum = acum+numeros[i];
				}
			
			    //Calcular la media
			    acum=acum/10;
			    printf ("la media de %d", acum)
			
			    // Mostrar los n�meros por encima de la media
			    printf("Los numeros superiore a la media son: \n", media);
			    for (i=0;i<10;i++) 
					{
			        if (numeros[i]>acum) 
					{printf("%d", numeros[i]);
			        }
			    }
			break;
		}
		
		case 8:{
			    // pide los 10 numeros
			    printf("Ingrese 10 numeros enteros:\n");
			    for(i=0;i<10;i++) 
				{
			        printf("ingrese el numero %d: ", i+1);
			        scanf("%d", &numeros[i]);
			    }
			    
			    //bucar el mayor
			    for(i=0;i<10;i++) 
				{
			        if(numeros[i]>mayor || i==0) 
					{
			            mayor=numeros[i];
			        }
			    }
			    
			    //mostrar el mayor
			    printf("El numero mayor es: %d\n", mayor);
			    
			break;
		}
		
		case 9:{
			printf ("Un programa que pida al usuario los datos de dos vectores en el plano (2 coordenadas) y calcule su diferencia.\n");
			
			break;
		}
	}
}



