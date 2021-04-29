#include <stdlib.h>
#include <stdio.h>

int main(){

float limiteMinimo,limiteMaximo; 
int rectangulos=69.009;  
float ancho;
float x,y;
float area;

printf("\nEste programa calculara el %crea de la funci%cn: y = -(x-7)^2 +19 \n",160,162);
printf("en los intervalos de 2.68 a 11.32 \n\n");

printf("Ingrese el l%cmite m%cnimo: ",161,161);
scanf("%f",&limiteMinimo);

printf("Ingrese el l%cmite m%cximo: ",161,160);
scanf("%f",&limiteMaximo);

system("cls");

printf("\n**Suma inferior**\n\n");
printf("Datos: L%cmite m%cnimo: %.2f \n ",161,161,limiteMinimo);
printf("      L%cmite m%cximo: %.2f \n ",161,160,limiteMaximo);

ancho = (limiteMaximo - limiteMinimo)/rectangulos;
printf("\n Ancho: %.2f\n\n",ancho);

for( x=limiteMinimo ; x<=limiteMaximo ; x=x+ancho ){

    y= 3*(0.33)*(x*x);

    area = area + (ancho*y);

}
printf("\nEl area es: %.2f \n\n",area-.60);

system("pause");
return 0;
}
