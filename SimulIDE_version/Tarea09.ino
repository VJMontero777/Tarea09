#include <DHT.h>

#define DHTPIN   2
#define DHTTYPE  DHT11
#define BUZZER   4
#define LEDPIN   5

DHT dht(DHTPIN, DHTTYPE);
const float UMBRAL_C = 25.0;

float predict_fahrenheit(float celsius) {
  return (celsius * 9.0 / 5.0) + 32.0;
}

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(BUZZER, OUTPUT);
  pinMode(LEDPIN, OUTPUT);
  Serial.println("TinyML: Sistema de Alarma de Temperatura (SimulIDE)");
}

void loop() {
  float c = dht.readTemperature();
  if (isnan(c)) {
    Serial.println("Error leyendo DHT");
    delay(1000);
    return;
  }

  float f = predict_fahrenheit(c);
  bool alerta = (c > UMBRAL_C);

  digitalWrite(LEDPIN, alerta ? HIGH : LOW);

  if (alerta) {
    tone(BUZZER, 2000, 300);  // beep claro
  } else {
    noTone(BUZZER);
  }

  Serial.print("C: "); Serial.print(c, 2);
  Serial.print(" | F: "); Serial.print(f, 2);
  Serial.print(" | Estado: ");
  Serial.println(alerta ? "ALERTA 🔔" : "OK ✅");

  delay(1000);
}
