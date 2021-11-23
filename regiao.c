/*Faça um programa usando switch case que receba o número da região do país:
1 - Sul
2 - Sudeste
3 - Centro-oeste
4 - Nordeste 
5 - Norte
Após isso, o programa recebe 'c' para capital e 'i' para interior.
Dessa maneira o programa emite uma mensagem de acordo com os dados coletados, podendo ser uma delas:
"Você mora no interior da região norte" ou "Você mora em uma capital da região norte".
A frase ira se modificar de acordo com com a região escolida pelo úsuario*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int numeroRegiao;
  char letra;
  printf(" Codigo das Regiao do Brasil \n "
         "1 - Sul \n"
         "2 - Sudeste \n"
         "3 - Centro-oeste \n"
         "4 - Nordeste \n"
         "5 - Norte \n");
  printf(" \n Informe o codigo de sua regiao:");
  scanf("%i", &numeroRegiao);

  if (numeroRegiao == 1 || numeroRegiao == 2 || numeroRegiao == 3 || numeroRegiao == 4 || numeroRegiao == 5)
  {
    fflush(stdin);
    printf(" \n Informe a regiao a localidade que voce mora \n ");
    printf(" \n Digite (i)  para regioes do interior \n");
    printf(" \n Digite (c)  para capital \n");
    printf(" \n Informe:");
    scanf("%c", &letra);

    if (letra == 'i' || letra == 'c')
    {
      if (letra == 'i')
      {
        switch (numeroRegiao)
        {
        case 1:
          printf("\n Voce mora no interior da regiao sul. \n");
          break;
        case 2:
          printf("\n Voce mora no interior da regiao sudeste. \n");
          break;
        case 3:
          printf("\n Voce mora no interior da regiao centro-oeste. \n");
          break;
        case 4:
          printf("\n Voce mora no interior da regiao nordeste. \n");
          break;
        case 5:
          printf("\n Voce mora no interior da regiao norte. \n");
          break;
        default:
          printf("\nErro na incersao de dados.\n"
          "\n PROGRAMA SENDO ENCERADO POR ERRO NA INCERSAO DE DADOS \n");
        }
      }
      else if (letra == 'c')
      {
        switch (numeroRegiao)
        {
        case 1:
          printf("\n Voce mora em uma capital da regiao sul. \n");
          break;
        case 2:
          printf("\n Voce mora em uma capital da regiao sudeste. \n");
          break;
        case 3:
          printf("\n Voce mora em uma capital da regiao centro-oeste. \n");
          break;
        case 4:
          printf("\n Voce mora em uma capital da regiao nordeste. \n");
          break;
        case 5:
          printf("\n Voce mora em uma capital da regiao norte. \n");
          break;
        default:
          printf("\nErro na incersao de dados.\n"
          "\n PROGRAMA SENDO ENCERADO POR ERRO NA INCERSAO DE DADOS \n");
        }
      }
    }
    else
    {
      printf("\nErro na incersao de dados.\n"
      "\n PROGRAMA SENDO ENCERADO POR ERRO NA INCERSAO DE DADOS \n");
    }
  }
  else{
    printf("\nErro na incersao de dados. \n"
     "Digite o codigo de 1 a 5 referente a sua regiao \n"
     "\n PROGRAMA SENDO ENCERADO POR ERRO NA INCERSAO DE DADOS \n");
  }
}