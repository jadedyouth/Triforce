//pulse loops
/*
void scroll_pulse () {
all_pulse ();
courage_pulse ();
wisdom_pulse ();
power_pulse (); }



void all_pulse () {
  while (cnt <255) { cnt ++;
for (int i = 0; i< LED_COUNT; i++) { leds[i] = CHSV (hue, sat, cnt);}
LEDS.show(); }

while (cnt > 30) { cnt --;
for (int i = 0; i< LED_COUNT; i++) { leds[i] = CHSV (hue, sat, cnt);}
LEDS.show(); }

}



void courage_pulse () {
/*
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 0); }
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (0, 255, 0); }
*/ /*
while (cnt <255) { cnt ++;
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (hue, sat, cnt); }
LEDS.show();
}
while (cnt > 30) { cnt --;
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (hue, sat, cnt); }
LEDS.show();
}

}

void wisdom_pulse () {
/*
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (0, 255, 0); }
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (0, 255, 0); }
*/ /*
while (cnt <255) { cnt ++;
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (hue, sat, cnt); }
LEDS.show();
}
while (cnt > 30) { cnt --;
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (hue, sat, cnt); }
LEDS.show();
}

}
/*
void power_pulse () {
/*
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (0, 255, 0); }
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 0); }
*/ /*
while (cnt <255) { cnt ++;
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (hue, sat, cnt); }
LEDS.show();
}
while (cnt > 30) { cnt --;
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (hue, sat, cnt); }
LEDS.show();
}
}  */
