/* Ribiani Enrico
Questo programma serve a calcolare l'errore assoluto del parallelo tra due resistenze partendo
dal valore delle resistenze e dalla loro tolleranza
*/

#include <stdio.h>

 //float valori(float d,a,b; int c);

int main ()
{
  float r1, r2, rtot, er1, er2, ear1, ear2, eamolt, easum, eatot;
  int k=0;
  printf("---=== Inizio programma ===---\n");
  for (int i = 0; i < 1; i++)
  {
    while (k!=1)
    {
      switch (i)
      {
        case 0:
        //valori(r1,er1,ear1, i);
        printf("inserire valore di R%d in ohm\n", i+1);
        scanf("%f", &r1);
        printf("inserire la tolleranza di R %d ", i+1);
        scanf("%f", &er1);
        ear1=(r1*er1)/100;
        break;
        case 1:
        //valori(r2,er2,ear2, i);
        printf("inserire valore di R%d in ohm\n", i+1);
        scanf("%f", &r2);
        printf("inserire la tolleranza di R %d ", i+1);
        scanf("%f", &er2);
        ear2=(r2*er2)/100;
        break;
      }//fine switch
      printf("-- R1[Ω] = %0.2f Er% = %0.2f -- \n-- R2[Ω] = %0.2f Er% = %0.2f -- \n se i valori sono giusti digita 1 altimenti digita qualsiasi altro numero per continuare",r1,er1,r2,er2 );
      scanf("%d", &k); //se il valore è 1 il while si interrompe per procedere
    }//fine while
  }//fine for

  eamolt=((r1*ear2)+(r2*ear1));
  easum=(ear1+ear2);
  rtot=((r1*r2)/(r1+r2));
  eatot=rtot*(((er1/100)-(er2/100))/(1-(er2/100)));
  printf("Il paralleo tra le due resistenze e' (%0.2f +- %0.2f)\n ---=== Fine programma ===--- ", rtot,eatot);

  return 0;

}// fine main
/*
valori(float a; float b; float c; int d) //funzione valori per assegnare i valori alle variabili e cacolarne l'errore assoluto
{
  printf("inserire valore di R%d in ohm\n", c);
  scanf("%f", &a);
  printf("inserire la tolleranza di R %d ", c);
  scanf("%f", &b);
  c=(a*b)/100;
  return a;
  return b;
  return c;
}
*/
