#include "FastLED.h"
#define NUM_LEDS 70
uint8_t brightness = 50;
uint8_t t = 50;
uint8_t i = 0;

CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<NEOPIXEL, 26>(leds, NUM_LEDS);
  FastLED.setBrightness(brightness);
  }

  
void loop() {
  for(i=0 ; i<=35; i++){
     leds[i] = CRGB::Red; FastLED.show();
     leds[(NUM_LEDS-1) - i] = CRGB::Red; FastLED.show();
     delay(t);
  }
  for(i=0 ; i<=35; i++){
     leds[i] = CRGB::Blue; FastLED.show();
     leds[(NUM_LEDS-1) - i] = CRGB::Blue; FastLED.show();
     delay(t);
  }
  for(i=0 ; i<=35; i++){
     leds[i] = CRGB::Green; FastLED.show();
     leds[(NUM_LEDS-1) - i] = CRGB::Green; FastLED.show();
     delay(t);
  }
  for(i=0 ; i<=35; i++){
     leds[i] = CRGB::Yellow; FastLED.show();
     leds[(NUM_LEDS-1) - i] = CRGB::Yellow; FastLED.show();
     delay(t);
  }
  for(i=0 ; i<=35; i++){
     leds[i] = CRGB::Purple; FastLED.show();
     leds[(NUM_LEDS-1) - i] = CRGB::Purple; FastLED.show();
     delay(t);
  }
  for(i=0 ; i<=35; i++){
     leds[i] = CRGB::White; FastLED.show();
     leds[(NUM_LEDS-1) - i] = CRGB::White; FastLED.show();
     delay(t);
  }
}
