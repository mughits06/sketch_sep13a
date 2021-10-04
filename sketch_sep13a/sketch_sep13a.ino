void setup() {
  /*Semua program di void setup hanya akan dijalankan sekali saja */
  Serial.begin(3600);
  Serial.println("Welcome Internet Boarding School");

}

void loop() {
  /*Semua program yang ada di void loop() akan di jalankan berkali kali secara berkala */
  Serial.println("Welcome to IDN");
  delay(1000);

}
