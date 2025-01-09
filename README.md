07 Gennaio 2025

- [Introduzione](#introduzione)
- [firePID](#firepid)
- [Licenza](#licenza)

# Introduzione
Da qualche anno sono un appassionato del mondo BBQ. Non faccio tutto quello che vorrei ma mi diverto.

Ho 4 dispositivi e da qualche tempo sto pensando che in qualche situazione può essermi utile un "PID". Sul mercato ve ne sono diversi a prezzi variabili (dai 130€ ai quasi 500€).

Avendo qualche infarinatura di programmazione ed elettronica mi sono chiesto "perchè non farselo in casa e presentarlo come progetto Open Source ?" Ed ecco qui il mio personale progetto **firePID**

# firePID
**firePID** vuol essere un termometro multisonda e un PID per gestire un flusso di aria che tenga sotto controllo il dispositivo cercando di fargli mantenere una temperatura da noi preimpostata.

Gli obiettivi (troppi) che mi sono prefisso sono:
- costo possibilmente basso (diciamo entro i 100€)
- uso dei microcontrollori ESP32 della EspressIf (potenti ed a basso costo)
- device 'smart'
- possibilità di utilizzare sonde di altri termometri già in nostro possesso (perchè comprare cose che già ho ?)
- funzionamento opzionale a batteria (qualche litio 18650 in parallelo ? batteria 12V ?)
- display
- statistiche locali (anzichè via cloud). Excel ? Grafici ? Se c'è spazio sull'ESP32 per il codice...
- accesso via WEB (così non devo pensare a crearmi una app per smartphone ma chissà mai...)
- WiFi ovviamente (e Bluetooth)
- LoRa ?
- orologio integrato
- gestione ventola PWM
- riconoscimento software dell'apertura del coperchio
- possibilità di impostare sia una minima velocità della ventola sempre in funzione che limitare la massima velocità della ventola per evitare escalation della temperatura in dispositivi particolari come i Kamado
- profili multipli per i parametri di vari dispositivi in possesso (un kamado si comporta diversamente da un kettle). 4 bastano ?
- aggiornamento firmware OTA via WiFi
- sonda temperatura ambiente incorporata (purtroppo sarà viziata dal calore generato dall'ESP) (già incorporata nel modulo RTC DS...)
- sonda termocoppia K (usabile cone 'sonda oven' e/o per tarare le sonde di altri termometri in ns. possesso)
- ingresso per 3 sonde a termistori (sono quelle usate da altri termometri)

- altro... ?

Direi che di carne al fuoco ce ne è abbastanza :-)


# Licenza
Tutto il materiale qui presente è protetto dalla licenza CC BY-NC-ND 4.0

[https://creativecommons.org/licenses/by-nc-nd/4.0/](https://creativecommons.org/licenses/by-nc-nd/4.0/)

Tu sei libero di:

Condividere — riprodurre, distribuire, comunicare al pubblico, esporre in pubblico, rappresentare, eseguire e recitare questo materiale con qualsiasi mezzo e formato. Il licenziante non può revocare questi diritti fintanto che tu rispetti i termini della licenza.

Alle seguenti condizioni:

Attribuzione — Devi riconoscere una menzione di paternità adeguata , fornire un link alla licenza e indicare se sono state effettuate delle modifiche . Puoi fare ciò in qualsiasi maniera ragionevole possibile, ma non con modalità tali da suggerire che il licenziante avalli te o il tuo utilizzo del materiale.

Non Commerciale — Non puoi utilizzare il materiale per scopi commerciali.

Non opere derivate — Se remixi, trasformi il materiale o ti basi su di esso , non puoi distribuire il materiale così modificato.

Divieto di restrizioni aggiuntive — Non puoi applicare termini legali o misure tecnologiche che impongano ad altri soggetti dei vincoli giuridici su quanto la licenza consente loro di fare.
