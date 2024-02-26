void setup() {
  // Set pin 13 as an output by setting the 5th bit of DDRB
  // Pin 13 is mapped to bit 5 of the DDRB register on the ATmega328P
  DDRB |= (1 << 5);
}

void loop() {
  // Set pin 13 high (turn on LED) by setting the 5th bit of PORTB
  PORTB |= (1 << 5);
  delay(1000); // Wait for a second
  
  // Set pin 13 low (turn off LED) by clearing the 5th bit of PORTB
  PORTB &= ~(1 << 5);
  delay(1000); // Wait for a second
}