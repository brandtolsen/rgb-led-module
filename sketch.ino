int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {
  RGB_color(255, 0, 0); // Red
  RGB_color(0, 255, 0); // Green
  RGB_color(0, 0, 255); // Blue
  RGB_color(255, 255, 125); // Raspberry
  RGB_color(0, 255, 255); // Cyan
  RGB_color(255, 0, 255); // Magenta
  RGB_color(255, 255, 0); // Yellow
  RGB_color(255, 255, 255); // White
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
