LEGGI DI KIRCHOFF
Ricordando che un nodo è un punto di diramazione almeno triplo, il primo principio di Kirchoff dice che, in ogni istante t la somma algebrica delle correnti in un nodo è uguale a zero. Somma algebrica significa che le correnti entranti hanno segno opposto alle correnti uscenti.
Il secondo principio dice invece che in una maglia (un percorso chiuso che partendo da un nodo torna allo stesso nodo senza incroci o sovrapposizioni) la somma algebrica delle tensioni è, in ogni istante t, uguale a zero.
Riassumendo:
1.La somma algebrica delle correnti attraverso un nodo è nulla 0=i=1NIi.
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
V= IccReq=(i=1nViGi+j=1mI0j) / i=1nGi
dove V_i sono i generatori e G_i le conduttanze del ramo i-esimo, mentre I_0j  indica gli eventuali generatori di corrente. Sostanzialmente ci permette di semplificare un circuito di tanti rami paralleli come un unico generatore di corrente e una resistenza equivalente.
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

TEORIA DEL SEGNALE
Attraverso un generatore di forme d’onda è possibile generare funzioni variabili nel tempo. Queste funzioni sono rappresentate graficamente con forme differenti, come ad esempio l’onda sinusoidale, l’onda quadra, l’onda triangolare, l’onda a dente di sega.
Esse sono caratterizzate da quantità come l’ampiezza, la frequenza (o il periodo) e la loro forma.
Con un oscilloscopio posso quindi generare una tensione variabile nel tempo, che chiamerò V(t) e avrà la forma di un’onda quadra.

Abbiamo differenti parametri utili:
Tensione di picco VP indicherà i valori di picco della tensione (i massimi ad esempio)
Tensione efficace Veffindicherà gli effettivi valori di tensione: Veff=VP/2
Tensione picco-piccoVppindica Vpp=22 Veff
Ad esempio la normale tensione elettrica domestica è di Veff=230V. La tensione di picco sarà quindi VP=325.3V, mentre la tensione picco picco è di circa Vpp=650,54V.  

Note basilari su funzioni sinusoidali
I segnali sinusoidali sono segnali variabili nel tempo della forma A(t)=A0(t+), dove è la pulsazione, A0 è l’ampiezza iniziale, e  è la fase del segnale.

La fase è una misura angolare che caratterizza la posizione del segmento V ad ogni istante dalla sua rotazione. Sommare una fase positiva equivale ad un segnale anticipato, sommare  un segnale negativo equivale ad un segnale ritardato. V(t)=V(t+/2).
Il periodo di un’onda è il tempo impiegato per compiere un ciclo intero; si indica con T e si misura in secondi. La frequenza è invece il numero di cicli che vengono compiuti nell’unità di tempo: f=1/T e si misura in Hz.
La relazione tra pulsazione, periodo e frequenza è: =2f=2/T.

I segnali si rappresentano come ampiezze in funzione del tempo, e possono essere di diverso tipo: unipolare, pulsante, alternato, a valor medio nullo, misto.
Una quantità importante per i segnali pulsanti è il ciclo di lavoro, o duty cycle , che quantifica, rispetto al periodo del segnale, quanto questo resta in uno stato alto:d.c.=talto/T %
