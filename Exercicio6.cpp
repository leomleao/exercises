#include <conio.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>


int main()
{
  std::vector<std::string> ras[15];
  std::vector<float> notas[15]; 
  std::string ra;
  
  for (int i=0; i<3; i++){
        printf("Insira o RA:\n"); 
        scanf ("%s",&ras[i]);
        printf("Insira a nota:\n"); 
        scanf ("%f",&notas[i]);   
  } 
        
        printf("Digite um RA para verificar a nota: \n");
        scanf ("%s",&ra);
        
        bool search = true;
        while(search){
    
           for (int i=0; i<3; i++){        
                if (ra == ras[i]){
                    printf("A nota desse aluno é: %f \n", notas[i]);
                    search = false;
                } else 
                    printf("Aluno não encontrado, tente novamente. \n");
                        
            } 
        } 
  
  getch(); 
  return 1;
}    
