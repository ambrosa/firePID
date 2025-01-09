#ifndef PROBE_H
#define PROBE_H

#include <Arduino.h>

const int ADC_RESOLUTION = 11; // ESP32 può avere una precisione di 12,11,10,9 bit.  12 bit è molto rumorosa

#define PROBE1_ADC_GPIO 34  // Ideaspark dev board, GPIO 34 -> physical pin 12 "D34"
#define PROBE2_ADC_GPIO 35  // Ideaspark dev board, GPIO 35 -> physical pin 11 "D35"
#define PROBE3_ADC_GPIO 32  // Ideaspark dev board, GPIO 32 -> physical pin 10 "D32"

#define AVG_NUM_READ    10  // numero di campionamenti per ottenere una lettura media
#define MS_READ         50  // millisecondi tra le singole letture. La lettura dura quindi (AVG_NUM_READ * MS_READ) millisecondi


class probeRead {
  public:
    probeRead(int p);
    void writeBuf(int v);
    int readAvg(void);
    int readOnce();

  protected:
    int readADC();

    int probeGpio;

    int* buffer;
    int bufferLen;
    int bufferIndex;
};


#endif