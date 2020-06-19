/*
 * Instituto Emiliani Somascos
 * Instructor: Milton Javier Alonzo
 * 
 * EJEMPLO DE SECUENCIA NORMAL
 * MOTOR STEPPER 
*/
const uint8_t pinStepper[]={2,3,4,5}; //2=IN1 3=IN2 ...etc

const uint8_t secuencia[4][4]=
{
  {HIGH, HIGH, LOW, LOW},
  {LOW, HIGH, HIGH, LOW},
  {LOW, LOW, HIGH, HIGH},
  {HIGH, LOW, LOW, HIGH}
};

void setup() {
  for(int i=0; i<4; i++){
    pinMode(pinStepper[i],OUTPUT);
  }

  //inicializacion de estados bajos en los pines
  for(int i=0; i<4; i++){
    digitalWrite(pinStepper[i],LOW);
  }
}

void loop() {
  // ciclo for anidado
  for(int i=0; i<4; i++){
    //colocar los estados en los pines
    for(int j=0; j<4; j++){
      digitalWrite(pinStepper[i],secuencia[i][j]);
    }
    //retardo para que pase al siguiente paso
    delay(500);
  }
}
