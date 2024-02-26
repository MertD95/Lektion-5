// Define the memory addresses for DDRB and PORTB registers
volatile uint8_t* ddrb  = (volatile uint8_t*)0x24;
volatile uint8_t* portb = (volatile uint8_t*)0x25;

void setup() {
  // Set pin 13 (PB5) as an output
  *ddrb |= (1 << 5);
}

void loop() {
  // Set pin 13 high (turn on the LED)
  *portb |= (1 << 5);
  delay(1000); // Wait for a second
  
  // Set pin 13 low (turn off the LED)
  *portb &= ~(1 << 5);
  delay(1000); // Wait for a second
}