//CÓDIGO SENSOR ULTRASSONICO PRO ARDUINO:

const int trigPin = 5; //Emite o sinal sonoro
const int echoPin = 4; //Capta as ondas sonoras refletidas
int enviarpy;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); //Definido Como saida pois ele emite o sinal sonoro
  pinMode(echoPin, INPUT); //Definido como entrada pois capta as ondas sonoras refletidas
}

void loop() {
  // put your main code here, to run repeatedly:

  //Enviando pulso ultrassonico:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(1000);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2); 
  //digitalWrite(trigPin, LOW);

  //Leitura do tempo de retorno do pulso:
  long duracao = pulseIn(echoPin, HIGH);

  //Calcula a distancia em cm:
  float distancia = duracao * 0.34/2;
  
  if (distancia > 80) {
    int enviarpy = 1 ;
    Serial.print(enviarpy);
  }
  else {
    int enviarpy = 0;
    Serial.print(enviarpy);
  }



  //Imprime a distancia no monitor serial:
  Serial.print("Distância: ");
  Serial.print(distancia);

  delay(500); // Pequena pausa antes da próxima leitura

}
