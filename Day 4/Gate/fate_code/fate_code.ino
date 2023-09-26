// 
#include <LiquidCrystal.h>                                             defines
#define  LED_GO_PIN   5
#define  LED_STOP_PIN 6

#define MOTOR_CONTROL_PIN   3

#define IR_PIN  4

#define LCD_RS  13
#define LCD_RW  12
#define LCD_E   11
#define LCD_D4  10
#define LCD_D5  9
#define LCD_D6  8
#define LCD_D7  7

#define BTN_EMR 




void led_init(uint8_t led_pin);
void led_on(uint8_t led_pin);
void led_off(uint8_t led_pin);
// include the library code:

LiquidCrystal lcd(LCD_RS, LCD_RW,LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
  // put your setup code here, to run once:
  led_init(LED_GO_PIN);
  led_init(LED_STOP_PIN);
  // LCD INIT
  pinMode(LCD_RS,OUTPUT);
  pinMode(LCD_RW,OUTPUT);
  pinMode(LCD_E,OUTPUT);
  pinMode(LCD_D4,OUTPUT);
  pinMode(LCD_D5,OUTPUT);
  pinMode(LCD_D6,OUTPUT);
  pinMode(LCD_D7,OUTPUT);

  // motor control PWM
  pinMode(MOTOR_CONTROL_PIN,OUTPUT);

  // IR INIT
  pinMode(IR_PIN,INPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");     
}

void loop() {
  // put your main code here, to run repeatedly:
// set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000); 
}


// functions
void led_init(uint8_t led_pin){
  pinMode(led_pin, OUTPUT);
}
void led_on(uint8_t led_pin){
  digitalWrite(led_pin, HIGH);
}
void led_off(uint8_t led_pin){
  digitalWrite(led_pin, LOW);
}

