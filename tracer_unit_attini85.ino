/* ATtiny 85 pinout
     o___
    1|   |8 VCC
    2|   |7 PB2 (пин прерывания)
    3|   |6 PB1 (IDE PIN 1 - пин управления светодиодной сборкой)
GND 4|___|5   
*/
#include <avr/io.h>
#include <avr/interrupt.h>

#define INT_PIN PB2           // Interrupt pin of choice: PB2 (same as PCINT2) - Pin 7
#define LED_PIN PB1           // PB1 - Pin 6

int f = 0; //флаг пролета шара

void setup() {
  pinMode(LED_PIN, OUTPUT); //Пин светодиода
  pinMode(INT_PIN, INPUT_PULLUP);   // Set our interrupt pin as input with a pullup to keep it stable
  
  }
/*void fire() 
{
  f = 1;
  //Serial.println('detect');
  }*/

void loop() {
 if (digitalRead(INT_PIN) == LOW) {
 digitalWrite(LED_PIN, HIGH);
 delay(250);
 digitalWrite(LED_PIN, LOW);
 f = 0;
  }
}
