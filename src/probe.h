#ifndef PROBE_H
#define PROBE_H

#include <Arduino.h>

#define PROBE1_ADC_GPIO 34  // Ideaspark dev board, GPIO 34 -> physical pin 12 "D34"
#define PROBE2_ADC_GPIO 35  // Ideaspark dev board, GPIO 35 -> physical pin 11 "D35"
#define PROBE3_ADC_GPIO 32  // Ideaspark dev board, GPIO 32 -> physical pin 10 "D32"

#define NUM_AVG_READ    10  // numero di campionamenti per ottenere una lettura media
#define MS_READ         50  // millisecondi tra le singole letture. La lettura dura quindi (NUM_AVG_READ * MS_READ) millisecondi

class ADC_average {
  public:
    ADC_average();
    void write_buf(int v);
    int read_avg(void);
  protected:
    int buffer_len;
    int *buffer;
    int buffer_index;
    int buffer_div_index;
};


class probe: public ADC_average {
    public:
        probe(int v);
        int read_probe();

    protected:
        int probe_number;

};

#endif