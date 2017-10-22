void setup() 
{
  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (A6, INPUT);
  pinMode (A7, INPUT);
  pinMode (A2, INPUT);
    pinMode (13, OUTPUT);

  Serial.begin(9600);

}
int fb,lr,sw;
void loop() 
{
  digitalWrite(13, HIGH);

  fb=analogRead(A0);
  lr=analogRead(A1);
  sw=analogRead(A2);
  Serial.print(fb);
  Serial.print("     ");
  Serial.print(lr);
  Serial.print("     ");
  Serial.print(sw);
  Serial.print("     ");
  Serial.println("  ");
  delay(100);
}
