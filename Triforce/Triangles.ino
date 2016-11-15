//triangles

void triangles () {

for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 255); }
LEDS.show();
delay (500);
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 0); }
LEDS.show();

for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (0, 255, 255); }
LEDS.show();
delay (500);

for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (0, 255, 0); }
LEDS.show();

for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (0, 255, 255); }
LEDS.show();
delay (500);
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (0, 255, 0); }
LEDS.show();

for (int i = 0; i< 99; i++) {
leds[Middle[i]] = CHSV (160, 255, 255); }
LEDS.show();
delay (500);
for (int i = 0; i< 99; i++) {
leds[Middle[i]] = CHSV (160, 255, 0); }
LEDS.show();

}
