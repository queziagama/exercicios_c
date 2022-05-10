// Dia da semana ou fim de semana, alta ou baixa temporada - de acordo com o numero da semana digitado (1-7)

#include <stdio.h>
int main ()
{   int dia;
    printf ("Informe o dia: ");
    scanf ("%d", &dia); // lê o print, %d o que é digitado

    switch(dia)
{
    case 1: // domingo
    printf("fim de semana. \n");
    break;
 
    case 2: // segunda
    printf("dia de semana. \n");
    break;
    
    case 3: // terça
    printf("dia de semana. \n");
    break;
 
    case 4: // quarta
    printf("dia de semana. \n");
    break;
 
    case 5: // quinta
    printf("dia de semana. \n");
    break;

    case 6: // sexta
    printf("dia de semana. \n");
    break;
 
    case 7: // sábado
    printf("fim de semana. \n");
    break;
 
    default:
    printf ("Dia inválido. \n");
}

    int mes;
    printf ("Informe o mês: ");
    scanf("%d" , &mes);

    switch(mes) //não pode por ;
{
      case 1: //janeiro
      case 2: //fevereiro
      printf("alta temporada. \n");
      break;
       
      case 3: //março
      case 4: //abril
      case 5: //maio
      printf("baixa temporada. \n");
      break;
        
      case 6: //junho
      case 7: //julho
      printf("alta temporada. \n");
      break;
        
      case 8: //agosto
      case 9: //setembro
      case 10: //outubro
      case 11: //novembro
      printf("baixa temporada. \n");
      break;
       
      case 12: //dezembro
      printf("alta temporada. \n");
      break;
        
      default:
      printf("Mês inválido. \n");
}}
        
        
        
