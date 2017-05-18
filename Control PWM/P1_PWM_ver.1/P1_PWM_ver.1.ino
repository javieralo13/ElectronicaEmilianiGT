/*
 * TEMAS: vamos a crear un progrmas donde inlcuya la 
 * lectura de un sensor PUSH-BUTTON para la lectura de estados
 * guardar estos estado para saber que ocurrio en un estado
 * anterior.
 * 
 * Desplegar PWM mediante la funcion AnalogWrite()
 */

const byte pinLED= 6; //pin MOTOR también

 
void setup() {
  pinMode(pinLED, OUTPUT);

}
//variables Globales


void loop() {

  for(int i=0; i<256; i=i+10){
    analogWrite(pinLED, i);
    delay(500); 
  }

  for(int i=255; i>=0; i=i-10){
    analogWrite(pinLED, i);
    delay(500); 
  }
   

}//void loop()




