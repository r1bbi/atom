Nota: sto scrivendo queste dispense affinché vengano utilizzate come riassunto dei punti
chiave del programma terica assieme al testo consigliato e agli appunti delle lezioni (in cui
avremo in più una parte grafica, i passaggi matematici e gli esercizi). Prese da sole, non
sono assolutamente sufficienti ad una comprensione completa. Poiché le sto scrivendo
attualmente per sezioni diverse, e il tempo non basta mai, è possibile che ci sia qualche
errore di battitura, se lo notate avvisatemi senza farvi problemi.
Grazie, F.S.
[fonte](https://docs.google.com/document/d/14c-Ex_4kPtNMAY0LCeoSOP2pXxf2m2vKkyekOGWa348/edit)


#ELETTROSTATICA
**Forza di Coulomb** : rappresenta l’interazione elettrica tra due cariche q e Q a distanza r:
::F = K qQ/(r 2 ) *nel vuoto, dove K = 1 /(4πε 0 ):: .
**Campo elettrico**: campo di forze generato nello spazio dalla presenza di una o più cariche
elettriche o di un campo magnetico variabile nel tempo. E=F/Q
**Conduttori** : materiali caratterizzati dalla presenza di elettroni liberi di muoversi (nella banda
di valenza)
**Dielettrici/Isolanti**: materiali in cui la corrente elettrica non più scorrere. Un campo elettrico
polarizza il materiale, creando _dipoli_ ordinati che generano all'interno del materiale un campo
aggiuntivo opposto a quello esterno (dielettricità).
**Tensione V**: la tensione tra due punti corrisponde al costo energetico (::lavoro fatto::)
necessario per spostare una unità positiva di carica dal punto negativo (potenziale più basso)
al punto positivo (potenziale più alto). Equivalentemente, è l’energia rilasciata quando una
unità di carica si muove a valle/verso il basso da un potenziale alto a uno più basso.
Sinonimi: Differenza di potenziale (ddp), forza elettromotrice (fem). Unità di misura:
_[Volt]=[Joule]/[Coulomb]_
Corrente : "velocità di flusso della carica elettrica. Una corrente di 1A corrisponde al flusso di
1 Coulomb di carica al secondo". Per convenzione, la corrente in un circuito si considera
scorrere da un polo più positivo ad un polo più negativo, nonostante l’effettivo flusso degli
elettroni vada in direzione opposta (dal - al +).
Unità di misura: [Ampere]=[Coulomb]/[Tempo]
*NB: sempre riferirsi ad una tensione TRA due punti, e la corrente ATTRAVERSO un
elemento di circuito.*
Si genera tensione facendo un lavoro in dispositivi come batterie, generatori, celle solari.
Otteniamo invece correnti inserendo tensioni tra vari elementi.

**COMPONENTI E CIRCUITI ELETTRICI**
Circuiti: reti di conduttori che sono equipotenziali (Rispetto al ground)
Un bipolo è una rete elettrica comunque complessa accessibile solo da una coppia di
morsetti e di cui interessa solo il comportamento esterno in termini di relazione
tensione-corrente.
Le proprietà fondamentali del bipolo sono innanzitutto che la corrente continua entrante che
lo attraversa è necessariamente uguale a quella uscente, questa proprietà è indispensabile
poiché se ciò non fosse vero, non si avrebbe la condizione di conservazione della corrente (o
della carica); inoltre la tensione tra i due morsetti del bipolo è indipendente dal cammino
percorso e questa proprietà segue dalla conservazione dell'energia . Queste due proprietà
fondamentali costituiscono anche una definizione assiomatica del bipolo.
Convenzioni ed elementi circuitali
**Elementi attivi**: sono elementi circuitali che generano energie (batterie, transistor)
**Elementi passivi**: sono elementi circuitali che dissipano o immagazzinano energia
(resistenze, condensatori).
Si chiamano terminali i punti di ingresso e uscita della corrente per un elemento circuitale. Ad
esempio la resistenza è un componente a due terminali. I terminali hanno una polarità che
dipende dal tipo di componente. Se il componente è arrivo, il positivo è quello da cui esce la
corrente (secondo le convenzioni, cioè contrario al reale flusso di elettroni), se è passivo il
polo positivo è quello associato all’ingresso della corrente.
Resistenza
**Generatore elettrico**: componente attivo a due terminali capace di produrre ai suoi capi una
ddp. Anche detto sorgente di tensione, può essere ideale o reale. Il generatore reale ha una
ddp che è dipendente dalla corrente, essendoci un carico(resistenza) proprio al suo interno
Sorgente ideale di corrente.
**Cortocircuito**: no caduta di potenziale.
**Circuito aperto**: non passa corrente
**Interruttore**: apre o chiude il circuito
**Ramo**: tratto di circuito compreso fra due nodi
**Maglia chiusa**: percorso chiuso attraverso cui può passare una corrente
Condensatore
Induttanza


**#Regole su tensione e circuit**i
1)
somma delle correnti interne che passano in un punto (NODO) del circuito è uguale
alla somma delle correnti esterne (conservazione della carica)
2)
Elementi connessi in parallelo hanno sempre la stessa ddp3)
La potenza consumata da un dispositivo circuitale è P=IV. La potenzia si trasforma in
lavoro meccanico, calore, energia irradiata.
#LEGGE DI OHM E RESISTENZE
La resistenza è una quantità che dipende dalla resistività del conduttore (l’inverso della sua
conducibilità, ovvero della sua tendenza al permettere lo spostamento di elettroni) e dalle
sue caratteristiche geometriche (nel caso semplice di resistenza omogenea):
**R = ρ L/A**
dove _ρ_ è la _resistività_, L è la lunghezza e A la sezione del conduttore.
In generale i metalli hanno hanno una resistività dell’ordine 1 0 −6 Ωm , gli isolanti 1 0 20 Ωm , e i
semiconduttori tra i 1 0 −2 Ωm e i 1 0 6 Ωm .
La corrente che passa attraverso un conduttore metallico è proporzionale alla differenza di
potenziale ai capi di questo. Questa non è certamente una legge universale: ad esempio, la
corrente attraverso una lampadina (nello specifico, attraverso il filamento di tungsteno in
essa) non mostra tale comportamento. In ogni caso, questa legge descrive il comportamento
di una grande classe di conduttori, detti ohmici. Se un conduttore è ohmico, seguirà la Legge
di Ohm , che dice che V = R I , cioè che la corrente che attraversa un conduttore metallico è
proporzionale alla tensione ai suoi capi.
Caratteristiche importanti sono la quantità di potenza (energia su tempo) che possono
dissipare , la tolleranza (accuratezza), il rumore,il coefficiente di temperatura(indice che
misura la tendenza della resistività a variare con la temperatura)e il coefficiente di voltaggio
(misura la dipendenza di R dalla caduta di potenziale ai suoi capi).
Legge di Joule: La potenza dissipata da un resistore è P = I V (= I 2 R = V 2 /R) , dove le due
successive equazioni sono state ricavate inserendo la legge di Ohm invertita per V e per I
rispettivamente.
Componenti in serie condividono la stesso flusso di carica, cioè la corrente.
N
Resistenza di N resistenze in serie: R = ∑ R i
i=1
Componenti in parallelo hanno invece la stessa differenza di potenziale ai loro capi.
N
Resistenza di N resistenze in parallelo: R = 1 /( ∑ 1 /R i )
i=1
Bisogna fare attenzione alle variabili fisiche che possono modificare il comportamento del
resistore. Ad esempio, in un resistore ideale (non dipendente dalla temperatura), abbiamo
che il rapporto tra tensione ai suoi capi e corrente che ci scorre attraverso è lineare. Mentre,
nel caso in cui ci fosse dipendenza dalla Temperatura, avremo una differente espressione
per la resistenza: R(T emperatura) = R (1 + α ΔT ) dove α è un coefficiente di temperatura e
Δ T la variazione di temperatura. In tal caso la curva caratteristica non è più lineare.
Esercizi!

**Partitori di tensione e corrente**
I partitori di tensione sono dei circuiti che, dato un certo input di tensione, producono un
output prevedibile che corrisponde ad una frazione della tensione di input (la tensione in
uscita è sempre minore-uguale della tensione in entrata). Vengono spesso utilizzati nei
circuiti per generare un particolare voltaggio da uno fissato(o variabile) più alto.
Il partitore di corrente è utilizzato per calcolare la corrente che scorre attraverso una
resistenza in parallelo.


**MISURATORI DI GRANDEZZE ELETTRICHE**
Oscilloscopio: strumento che permette di vedere le tensioni (o talvolta le correnti) in funzione
del tempo.
Multimetro: permette di misurare tensioni o correnti.
In un circuito la potenza totale dissipata sarà pari alla somma di quelle dissipate dai singoli
componenti. L’energia erogata da un generatore DEVE coincidere con quella dissipata dagli
N
elementi del circuito (conservazione dell’energia). In termini di potenza: P Gen. = V I = ∑ P i
i=1
dove N sono il numero di elementi del circuito. Nel caso di un generatore di tensione con due
resistenze R1 e R2 in serie, questa relazione diverrebbe semplicemente
P Gen. = V I = P 1 + P 2 .
Amperometro: permette di misurare la corrente attraverso un ramo del circuito. Va inserito
in serie all’elemento circuitale. Inoltre, per evitare che l'inserimento dell’amperometro alteri il
circuito, deve avere una resistenza interna equivalente trascurabile (cioè molto più bassa di
quella equivalente del ramo).
Voltmetro : permette di misurare la tensione ai capi di uno o più elementi circuitali. Va
posizionato in parallelo al ramo da misurare. Per evitare alterazioni nel circuito è importante
che la resistenza interna equivalente del voltmetro sia molto più alta di quella del ramo da
misurare (così la corrente assorbita da esso sia trascurabile).
**GENERATORI ELETTRICI DI TENSIONE E CORRENTE**
Generatore ideale di tensione: componente bipolare capace di presentare ai suoi capi una tensione V(t) il cui valore non dipende dalla corrente che lo attraversa. Se il generatore è in grado di essere costante nel tempo, viene chiamato generatore in continua (tempo-invariante).

Il generatore reale di tensione invece tiene in considerazione la resistenza interna del generatore , e viene rappresentata in serie accanto ad un generatore ideale. La tensione generata da un generatore reale è VReale=fem-RInternaI. Dove la fem, o forza elettromotrice, è la tensione “a vuoto” del generatore. Dalla relazione precedente notiamo che in un generatore reale di tensione la tensione decresce all’aumentare della corrente.

Generatore ideale di corrente: componente capace di imporre una circolazione di corrente I(t) indipendente dal valore della tensione V(t) ai suoi capi.

Il generatore reale di corrente invece ha una resistenza “interna” parallela al generatore ideale, e la sua corrente erogata, nel caso stazionario (cioè in corrente continua) è IReale=I-V/RInterna.



**BILANCIO DELLE POTENZE IN UNA RETE ELETTRICA**

In una rete elettrica sono presenti bipoli di vario tipo, utilizzatori passivi, utilizzatori attivi, generatori ideali, generatori reali. I generatori ideali e reali differiscono per il fatto che quelli reali hanno delle perdite di potenza interne. Gli utilizzatori passivi non generano potenza, la assorbono e basta. Gli utilizzatori attivi assorbono dalla rete una potenza pari alla somma di quella utilizzata e quella persa al loro interno.

La somma delle potenze erogate dai generatori deve essere identica alla somma delle potenze assorbite dagli utilizzatori, ossia:

PGeneratori=PUtilizzatori



**LEGGI DI KIRCHOFF**

Ricordando che un nodo è un punto di diramazione almeno triplo, il primo principio di Kirchoff dice che, in ogni istante t la somma algebrica delle correnti in un nodo è uguale a zero. Somma algebrica significa che le correnti entranti hanno segno opposto alle correnti uscenti.

Il secondo principio dice invece che in una maglia (un percorso chiuso che partendo da un nodo torna allo stesso nodo senza incroci o sovrapposizioni) la somma algebrica delle tensioni è, in ogni istante t, uguale a zero.

Riassumendo:

1.La somma algebrica delle correnti attraverso un nodo è nulla 0=i=1NIi
2.La somma algebrica delle tensioni lungo una linea chiusa (con il segno appropriato in funzione del verso di percorrenza della maglia stessa) è pari a zero : 0=i=1NVi
In questo modo per un circuito è possibile scrivere un sistema di equazioni per la sua risoluzione.
Detto n il numero dei nodi ed r il numero dei rami (tratti di circuito compresi tra due nodi, che equivale al numero delle correnti incognite), il numero di equazioni indipendenti è pari ad r, di cui n-1 sono quelle ai nodi e r-(n-1) quelle alle maglie.
Come si procede con queste leggi?
assegniamo ad ogni resistenza una corrente
troviamo la polarità
ricaviamo equazioni per tanti nodi/maglie chiuse quante sono le incognite del problema
In alternativa si può anche usare il metodo di Maxwell, in cui si introducono delle correnti fittizie che percorrono ogni maglia chiusa.
Attenzione: se ci sono “m” generatori di corrente ideali, il numero di equazioni alle maglie sarà: r-(n-1)-m.
Resistenza tra due punti in una rete elettrica passiva
é la resistenza elettrica che la rete presenta verso un generatore esterno collegato nei punti considerati. Coincide al rapporto tensione-corrente tra la tensione applicata dal generatore e la corrente totale assorbita dalla rete. (esempio 11 paragrafo A2.9),

Caratteristiche tensione/corrente in CC per bipoli ideali
Sono delle rappresentazioni grafiche bidimensionali della relazione tra Tensione V e corrente I di un componente elettrico. Non è sempre ben definito quale sia l’ascissa e l’ordinata, dipende spesso dal caso specifico.
La tensione a vuoto V0è quella in cui la corrente non circola, cioè ho un bipolo a vuoto.
La corrente di cortocircuito Icc è quella che si manifesta quando non c’è differenza di potenziale ai morsetti, ossia sono cortocircuitati. Visualizziamo il luogo dei punti per studiare gli andamenti delle varie componenti in un piano cartesiano bidimensionale con la corrente I in ascissa e la tensione V in ordinata:
Generatore ideale di tensione: si ha una retta parallela all’ascissa con V costante pari alla tensione impressa (o fem) del generatore V=E
Generatore ideale di corrente: si ha una retta parallela all’ordinata con valore di corrente (costante) uguale alla corrente impressa dal generatore I=I0
Resistore ideale: retta passante per l’origine dove la pendenza, per la legge di Ohm, corrisponde al valore della resistenza V=R I
Circuito aperto ideale: la corrente è nulla, quindi si avrà una retta parallela all’ordinata passante per l’origine I=0
Cortocircuito ideale: non c’è caduta di potenziale, quindi ho tensione nulla ovunque, e avrò una retta passante per l’origine parallela all’ascissa V=0
Generatore reale di tensione: considera la resistenza interna in serie al generatore di tensione. La tensione che un eventuale carico resistivo sente ai suoi capi è:V=E-RiI. Quando I=0il generatore lavora a vuoto, mentre quando V=0 è in cortocircuito. Da qui si ricava la corrente di cortocircuito come Icc=E/Ri
Generatore reale di corrente: considera la resistenza interna parallela al generatore di corrente. L’effettiva corrente erogata sarà I=I0-V/Ri, dove I0è la corrente del generatore ideale ed Ri la resistenza interna in parallelo.
Utilizzatore attivo (di tensione):  componente elettrico che riceve corrente e, a differenza degli utilizzatori passivi, dispone al suo interno di una fem opposta, chiamata fcem (c sta per contro). Ad esempio una batteria sotto carica è un utilizzatore attivo. Per caricarla si usa fa passare una corrente che attraverso reazioni chimiche riporta la batteria al livello carico. Perché questo avvenga è necessario applicare una ddp V ai capi della batteria che sia costante e maggiore della tensione della batteria E. L’equazione caratteristica dell’utilizzatore attivo è: V=E+RiI, dove la tensione a vuoto corrisponde a I=0, cioè V0=E.
Tale curva nel piano I-V si chiama caratteristica esterna, o caratteristica volt-amperometrica di un bipolo, e definisce la relazione tra tensione e corrente in forma analitica o in forma grafica sul piano cartesiano.
Da tale curva si può capire se un bipolo è lineare oppure no. Se è una retta è lineare, altrimenti no.


Teorema di Millman
Il teorema afferma che la tensione ai capi del bipolo di una rete costituita da n rami è data dal rapporto tra la somma algebrica delle correnti di cortocircuito I_cc (si ottengono rimuovendo il generatore di tensione dal ramo i-esimo) dei singoli rami e la somma degli inversi delle resistenze R_i dei singoli rami (equivalentemente, delle conduttanze G_i). Ossia se immaginiamo un circuito chiuso, composto da n rami, composti a loro volta da una resistenza e un generatore di tensione, si ha che la tensione ai capi di ognuno di questi rami paralleli è data da:
V= IccReq=(i=1nViGi+j=1mI0i) / i=1nGi
dove V_i sono i generatori e G_i le conduttanze del ramo i-esimo, mentre I_0i  indica gli eventuali generatori di corrente. Sostanzialmente ci permette di semplificare un circuito di tanti rami paralleli come un unico generatore di corrente e una resistenza equivalente.
Questo teorema è estremamente utile perché permette di risolvere velocemente circuiti che richiederebbero molte equazioni (e tempo) utilizzando ad esempio il metodo di Kirchhoff.

Teorema di Thevenin
Questo teorema afferma che un circuito lineare (che rispetta il principio di sovrapposizione), di qualunque complessità, composto da generatori di tensione, generatori di corrente e di resistenze, visto da due terminali A e B, è perfettamente equivalente ad un generatore reale di tensione composto da un generatore ideale di tensione in serie ad un resistore.
Ossia: una rete lineare vista da due nodi può essere sostituita da un generatore di tensione equivalente, il quale rappresenta la tensione “a vuoto” fra due nodi, in serie ad una resistenza equivalente vista ai capi dei due nodi che si calcola cortocircuitando i generatori di tensione:
RThev=Evuoto/Icc

Teorema di Norton
Analogo al teorema di Thevenin. Un circuito lineare di qualunque complessità, visto da due nodi A e B, è equivalente ad un generatore reale di corrente costituito da un generatore ideale di corrente con in parallelo una resistenza.
La corrente impressa dal generatore reale equivalente è:
INort=Evuoto/RThev
che è proprio la corrente di cortocircuito ai nodi A e B (cioè quella che scorre quando sono cortocircuitati, mentre la resistenza di Thevenin è sempre quella in cui vengono cortocircuitati tutti i generatori).

NB: Quando ho generatori di corrente, essi vanno sostituiti da circuiti aperti, non da cortocircuiti!!!
