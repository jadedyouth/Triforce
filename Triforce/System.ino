//System wide 

void clear_all () {
  for (int i = 0; i< LED_COUNT; i++) { leds[i] = CHSV (0, 255, 0);}
  LEDS.show();
}

