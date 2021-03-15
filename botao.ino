int pinoBotao = 9;
int ledPin = 10;

void setup()
{
  pinMode(pinoBotao, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int botaoEstado = digitalRead(pinoBotao);
  if(botaoEstado == HIGH){
  	digitalWrite(ledPin, HIGH);
  }
  else{  
  	digitalWrite(ledPin, LOW);
  }
  
}