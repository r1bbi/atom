Ribiani Enrico                                                                                               05-12-2020

---

# Esp: 6   Disposizione di resistenze.

#### Scopo: Scegliere la disposizione corretta per far accendere un diodo led rosso.

**Materiale:**

- breadboard 

- multimetro

- 8 resistenze di vari valori

- 1 resistenza da 470 ohm per il secondo circuito

- diodo led

- interruttore

- cavi di collegamento

- generatore di tensione da 5 V continua

**Schema:**

circuito 1

![5-12-2020 (1).png](/home/rib/Documenti/SCUOLA/SCAMBIO/ELETTRO/thinkercad/5-12-2020%20(1).png)

circuito 2

![5-12-2020 (2).png](/home/rib/Documenti/SCUOLA/SCAMBIO/ELETTRO/thinkercad/5-12-2020%20(2).png)

****Procedimento e calcoli teorici:****

Sapendo che l' intensità di corrente ottimale e la tensione ottimale sono rispettivamente  20 mA e 1,8 V si calcola la resistenza ideale con la formula ```Req=(Vin-Vled)/Iled```. 

Dopo aver misurato con il multimetro le resistenze e aver letto il codice colore si procede a segnare i valori in tabella  e a svolgere i calcoli teorici.

Secondo la logica si posizionano tutte le resistenze più grandi in parallelo ossia R3 R4 nel primo parallelo e  R6 R7 R8 nel secondo parallelo mentre R1 R2 R5 vengono disposte in serie. 

Dopo aver svolto i calcoli viene montato il circuito, viene misurata la resistenza equivalente e viene confrontata con il valore teorico, se è circa uguale si procede ad accendere l'alimentatore e a misurare Vab e Vac mettendo il multimetro in funzione di voltmetro in parallelo a R34 e R678. Infine si misura Itot mettendo in serie il multimetro in funzione di amperometro dopo il parallelo R678 e prima dello switch.

Inoltre visto che le resistenze date in origine sono troppo grandi viene aggiunta una resistenza da 470Ω in parallelo a tutte le resistenze del circuito precedente in modo di diminuire la resistenza equivalente e far emettere più luce al diodo led.  (schema circuito 2).

Operazioni (i calcoli sono stati fatti usando i valori sperimentali)

> Req(ottimale)=(Vin-Vled)/Iled=(5V-1,8V)/20mA=160Ω
> 
> R678=1/((1/R7)+(1/R7)+(1/R8))=1/((1/1,8)+(1/2,15)+(1/2,66))kΩ=720Ω
> 
> R34=(R3 ⋅ R4)/(R3/R4)=(1460 ⋅ 1180)Ω/(1460 +1180)Ω=652,6Ω
> 
> Req=R1+R2+R34+R5+R678=546Ω+99,4Ω+652,6Ω+980Ω+720Ω=2998Ω≃3KΩ
> 
> Itot=Vcc/Req=5V/3kΩ=1,7mA
> 
> Vac=Itot ⋅ R34=1,7mA ⋅ 652,6Ω=1,11V
> 
> Vab=Itot ⋅ R678=1,7mA ⋅ 720Ω=1,22V

Tabella:

|      | val. teo | val sper. | u.dm. | discrepanza |
| ---- | -------- | --------- | ----- | ----------- |
| R1   | 546      | 560       | Ω     | 3%          |
| R2   | 99,4     | 100       | Ω     | 1%          |
| R3   | 1460     | 1500      | Ω     | 3%          |
| R4   | 1180     | 1200      | Ω     | 2%          |
| R5   | 980      | 1000      | Ω     | 2%          |
| R6   | 2660     | 2700      | Ω     | 2%          |
| R7   | 2150     | 2200      | Ω     | 2%          |
| R8   | 1800     | 1800      | Ω     | 0%          |
| Req  | 3000     | 3000      | Ω     | 0%          |
| Itot | 1,7      | 1,00      | mA    | 41%         |
| Vac  | 1,1      | 0,7       | V     | 40%         |
| Vab  | 1,2      | 0,73      | V     | 39%         |

**Conclusioni:**

I valori delle resistenze rientrano nella discrepanza mentre Itot,  Vac, Vab hanno una discrepanza troppo alta data dal fatto che Itot risulti molto minore di quanto ci si fosse aspettato e di conseguenza fa ritrovare una discrepanza molto simile anche nelle due tensioni dal momento che la tensione è direttamente proporzionale all'intensità.

In ogni caso il diodo led si accende in modo soddisfacente in entrambi i circuiti quindi l'esperienza è stata conseguita nel modo corretto
