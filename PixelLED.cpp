#include <FastLED.h>

#define LED_PIN     6  // Define the pin where your LED is connected
#define NUM_LEDS    1  // Define the number of LEDs in your strip

CRGB leds[NUM_LEDS];   // Create an array of CRGB objects

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);  // Define LED type and pin
}

void loop() {
  // Set color (red, green, blue)
  leds[0] = CRGB(255, 0, 0);  // Set the LED to red
  FastLED.show();  // Show the updated color
  delay(1000);  // Wait for 1 second

  leds[0] = CRGB(0, 255, 0);  // Set the LED to green
  FastLED.show();  
  delay(1000);

  leds[0] = CRGB(0, 0, 255);  // Set the LED to blue
  FastLED.show();  
  delay(1000);
}
