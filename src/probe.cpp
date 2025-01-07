#include <Arduino.h>
#include <probe.h>


ADC_average::ADC_average() {
    ADC_average::buffer_len = NUM_AVG_READ;  // buffer size
    ADC_average::buffer = new int[ADC_average::buffer_len];

    // azzera il buffer
    for(int i = 0 ; i < ADC_average::buffer_len; i++) {
        ADC_average::buffer[i] = 0;
    }

    ADC_average::buffer_index = 0;
    ADC_average::buffer_div_index = 0;
}

void ADC_average::write_buf(int v) {
    ADC_average::buffer[ADC_average::buffer_index] = v;
    ADC_average::buffer_index++;
    
    // per eliminare i valori fake nei primi momenti dello startup. Serve davvero ?? Forse si può togliere e risparmiare un pò di codice
    if (ADC_average::buffer_div_index < ADC_average::buffer_len) {
        ADC_average::buffer_div_index++;
    }

    if (ADC_average::buffer_index >= ADC_average::buffer_len) {
        ADC_average::buffer_index = 0;
    }
}

int ADC_average::read_avg(void) {
    long tot = 0;

    for(int i = 0 ; i < ADC_average::buffer_len; i++) {
        tot += (long)ADC_average::buffer[i];
    }
    tot = tot / ADC_average::buffer_div_index;
    return (int)tot;
}




