#include<stdio.h>
int main (){
    int cantPS4;
    int cantPS3;
    int cantJoystickPS4;
    int cantJuegosPS4;
    int cantJuegosPS3;
    int cantTotal;
    float PFDescuento;
    float precioIVA;
    char genero;

 printf("\n********************MENU********************\n");
 printf("*PRODUCTO            *PRECIO                 *\n");
 printf("*consolas PS4        *80000                  *\n");
 printf("*consoles PS3        *60000                  *\n");
 printf("*Joystick PS4        *10000                  *\n");
 printf("*juegos PS4 (fisico) *5000                   *\n");
 printf("*juegos PS3 (fisico) *3000                   *\n");
 printf("**********************************************\n");

 printf("\nINGRESE LA CANTIDAD DE PS4 QUE DESEA LLEVAR:");
 scanf("%d",&cantPS4);

 printf("\nINGRESE LA CANTIDAD DE PS3 QUE DESEA LLEVAR:");
 scanf("%d",&cantPS3);

 printf("\nINGRESE LA CANTIDAD DE JOYSTICK DE PS4 QUE DESEA LLEVAR:");
 scanf("%d",&cantJoystickPS4);

 printf("\nINGRESE LA CANTIDAD DE JUEGOS DE PS4 QUE DESEA LLEVAR:");
 scanf("%d",&cantJuegosPS4);

 printf("\nINGRESE LA CANTIDAD DE PS3 QUE DESEA LLEVAR:");
 scanf("%d",&cantJuegosPS3);

 printf("Ingrese genero de la persona: ");
 scanf("%c",&genero);


 float precio = cantPS4*80000 + cantPS3*60000 + cantJoystickPS4*10000 + cantJuegosPS4*5000 + cantJuegosPS3*3000;

  cantTotal = cantPS4 + cantPS3 + cantJoystickPS4 + cantJuegosPS4 + cantJuegosPS3;
  precioIVA = precio + 0.21*precio;

  if(genero == ('M'))
  {
  PFDescuento= precioIVA-0.1*precioIVA;
  printf("Precio final (con descuento + iva) : %.2f",PFDescuento);
  }

  else
  {
      precioIVA = cantTotal + 0.21*cantTotal;
      printf("Precio final (con iva):%.2f",precio);
      }



}
