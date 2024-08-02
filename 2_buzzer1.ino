// C++ code

//Definisi PIN
const int buzzerPin = 9;

//Atur frekuensi
const int toneFre = 100; 			//1 kHz
const int toneDuration = 1000;		//1 sec

void setup()
{
  //Inisiasi PIN
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // hidupkan piezo selama 1 detik
  tone(buzzerPin, toneFre, toneDuration);
  delay(toneDuration);
  
  //matikan pieze selama 1 detik
  noTone(buzzerPin);
  delay(toneDuration);
}