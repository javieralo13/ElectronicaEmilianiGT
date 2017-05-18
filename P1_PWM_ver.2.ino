/*
 * TEMAS: este programa contiene una implementación al uso de PWM
 * entrada de bottones
 * Desplegar PWM mediante la funcion AnalogWrite()
 */

const byte pinLED= 7;
const byte pinMotor = 6;

const byte push1= 0;
 
void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(pinMotor, OUTPUT);
  pinMode(push1, INPUT_PULLUP);

}
//variables Globales
uint8_t contador; // si hay mucho codigo --> uint8_t contador=0;

void loop() {
  boolean estadoPush = digitalRead(push1);

  if(estadoPush==LOW){
    digitalWrite(pinLED,HIGH);

    //asignacion valor de PWM
    analogWrite(pinMotor,contador);
    contador = contador+17; //** 255/15=17
    if(contador>=255){
      contador=0;
    }

    delay(200);
    digitalWrite(pinLED,LOW);
  }

}//fin void loop()




