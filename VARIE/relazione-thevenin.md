Ribiani Enrico                                                                                     04-02-2021

---

# Esperienza n°7: Generatore equivalente di Thevenin

**Scopo**: verificare sperimentalmente il teorema di Thevenin.

**Materiale**:

- Alimentatore da 0-15V
- Multimetro
- Breadboard
- 6 resistenze
- resistenza variabile o trimmer 0-500[Ω]

**Schema**:

![1](/home/rib/Immagini/Schermata%20da%202021-02-05%2018-16-11.png)

![2](/home/rib/Immagini/Schermata%20da%202021-02-05%2018-21-12.png)

**Procedimento**:

> Si svolgono i calcoli per trovare la resistenza equivalente o *Rth*, la tensione equivalente o *Eth* e la corrente *I6* che entra appunto nella resistenza R6 che è il carico.
> Si calcola la *Rth* cortocircuitando il generatore di tensione e sommando le resistenze andando da sinistra verso destra.
> Si calcola *Eth*.
> Si procede calcolando la resistenza equivalente *Rtot* per la corrente totale *Itot* e calcolare il valore di *I6*.
> Conoscendo *I6* e la *Rth* si calcola *Eth* con Eth=Rth*I6.

Misurate tutte le resistenze e avendo confrontato il valore con quello teorico si monta il circuito, si misura la resistenza equivalente e se rientra nel valore teorico si regola l'alimentatore a 12V e si accende il circuito.
Si misurano *I6* e *Eth* ossia la corrente che entra in *R6* e la tensione ai suoi capi.
Dal momento che il teorema di Thevenin dice:
_Un circuito lineare, composto da generatori di tensione, generatori di corrente e di resistenze, visto da due terminali A e B, è perfettamente equivalente ad un generatore reale di tensione composto da un generatore ideale di tensione in serie ad un resistore_.
Andiamo a sostituire il circuito formato da *R1,R2,R3,R4,R5* con un trimmer regolato con il valore della *Rth*, regoliamo l'alimentatore con tensione uguale a *Eth* dopodiché colleghiamo il circuito e andiamo a misurare *I6*.

**Tabella**:

|         | Teo   | Sper  | ε %  |
| ------- | ----- | ----- | ---- |
| R1 [Ω]  | 82    | 81,6  | 0,49 |
| R2 [Ω]  | 120   | 121,7 | 1,40 |
| R3 [Ω]  | 12000 | 11970 | 0,25 |
| R4 [Ω]  | 270   | 272   | 0,74 |
| R5 [Ω]  | 8200  | 8220  | 0,24 |
| R6 [Ω]  | 1500  | 1499  | 0,07 |
| Req [Ω] | 443,3 | 447   | 0,83 |
| Eth [V] | 11,15 | 11,15 | 0,00 |
| I6 [mA] | 5,6   | 5,6   | 0,00 |
| I6 [mA] | 5,6   | 5,5   | 1,82 |

**Conclusioni**:
Possiamo notare che tutti i valori hanno una discrepanza accettabile e che *I6* del circuito senza transistor e quella con transistor sono molto vicine quindi il teorema di Thevenin è stato verificato correttamente.
