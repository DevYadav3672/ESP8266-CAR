#define ENAA 3
#define IN1A 2
#define IN2A 4
#define ENBA 6
#define IN3A 5
#define IN4A 7

#define ENAB 9
#define IN1B 8
#define IN2B 10
#define IN3B 13
#define IN4B 12
#define ENBB 11 

void setup() {
  Serial.begin(9600);
  // BT.begin(9600);

  pinMode(IN1A, OUTPUT);
  pinMode(IN2A, OUTPUT);
  pinMode(IN3A, OUTPUT);
  pinMode(IN4A, OUTPUT);
  pinMode(ENAA, OUTPUT);
  pinMode(ENBA, OUTPUT);

  pinMode(IN1B, OUTPUT);
  pinMode(IN2B, OUTPUT);
  pinMode(IN3B, OUTPUT);
  pinMode(IN4B, OUTPUT);
  pinMode(ENAB, OUTPUT);
  pinMode(ENBB, OUTPUT);

  Serial.println("Pin modes are set!");
}

void loop() {

  char command;
  if (Serial.available()) {
    command = Serial.read();
    Serial.println(command);

    if (command == 'F') {
      digitalWrite(IN1A, HIGH); digitalWrite(IN2A, LOW);
      digitalWrite(IN3A, HIGH); digitalWrite(IN4A, LOW);
      analogWrite(ENAA, 255);   analogWrite(ENBA, 255);
      Serial.println("Forward");

      
        digitalWrite(IN1B, HIGH); digitalWrite(IN2B, LOW);
        digitalWrite(IN3B, HIGH); digitalWrite(IN4B, LOW);
        analogWrite(ENAB, 255);   analogWrite(ENBB, 255);
        // Serial.println("Forward");
      
    }

    else if (command == 'B') {
      digitalWrite(IN1A, LOW); digitalWrite(IN2A, HIGH);
      digitalWrite(IN3A, LOW); digitalWrite(IN4A, HIGH);
      analogWrite(ENAA, 255);  analogWrite(ENBA, 255);
      Serial.println("Backward");

      digitalWrite(IN1B, LOW); digitalWrite(IN2B, HIGH);
      digitalWrite(IN3B, LOW); digitalWrite(IN4B, HIGH);
      analogWrite(ENAB, 255);  analogWrite(ENBB, 255);
      // Serial.println("Backward");
    }

    else if (command == 'R') {
      digitalWrite(IN1A, HIGH); digitalWrite(IN2A, LOW);
      digitalWrite(IN3A, LOW);  digitalWrite(IN4A, HIGH);
      analogWrite(ENAA, 255);   analogWrite(ENBA, 255);
      Serial.println("Right");

      digitalWrite(IN1B, HIGH); digitalWrite(IN2B, LOW);
      digitalWrite(IN3B, LOW);  digitalWrite(IN4B, HIGH);
      analogWrite(ENAB, 255);   analogWrite(ENBB, 255);
      // Serial.println("Backward");
    }

    else if (command == 'L') {
      digitalWrite(IN1A, LOW);  digitalWrite(IN2A, HIGH);
      digitalWrite(IN3A, HIGH); digitalWrite(IN4A, LOW);
      analogWrite(ENAA, 255);   analogWrite(ENBA, 255);
      Serial.println("Left");

      digitalWrite(IN1B, LOW);  digitalWrite(IN2B, HIGH);
      digitalWrite(IN3B, HIGH); digitalWrite(IN4B, LOW);
      analogWrite(ENAB, 255);   analogWrite(ENBB, 255);
      // Serial.println("Backward");
    }

    else if (command == 'S') {
      digitalWrite(IN1A, LOW);  digitalWrite(IN2A, LOW);
      digitalWrite(IN3A, LOW); digitalWrite(IN4A, LOW);
      analogWrite(ENAA, 0);   analogWrite(ENBA, 0);
      Serial.println("Stop");

      digitalWrite(IN1B, LOW);  digitalWrite(IN2B, LOW);
      digitalWrite(IN3B, LOW); digitalWrite(IN4B, LOW);
      analogWrite(ENAB, 0);   analogWrite(ENBB, 0);
      // Serial.println("Backward");
    }

  }
}
