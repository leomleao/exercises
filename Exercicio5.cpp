#include <conio.h>
#include <stdio.h>

int main()
{
  char numero;
  printf("Insira um numero de 1 a 9\n");
  while(kbhit()) getch();
  numero = getch();  
  int num = numero - '0';  
  printf("%d \n", num); 
  
  if (num > 0 || num <9)  
// sem erros
      for (int i=0;i<=10;i++)
        {
            printf("%d x %d = %d \n" , num,i,(num*i));
        }
  else
  //deu ruim
   printf("Algo de errado ocorreu! ");   
  getch(); 
}    



