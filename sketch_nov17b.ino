const int trigPin = 5; // Emite o sinal sonoro
const int echoPin = 4; // Capta as ondas sonoras refletidas
int enviarpy;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);

  long duracao = pulseIn(echoPin, HIGH);
  float distancia = duracao * 0.034 / 2;

  if (distancia > 80) {
    enviarpy = 1;
    Serial.print(enviarpy);
  } else {
    enviarpy = 0;
    Serial.print(enviarpy);
  }

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println("cm.");

  delay(500);
} 
  