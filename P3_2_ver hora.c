/*Deep3_Prog2: Verificar hora*/
#include <stdio.h>
int main()
{
  int hora, minutos, segundos;
  printf("\n Introduce la hora");
  scanf("%d",&hora);
  printf("\n Introduce los minutos");
  scanf("%d", &minutos);
  printf("\n Introduce los segundos");
  scanf("%d", & segundos);

  if( (hora>=0 && hora<=23) &&
      (minutos>=0 && minutos<=59) &&
      (segundos>=0 && segundos<=59)
    )
  {
    printf("\n El formato de hora es correcto");
  }
  else
  {
    printf("\n El formato de hora es incorrecto");
  }
  return 0;
} 
