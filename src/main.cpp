#include "Arduino.h"

#define LED_BUILTIN 8

static char buffer[20];

void setup()
{
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    
    delay(1000);
    
    digitalWrite(LED_BUILTIN, LOW);
    
    delay(1000);

    byte n = Serial.available();
    
    if (n != 0)
    {
        byte m = Serial.readBytesUntil('\n', buffer, sizeof(buffer) - 1);
        buffer[m] = '\0';
        Serial.print("Received: ");
        Serial.println(buffer);
    }

    Serial.println("Hello");
}