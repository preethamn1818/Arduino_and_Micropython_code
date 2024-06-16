#include <FastLED.h>

#define DATA_PIN 3 // Pin connected to SMD RGB LED data pin

FASTLED_USING_NAMESPACE_FASTLED;

CRGB leds[MAX_LEDS]; // Array to store LED values

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, MAX_LEDS);
}

void loop() {
  // Set the brightness and color of the LED
  for (int i = 0; i < MAX_LEDS; i++) {
    leds[i] = CRGB::Red; // Set the color to red
  }
  FastLED.show(); // Update the LEDs

  delay(1000); // Wait for 1 second

  for (int i = 0; i < MAX_LEDS; i++) {
    leds[i] = CRGB::Green; // Set the color to green
  }
  FastLED.show(); // Update the LEDs

  delay(1000); // Wait for 1 second

  for (int i = 0; i < MAX_LEDS; i++) {
    leds[i] = CRGB::Blue; // Set the color to blue
  }
  FastLED.show(); // Update the LEDs

  delay(1000); // Wait for 1 second
}
