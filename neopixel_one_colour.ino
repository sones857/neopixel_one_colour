#include <Adafruit_NeoPixel.h>
#define PIN 2 //data pin
#define NUM_LIGHTS  30 //number of neopixels

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LIGHTS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  uint32_t low = strip.Color(0, 0, 0);
  uint32_t high = strip.Color(255, 0, 0);

  /*
    ##########################################################
    ##################  COLOUR VALUES  #######################
    ##########################################################

    ###############     RED  255, 0, 0       #################
    ###############    GREEN 0, 255, 0       #################
    ###############     BLUE 0, 0, 255       #################
    ###############     CYAN 0, 255, 255     #################    
    ###############   PURPLE 128, 0, 128     #################
    ###############  MAGENTA 255, 0, 255     ################# 
    ###############   YELLOW 255, 255, 0     #################
    ###############   ORANGE 255, 165, 0     #################
    ###############     WARM 255, 233, 233   #################
    ###############    WHITE 255, 255, 255   #################
    
  */
  
  for ( int i = 0; i < NUM_LIGHTS; i++) {
    strip.setPixelColor(i, high);
    strip.show();
  }
  delay(10);
}
