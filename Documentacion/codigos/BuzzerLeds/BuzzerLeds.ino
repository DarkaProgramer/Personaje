#include <Servo.h>
#include <Stepper.h>

int TRIGGER_PIN = 2;
int ECHO_PIN = 3;
int distancia;
int tiempo;

int stepsPerRevolution = 1048;
int motSpeed = 12;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
int dt = 1000;

void setup() {
  Serial.begin(115200);
  myStepper.setSpeed(motSpeed);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // Enviar un pulso ultrasónico
  digitalWrite(TRIGGER_PIN, HIGH);
  delay(500);
  digitalWrite(TRIGGER_PIN, LOW);
  // Medir el tiempo que tarda en volver el pulso
  tiempo = pulseIn(ECHO_PIN, HIGH);
  distancia = tiempo / 58.2;

  if (distancia <= 35) {
    // Girar 3 veces en una dirección
    for (int i = 0; i < 3; i++) {
      xd();
    }

    // Girar 3 veces en la dirección opuesta
    for (int i = 0; i < 3; i++) {
      xd2();
    }
  } else {
    // Detener el motor cuando no se detecta nada
    myStepper.step(0);
  }
}

void xd() {
  myStepper.step(stepsPerRevolution);
}

void xd2() {
  myStepper.step(-stepsPerRevolution);
}