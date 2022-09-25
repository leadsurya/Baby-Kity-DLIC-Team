byte PWM_PIN = 3;
int pwm_value;
 
void setup() {
  pinMode(PWM_PIN, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
  Serial.begin(115200);
}
 
void loop() {
  pwm_value = pulseIn(PWM_PIN, HIGH);
   if(pwm_value == 0)
  {
     digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  } 
  else if(pwm_value <= -30000){
    digitalWrite(13, HIGH);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
else if(pwm_value <= -24000){
    digitalWrite(13, LOW);
     digitalWrite(12, HIGH);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
else if(pwm_value <= -18000){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
else if(pwm_value <= -12000){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
else if(pwm_value <= -6000){
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, HIGH);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
  else if(pwm_value < 0){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
else if(pwm_value > 0 && pwm_value <= 6000){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
  else if(pwm_value <= 12000){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
  else if(pwm_value <= 18000){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
  else if(pwm_value <= 24000){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, HIGH);
     digitalWrite(2, LOW);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
  else if(pwm_value <= 30000){
    digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
     digitalWrite(5, LOW);
     digitalWrite(4, LOW);
     digitalWrite(2, HIGH);
     digitalWrite(1, LOW);
     digitalWrite(0, LOW);
  }
else{
    digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(9, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(2, HIGH);
     digitalWrite(1, HIGH);
     digitalWrite(0, HIGH);
  }           
  delay(15);
  Serial.println(pwm_value);
}
