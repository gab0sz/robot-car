#include "CytronMotorDriver.h"

// Configure the motor driver.
CytronMD motor1(PWM_DIR, 16, 17);  // PWM 1 = Pin 3, DIR 1 = Pin 4.

#define LED_GPIO   16
#define PWM1_Ch    0
#define PWM1_Res   8
#define PWM1_Freq  1000

uint8_t LED = 16;

int PWM1_DutyCycle = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.print("asd\n");
  // analogWrite(16,128);
  motor1.setSpeed(128);   // Motor 1 runs forward at 50% speed.
  delay(1000);
  
  motor1.setSpeed(255);   // Motor 1 runs forward at full speed.
  delay(1000);

  motor1.setSpeed(0);     // Motor 1 stops.
  delay(1000);

  motor1.setSpeed(-128);  // Motor 1 runs backward at 50% speed.
  delay(1000);
  
  motor1.setSpeed(-255);  // Motor 1 runs backward at full speed.
  delay(1000);

  motor1.setSpeed(0);     // Motor 1 stops.
  delay(1000);
  //analogWrite(LED, 64);
  delay(1000);
  // while(PWM1_DutyCycle < 255)
  // {
  //   ledcWrite(PWM1_Ch, PWM1_DutyCycle++);
  //   delay(10);
  // }
  // while(PWM1_DutyCycle > 0)
  // {
  //   ledcWrite(PWM1_Ch, PWM1_DutyCycle--);
  //   delay(10);
  // }
}
