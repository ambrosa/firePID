07 Gennaio 2025

Da qualche anno sono un fruitore/moderato appassionato del mondo BBQ.
Ho 4 dispositivi e da qualche tempo sto pensando che in qualche situazione può essermi utile un "PID". Sul mercato ve ne sono diversi a prezzi variabili (dai 130€ ai quasi 500€).
Avendo qualche infarinatura di programmazione ed elettronica mi sono chiesto "perchè non farselo in casa e presentarlo come progetto Open Source ?"
Ed ecco qui firePID...

Gli obiettivi che mi sono prefisso sono:
- costo possibilmente basso
- uso dei microcontrollori ESP32 della EspressIf (potenti ed a basso costo)
- device 'smart' (qualunque cosa questo voglia dire :-) 
- possibilità di utilizzare sonde di termometri già in nostro possesso (perchè comprare cose che già ho ?)
- funzionamento opzionale a batteria (qualche litio 18650 in parallelo...)
- display
- statistiche locali (e non via cloud). Excel ? Grafici ? Se c'è spazio sull'ESP32 per il codice...
- accesso via WEB (così non devo pensare a crearmi una app per smartphone ma chissà mai...)
- WiFi ovviamente (e Bluetooth)
- LoRa ?
- orologio integrato
- gestione ventola PWM
- riconoscimento software dell'apertura del coperchio
- possibilità di impostare sia una minima veloctà della ventola sempre in funzione che limitare la massima velocità della ventola per evitare escalation della temperatura in dispositivi particolari come i Kamado
- profili dei parametri per vari dispositivi in possesso (un kamado si comporta diversamente da un kettle)
- aggiornamento firmware OTA via wifi
- parametri di funzionamento memorizzabili per 4 dispositivi diversi
- sonda temperatura ambiente (purtroppo sarà viziata dal calore generato dall'ESP) (già incorporata nel modulo RTC DS...)
- sonda termocoppia K (usabile cone 'sonda oven' e/o per tarare le sonde di altri termometri in ns. possesso)
- ingresso per 3 sonde a termistori (quelle usate da altri termometri)

- altro...


