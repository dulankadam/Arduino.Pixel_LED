Install the FastLED Library:

Open the Arduino IDE.
Go to Sketch > Include Library > Manage Libraries....
In the Library Manager, type FastLED in the search bar and install the library.
Connect Your Pixel LED:

Connect the common anode/cathode pin to the appropriate voltage source on your Arduino (usually 5V or GND).
Connect the individual R, G, and B pins to PWM pins on your Arduino.
Upload the Following Code:

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



This code will cycle the LED through red, green, and blue colors with a 1-second delay between each color.

Make sure you've selected the correct board and port in the Arduino IDE before uploading the code.

Please adjust the LED_PIN and NUM_LEDS according to your setup. Also, remember to set the appropriate LED type (e.g., WS2812) if you're using a different type of pixel LED.

Keep in mind that the above code assumes you're using a common anode LED. If you're using a common cathode LED, you'll need to adjust the code accordingly.

Always double-check your connections and voltages to ensure you're not exceeding the specifications of your LED or the Arduino.