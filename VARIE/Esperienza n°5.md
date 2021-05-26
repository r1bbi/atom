## Esperienza n°5: Circuito resistivo misto.

Enrico Ribiani 15/11/2020

----

Scopo: Determinazione di tutte le correnti, di Vac e si Vbc. Confronto i valori teorici con i valori sperimentali

Materiale:

- breadboard

- alimentatore variabile a 12V

- 2 resistenze da 1kΩ

- resistenza da 2,7 kΩ

- resistenza da 2,2 kΩ

- resistenza da 5,6 kΩ

- Multimetro

- cavi di collegamento

Schema:

![Schermata da 2020-11-20 14-47-06.png](/home/rib/Immagini/Schermata%20da%202020-11-20%2014-47-06.png)



Procedimento:

> Dopo aver trovato tutti i valori risolvendo il circuito si legge il valore delle resistenze usando il codice colori. Si verifica il valore delle resistenze misurandole con il multimetro settato su ohmetro con sensibilità 20 kΩ tranne che per R1 e R2, per quelle resistenze va isata una resistenza di 2kΩ.
> 
> Si monta il circuito seguendo lo schema dato e infine si verifica la resistenza equivalente e la si confronta con il valore teorico.
> 
> Si regola la tensione generata dall'alimentatore regolabile tramite potenziometro usando il multimetro come voltmetro con sensibilità 20 V.
> 
> Si connette il circuito al generatore regolato a 12 volt, si misurano Vac e Vbc mettendo il multimetro in funzione di voltmetro e collegandolo in parallelo a R3 e R4.
> 
> Dopo aver misurato la tensione si misura l'intensità di ogni resistenza aprendo il circuito.

tabella tensioni

|            |                |                     |      |
| ---------- | -------------- | ------------------- | ---- |
| U.D.M. [V] | VALORI TEORICI | VALORI SPERIMENTALI | ε%   |
| Vcc        | 12             | 12,2                | 1,7  |
| Vac        | 6,3            | 7,1                 | 12,7 |
| Vbc        | 4,5            | 4,8                 | 6,2  |

tabella resistenze

|            |                |                     |      |
| ---------- | -------------- | ------------------- | ---- |
| U.D.M [kΩ] | VALORI TEORICI | VALORI SPERIMENTALI | ε%   |
| R1         | 1              | 0,99                | -1   |
| R2         | 1              | 0,982               | -1,8 |
| R3         | 2,7            | 2,65                | -1,9 |
| R4         | 2,2            | 2,16                | -1,8 |
| R5         | 5,6            | 5,53                | -1,2 |
| Rtot       | 2,31           | 2,29                | -0,9 |

tabella intensità di corrente

|            |                |                     |       |
| ---------- | -------------- | ------------------- | ----- |
| U.D.M [mA] | VALORI TEORICI | VALORI SPERIMENTALI | ε%    |
| I1         | 5,19           | 5,2                 | 0,2   |
| I2         | 2,8            | 2,9                 | 3,4   |
| I3         | 2,34           | 2,4                 | 3,3   |
| I4         | 2,05           | 1,97****            | -4,1  |
| I5         | 0,8            | 0,7****             | -14,3 |

**Conclusioni**:

Le misure sperimentali rientrano nei valori teorici con una discrepanza generalmente corretta tranne Vac e I5 .

Il valore di I5 ha una discrepanza molto alta perché non è stata cambiata la portata dell'amperometro, dal momento che la resistenza R5 è di 5,53 kΩ ed è molto più grande delle altre. Di conseguenza l'intensità di corrente passante per R5 sarà molto minore delle altre.

Inoltre le intensità contrassegnate con  ``****`` andranno rimisurate la prossima volta.
