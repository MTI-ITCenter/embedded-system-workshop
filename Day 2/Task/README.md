# Description
trin
## Hardware Requirements
    - Four LEDs (LED0, LED1, LED2, LED3)
    - one button (BUTTON0)
## Software Requirements
    - Initially, all LEDs are OFF
    - Once BUTTON0 is pressed, LED0 will be ON
    - Each press further will make another LED is ON
    - At the fifth press, LED0 will changed to be OFF
    - Each press further will make only one LED is OFF
    - This will be repeated forever 
    - The sequence is described below
        - Initially (OFF, OFF, OFF, OFF)
        - Press 1 (ON, OFF, OFF, OFF)
        - Press 2 (ON, ON, OFF, OFF)
        - Press 3 (ON, ON, ON, OFF)
        - Press 4 (ON, ON, ON, ON)
        - Press 5 (OFF, ON, ON, ON)
        - Press 6 (OFF, OFF, ON, ON)
        - Press 7 (OFF, OFF, OFF, ON)
        - Press 8 (OFF, OFF, OFF, OFF)
        - Press 9 (ON, OFF, OFF, OFF)


## prototypes

    `void led_init(uint_8 led_pin)`
    `void led_on(uint_8 led_pin)`
    `void led_off(uint_8 led_pin)`
    
## Hardware Requirements

    - Four LEDs (LED0, LED1, LED2, LED3)
    - Two buttons (BUTTON0 and BUTTON1)
## Software Requirements

    - Initially, all LEDs are OFF
    - Once BUTTON0 is pressed, LED0 will blink with BLINK_1 mode
    - Each press further will make another LED blinks BLINK_1 mode
    - At the fifth press, LED0 will changed to be OFF
    - Each press further will make only one LED is OFF
    - This will be repeated forever
    - The sequence is described below
        - Initially (OFF, OFF, OFF, OFF)
        - Press 1 (BLINK_1, OFF, OFF, OFF)
        - Press 2 (BLINK_1, BLINK_1, OFF, OFF)
        - Press 3 (BLINK_1, BLINK_1, BLINK_1, OFF)
        - Press 4 (BLINK_1, BLINK_1, BLINK_1, BLINK_1)
        - Press 5 (OFF, BLINK_1, BLINK_1, BLINK_1)
        - Press 6 (OFF, OFF, BLINK_1, BLINK_1)
        - Press 7 (OFF, OFF, OFF, BLINK_1)
        - Press 8 (OFF, OFF, OFF, OFF)
        - Press 9 (BLINK_1, OFF, OFF, OFF)
    - When BUTTON1 has pressed the blinking on and off durations will be changed
        - No press → BLINK_1 mode (ON: 100ms, OFF: 900ms)
        - First press → BLINK_2 mode (ON: 200ms, OFF: 800ms)
        - Second press → BLINK_3 mode (ON: 300ms, OFF: 700ms)
        - Third press → BLINK_4 mode (ON: 500ms, OFF: 500ms)
        - Fourth  press → BLINK_5 mode (ON: 800ms, OFF: 200ms)
        - Fifth press → BLINK_1 mode
