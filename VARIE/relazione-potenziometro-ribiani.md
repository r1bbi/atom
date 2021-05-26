Ribiani Enrico 08-01-2021

----

## ESP n°6 Potenza utile / Potenza generata:

**Scopo:**
Verificare la variazione della potenza utile all'aumentare della resistenza di carico.

**Materiale:**

- Alimentatore da 12 V
- Multimetro
- Resistenza da 1.2 kΩ
- Potenziometro
- Breadboard

**Schema:**

![foto](/home/rib/Scaricati/chromium/potenziometrogiusto.PNG)

**Procedimento:**

Si svolgono i calcoli teorici con le seguenti formule:

> Pu= Rv × I²
> Pg=E × I
> η= Pu ÷ Pg

Dopo aver svolto i calcoli si misura la *resistenza* da *1.2 kΩ* e si verifica se rientra nella discrepanza, si misura la ddp dell'alimentatore per assicurarsi che sia di un valore corretto e si monta il circuito seguendo lo schema.
Si misura la *corrente* passante per il circuito e la *tensione* ai capi della resistenza, dopo aver preso queste due misure con il potenziometro settato a 0 Ω si *alza* il *valore* della resistenza secondo gli *intervalli* prestabiliti e si ripetono le misure che andranno messe in tabella. dopo aver preso le misure si calcolano le potenze ed il rendimento con le formule scritte sopra.

**Tabella:**

|         | val teo | val sper. | discrepanza |
| ------- | ------- | --------- | ----------- |
| Rint[Ω] | 1200    | 1184      | 1,33%       |

| Rv[Ω] | Vrv[V] | I[mA] | Pu[W]   | Pg[W]  | η      |
| ----- | ------ | ----- | ------- | ------ | ------ |
| 0     | 0      | 10,3  | 0,00000 | 0,1236 | 0      |
| 470   | 3,41   | 7,3   | 0,02505 | 0,0876 | 0,2859 |
| 820   | 4,91   | 6,0   | 0,02952 | 0,0720 | 0,4100 |
| 1200  | 6,04   | 5,1   | 0,03121 | 0,0612 | 0,5100 |
| 1800  | 7,24   | 4,0   | 0,02880 | 0,0480 | 0,6000 |
| 2200  | 7,80   | 3,5   | 0,02695 | 0,0420 | 0,6417 |
| 2700  | 8,34   | 3,1   | 0,02595 | 0,0372 | 0,6975 |
| 4700  | 9,59   | 2,0   | 0,01880 | 0,0240 | 0,7833 |

**Grafico:**

![o](/home/rib/Scaricati/chromium/Relazione%20tra%20potenza%20utile%20e%20intensità%20di%20corrente.png)

![si](/home/rib/Scaricati/chromium/Relazione%20tra%20Potenza%20utile%20e%20tensione%20in%20Ri.png)

**Conclusioni**
Sebbene la potenza utile è massima quando il potenziometro è a 1.2 kΩ il rendimento maggiore si ottiene cioè quando il potenziometro è a 4.7 kΩ ossia quando ha valore massimo.  Dopo paver raggiunto il massimo della potenza utile la tensione continua ad aumentare mentre l'intensità continua a diminuire.
