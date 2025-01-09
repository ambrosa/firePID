#include <Arduino.h>
#include <probe.h>


// costruttore
probeRead::probeRead(int p) {

    probeRead::probeGpio = 0;

    switch(p) {
        case 1:
            probeRead::probeGpio = PROBE1_ADC_GPIO;
            break;
        case 2:
            probeRead::probeGpio = PROBE1_ADC_GPIO;
            break;
        case 3:
            probeRead::probeGpio = PROBE1_ADC_GPIO;
            break;
        default:
            probeRead::probeGpio = 0;
            break;
    }

    analogReadResolution(ADC_RESOLUTION);  // setta la risoluzione dell'ADC. in ESP32 il massimo è 12bit (ma molto rumore)

    probeRead::bufferLen = AVG_NUM_READ;  // buffer size
    probeRead::buffer = new int[probeRead::bufferLen]; // crea il buffer

    // azzera il buffer
    for(int i = 0 ; i < probeRead::bufferLen; i++) {
        probeRead::buffer[i] = 0;
    }
    
    probeRead::bufferIndex = 0;  // parti dall'indice 0
}

int probeRead::readADC() {
    int value;
    value = analogRead(probeRead::probeGpio);
    return value;
    //mVolt = analogReadMilliVolts(probeRead::probeGpio);  
    //probeRead::writeBuf(value);
}

// leggi l'ADC e scrivi la lettura nel buffer
void probeRead::writeBuf(int v) {
    probeRead::buffer[probeRead::bufferIndex] = v;
    probeRead::bufferIndex++;

    // se è stata raggiunta la fine del buffer, ricomincia ad inserire i valori dall'inizio
    if (probeRead::bufferIndex >= probeRead::bufferLen) {
        probeRead::bufferIndex = 0;
    }
}

// lettura singola, senza media
int probeRead::readOnce(){
    int value;
    value = probeRead::readADC();
    return value;
}

int probeRead::readAvg(void) {
    long sum = 0;
    int value;
    int i;
    
    for(i = 0 ; i < AVG_NUM_READ ; i++){
        value = probeRead::readADC();
        probeRead::writeBuf(value);
        delay(MS_READ);
    }

    for(i = 0 ; i < probeRead::bufferLen; i++) {
        sum += (long)probeRead::buffer[i];
    }
    sum = sum / probeRead::bufferLen;
    return (int)sum;
}




