// MACROS
#define BTN_1         0
#define BTN_PULLUP

#define BTN_2   12

#define BTN_PRESSED   1
#define BTN_NPRESSED  0

// GLOBALS
uint8_t leds_pins [] = {2, 4, 7, 8};

uint8_t counter = 0; // max number of counter is 4 so we make it unit8_t
uint8_t flag = 0;
uint8_t num_leds = sizeof(leds_pins)/sizeof(uint8_t);
uint8_t btn_status;
uint8_t btn_status_bl;
// PROTOTYPES
void led_init(uint8_t led_pin);
void led_on(uint8_t led_pin);
void led_on_bl();
void led_off(uint8_t led_pin);

void btn_init(uint8_t btn_pin);
uint8_t btn_state(uint8_t btn_pin);


void setup() {
  // put your setup code here, to run once:
  // number of LEDs
  for(uint8_t i = 0 ; i < num_leds ;i++){
    led_init(leds_pins[i]);

  }
  btn_init(BTN_1);
  btn_init(BTN_2);
  // all leds are low 
  for(uint8_t i = 0 ; i < num_leds ;i++){
    led_off(leds_pins[i]);

  }
  Serial.begin(115200);
}

void loop() {
  //Serial.println();
  // put your main code here, to run repeatedly:
  // read btn statusn 
  btn_status = btn_state(BTN_1) ;  
  btn_status_bl = btn_state(BTN_2) ;  

  if (btn_status_bl == BTN_PRESSED){
    flag = !flag;
  }
  if (flag){
    led_on_bl ();
  }
  // check if btn is pressed 
  if(btn_status == BTN_PRESSED){
    counter ++ ;
    Serial.println(counter);
    if (counter <= num_leds) {
			led_on(leds_pins[counter-1]);
		}
		else {	
      led_off(leds_pins[counter-1 - (num_leds)]);
			if (counter == num_leds*2){
				counter = 0;
			}
		}    
  }
  delay(150);
}

// functions
void led_init(uint8_t led_pin){
  pinMode(led_pin, OUTPUT);
}
void led_on(uint8_t led_pin){
  digitalWrite(led_pin, HIGH);
}
void led_on_bl(){
  for(uint8_t i = counter%num_leds ; i < num_leds ;i++){
    digitalWrite(leds_pins[i], !digitalRead(leds_pins[i]));
  }
  delay(500);
  for(uint8_t i = counter%num_leds ; i < num_leds ;i++){
    digitalWrite(leds_pins[i], !digitalRead(leds_pins[i]));
  }
  delay(500);
}
void led_off(uint8_t led_pin){
  digitalWrite(led_pin, LOW);
}

void btn_init(uint8_t btn_pin){
  #ifdef BTN_PULLUP
    pinMode(btn_pin, INPUT_PULLUP);
  #else
    pinMode(btn_pin, INPUT);
  #endif
}
uint8_t btn_state(uint8_t btn_pin){
  #ifdef BTN_PULLUP
    return !(digitalRead(btn_pin)) ;// if return 
  #else
    return digitalRead(btn_pin) ;
  #endif
}