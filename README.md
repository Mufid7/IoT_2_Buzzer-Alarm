# Proyek Buzzer Piezo Arduino

## Deskripsi
Proyek ini menggunakan Arduino dan buzzer piezo untuk menghasilkan nada dengan frekuensi tertentu. Buzzer akan berbunyi selama 1 detik, kemudian berhenti selama 1 detik, dan mengulangi proses ini.

## Komponen yang Digunakan
- Arduino Uno
- Buzzer Piezo

## Skematik
![Schematic Diagram](link-ke-gambar-schematic)  <!-- Jika ada gambar skematik dari Tinkercad -->

## Kode
```cpp
// Definisi PIN
const int buzzerPin = 9;

// Atur frekuensi
const int toneFre = 100;             // Frekuensi 100 Hz
const int toneDuration = 1000;       // Durasi 1 detik

void setup()
{
  // Inisiasi PIN
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // Hidupkan piezo selama 1 detik
  tone(buzzerPin, toneFre, toneDuration);
  delay(toneDuration);
  
  // Matikan piezo selama 1 detik
  noTone(buzzerPin);
  delay(toneDuration);
}
