#include "Serial.h"

int main(int argc, char **argv)
{
    mbed::Serial console(SERIAL_TX, SERIAL_RX, 115200);

    console.printf("This is SensorIO template.\n\r");

    while(1)
    {
        console.putc(console.getc()); // echo input back to terminal
    }
}
