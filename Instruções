# SensorBloqueio - Projeto para as cadeiras de Sistemas Digitais e Introdução à Computação

Este documento reúne todos os códigos, esquemas e instruções necessários para a implementação do projeto de um sistema de bloqueio utilizando um sensor ultrassônico e Arduino. O objetivo é fornecer um guia completo e consolidado para replicar o projeto.

---

# Descrição do Projeto
O sistema utiliza um sensor ultrassônico para detectar a distância do usuário. Quando o usuário é detectado a uma distância inferior ao limite configurado (80 cm), o sistema ativa um bloqueio de tela (windows+L).

# Componentes Necessários
- 1 Placa Arduino (UNO)
- 1 Sensor Ultrassônico 
- 1 Protoboard
- Cabos Jumper
- 1 Resistor de 330Ω
- Fonte de alimentação USB para o Arduino
- Computador com IDE Arduino instalada

---

# Esquema de Ligação

# Conexões do Sensor Ultrassônico (HC-SR04):
| Pino do Sensor | Conexão no Arduino |
|----------------|---------------------|
| VCC            | 5V                 |
| GND            | GND                |
| TRIG           | Pino Digital 5     |
| ECHO           | Pino Digital 4     |



# Código Fonte em C++ (IDE Arduino)

```cpp
const int trigPin = 5; // Pino para emitir o sinal ultrassônico
const int echoPin = 4; // Pino para captar o sinal refletido
int enviarpy;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Emissão do sinal ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);

  // Cálculo da distância
  long duracao = pulseIn(echoPin, HIGH);
  float distancia = duracao * 0.034 / 2;

  // Lógica de ativação do sistema
  if (distancia > 80) {
    enviarpy = 1;
    Serial.print(enviarpy);
  } else {
    enviarpy = 0;
    Serial.print(enviarpy);
  }

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm.");

  delay(500);
}
```

---

# Passo a Passo para Montagem

# 1. Reunir os Materiais
Certifique-se de que todos os componentes estão disponíveis antes de iniciar.

# 2. Montar o Circuito
- Siga o esquema de ligação acima.
- Verifique as conexões no protoboard para garantir que estão firmes.

# 3. Configurar a IDE Arduino
- Instale a [IDE Arduino](https://www.arduino.cc/en/software).
- Configure a porta COM correspondente ao seu Arduino.
- Selecione a placa correta (UNO) no menu "Ferramentas".

# 4. Carregar o Código
- Abra o código fornecido na IDE Arduino.
- Clique em "Upload" para carregar o código na placa Arduino.

# 5. Testar o Sistema
- Fique em diferentes distâncias do sensor.
- Verifique a saída no Monitor Serial da IDE Arduino.

---

# Aplicativos Utilizados

# 1. Arduino IDE
- Software para desenvolvimento e upload do código no Arduino.

# 2. Python
- Pode ser utilizado para integração com sistemas externos, caso necessário.

# 3. GitHub
- Repositório para compartilhar e hospedar o projeto.

---

# Download do Projeto Completo
Clique [aqui](./arquivos/projeto_completo.zip) para baixar todos os arquivos necessários (código, esquemas e instruções).

---

# Dúvidas e Suporte
Para dúvidas ou suporte, entre em contato através do GitHub ou dos canais disponibilizados pelo projeto.

---

**&copy; 2024 Cesar School. Todos os direitos reservados.**

