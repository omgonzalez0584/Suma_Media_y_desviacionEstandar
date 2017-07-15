
#include<stdio.h>
#include<math.h>
#define MAX 20

//PROTOTIPO DE  FUNCIONES
void llenar_arreglo(int m, float arr[]);
float sumar_arreglo(int m, float arr[]);
float media_arreglo(float sum,int m);
float desviacion_arreglo(float media,int m,float arr[]);

void main(){
int m;
float  suma, media,desv,desvest;
float arr[MAX];

printf ("\nIntroduzca la cantidad de elementos del Arreglo: ");
scanf("%d",&m);

llenar_arreglo(m,arr);


suma = sumar_arreglo(m,arr);
printf("\nLa suma es: %.1f",suma);


media = media_arreglo(suma,m);
printf("\nLa media es: %.1f",media);


desv = desviacion_arreglo(media,m,arr);
printf("\nLa desvacion estandar es: %.1f",desv);


printf("\n");

}

//Funcion que llena matriz
void  llenar_arreglo(int m,float arr[])
{
 int i;
 printf("introduza los elementos del arreglo: ");
 for(i=0;i<m;i++)
   {
    printf("\n [%d]= ",i+1);
    scanf("%f",&arr[i]);
   }
  return;
}

//Calcula la suma de m numero
float sumar_arreglo(int m , float arr[])
{
  int i,sum=0;
  for(i=0;i<m;i++)
      sum = sum + arr[i];

  return(sum);
}

//Calcula la media de m numero
float media_arreglo(float  sum, int m)
{
 float media = 0 ;
 media = sum/m;
 return(media);
}


//Calcula la desviacion de un arreglo tipo flotante

float desviacion_arreglo(float media,int m, float arr[])
{

  int i;
  float temp[MAX],flag=0;
  for(i=0;i<m;i++){     
      temp[i] = arr[i]-media;
      printf("\nLa desviacion respecto a la media [%.1f] = %.1f",arr[i],temp[i]);
    }
  for(i=0;i<m;i++)
       flag = flag  + pow(temp[i],2);
    
return (sqrt(flag/5));
}



 


