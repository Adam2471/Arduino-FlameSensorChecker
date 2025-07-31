// Definisi pin untuk sensor api
const int flameSensorPin = 2;

void setup() {
  // Mengatur pin sensor sebagai input
  pinMode(flameSensorPin, INPUT);

  // Inisialisasi Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Membaca nilai dari flame sensor
  int sensorState = digitalRead(flameSensorPin);

  // Tampilkan status sensor di Serial Monitor
  Serial.print("Flame Sensor: ");
  if (sensorState == HIGH) {
    Serial.println("Api terdeteksi");
  } else {
    Serial.println("Tidak ada api");
  }

  delay(1000); // Jeda 1 detik sebelum pengecekan ulang
}
