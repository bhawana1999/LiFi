static int TRESHOLD = 500;
static unsigned int standardDelay = 1350; //1350 is limit

void setup() {
  Serial.begin(9600); // 9600 bits per second
  pinMode(3,OUTPUT); //digital PWM 3 on output
  int sensorValue = 0;
}

void loop() {
  //read every 100ms
  //high A0 value is one, low A0 value is zero
  WriteChar('a');
  WriteChar('b');
  WriteChar('c');
  WriteChar('d');
  WriteChar('e');
  WriteChar('f');
  WriteChar('g');
  WriteChar('h');
  WriteChar('i');
  WriteChar('j');
  WriteChar('k');
  WriteChar('l');
  WriteChar('m');
  WriteChar('n');
  WriteChar('o');
  WriteChar('p');
  WriteChar('q');
  WriteChar('r');
  WriteChar('s');
  WriteChar('t');
  WriteChar('u');
  WriteChar('v');
  WriteChar('w');
  WriteChar('x');
  WriteChar('y');
  WriteChar('z');
}

void WriteChar(char str){
  switch (str - '0'){
    case 49:
      //code for a is 011 0001
      LightFlash(false, true, true, false, false, false, true);
      break;
    case 50:
      //code for b is 011 0010
      LightFlash(false, true, true, false, false, true, false);
      break;
    case 51:
      //code for c is 011 0011
      LightFlash(false, true, true, false, false, true, true);
      break;
    case 52:
      //code for d is 011 0100
      LightFlash(false, true, true, false, true, false, false);
      break;
    case 53:
      //code for e is 011 0101
      LightFlash(false, true, true, false, true, false, true);
      break;
    case 54:
      //code for f is 011 0110
      LightFlash(false, true, true, false, true, true, false);
      break;
    case 55:
      //code for g is 011 0111
      LightFlash(false, true, true, false, true, true, true);
      break;
    case 56:
      //code for h is 011 1000
      LightFlash(false, true, true, true, false, false, false);
      break;
    case 57:
      //code for i is 011 1001
      LightFlash(false, true, true, true, false, false, true);
      break;
    case 58:
      //code for j is 011 1010
      LightFlash(false, true, true, true, false, true, false);
      break;
    case 59:
      //code for k is 011 1011
      LightFlash(false, true, true, true, false, true, true);
      break;
    case 60:
      //code for l is 011 1100
      LightFlash(false, true, true, true, true, false, false);
      break;
    case 61:
      //code for m is 011 1101
      LightFlash(false, true, true, true, true, false, true);
      break;
    case 62:
      //code for n is 011 1110
      LightFlash(false, true, true, true, true, true, false);
      break;
    case 63:
      //code for o is 011 1111
      LightFlash(false, true, true, true, true, true, true);
      break;
    case 64:
      //code for p is 100 0000
      LightFlash(true, false, false, false, false, false, false);
      break;
    case 65:
      //code for q is 100 0001
      LightFlash(true, false, false, false, false, false, true);
      break;
    case 66:
      //code for r is 100 0010
      LightFlash(true, false, false, false, false, true, false);
      break;
    case 67:
      //code for s is 100 0011
      LightFlash(true, false, false, false, false, true, true);
      break;
    case 68:
      //code for t is 100 0100
      LightFlash(true, false, false, false, true, false, false);
      break;
    case 69:
      //code for u is 100 0101
      LightFlash(true, false, false, false, true, false, true);
      break;
    case 70:
      //code for v is 100 0110
      LightFlash(true, false, false, false, true, true, false);
      break;
    case 71:
      //code for w is 100 0111
      LightFlash(true, false, false, false, true, true, true);
      break;
    case 72:
      //code for x is 100 1000
      LightFlash(true, false, false, true, false, false, false);
      break;
    case 73:
      //code for y is 100 1001
      LightFlash(true, false, false, true, false, false, true);
      break;
    case 74:
      //code for z is 100 1010
      LightFlash(true, false, false, true, false, true, false);
      break;
    default:
      Serial.println(str - '0');
      Serial.println("CAME IN DEFAULT IN WRITECHAR");
      break;
  }
}

void LightFlash(boolean a, boolean b, boolean c, boolean d, boolean e, boolean f, boolean g){


  digitalWrite(3,LOW);
  if (a == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay/2);
  boolean sensorValue1 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay/2);

  digitalWrite(3,LOW);
  if (b == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay/2);
  boolean sensorValue2 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay/2);

  digitalWrite(3,LOW);
  if (c == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay/2);
  boolean sensorValue3 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay/2);

  digitalWrite(3,LOW);
  if (d == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay/2);
  boolean sensorValue4 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay/2);

  digitalWrite(3,LOW);
  if (e == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay/2);
  boolean sensorValue5 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay/2);

  digitalWrite(3,LOW);
  if (f == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay/2);
  boolean sensorValue6 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay/2);

  digitalWrite(3,LOW);
  if (g == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay/2);
  boolean sensorValue7 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay/2);
  delayMicroseconds(3*standardDelay); //1 second passed

  long result = 0;
  result = 1000000*sensorValue1 + 100000*sensorValue2 + 10000*sensorValue3
  + 1000*sensorValue4 + 100*sensorValue5 + 10*sensorValue6 + 1*sensorValue7;
  //Serial.println(result);
  PrintChar(result);
}

void PrintChar(long binary){
  switch (binary){
    case 110001:
      //code for a is 011 0001
      Serial.println("a");
      break;
    case 110010:
      //code for b is 011 0010
      Serial.println("b");
      break;
    case 110011:
      //code for c is 011 0011
      Serial.println("c");
      break;
    case 110100:
      //code for d is 011 0100
      Serial.println("d");
      break;
    case 110101:
      //code for e is 011 0101
      Serial.println("e");
      break;
    case 110110:
      //code for f is 011 0110
      Serial.println("f");
      break;
    case 110111:
      //code for g is 011 0111
      Serial.println("g");
      break;
    case 111000:
      //code for h is 011 1000
      Serial.println("h");
      break;
    case 111001:
      //code for i is 011 1001
      Serial.println("i");
      break;
    case 111010:
      //code for j is 011 1010
      Serial.println("j");
      break;
    case 111011:
      //code for k is 011 1011
      Serial.println("k");
      break;
    case 111100:
      //code for l is 011 1100
      Serial.println("l");
      break;
    case 111101:
      //code for m is 011 1101
      Serial.println("m");
      break;
    case 111110:
      //code for n is 011 1110
      Serial.println("n");
      break;
    case 111111:
      //code for o is 011 1111
      Serial.println("o");
      break;
    case 1000000:
      //code for p is 100 0000
      Serial.println("p");
      break;
    case 1000001:
      //code for q is 100 0001
      Serial.println("q");
      break;
    case 1000010:
      //code for r is 100 0010
      Serial.println("r");
      break;
    case 1000011:
      //code for s is 100 0011
      Serial.println("s");
      break;
    case 1000100:
      //code for t is 100 0100
      Serial.println("t");
      break;
    case 1000101:
      //code for u is 100 0101
      Serial.println("u");
      break;
    case 1000110:
      //code for v is 100 0110
      Serial.println("v");
      break;
    case 1000111:
      //code for w is 100 0111
      Serial.println("w");
      break;
    case 1001000:
      //code for x is 100 1000
      Serial.println("x");
      break;
    case 1001001:
      //code for y is 100 1001
      Serial.println("y");
      break;
    case 1001010:
      //code for z is 100 1010
      Serial.println("z");
      break;
    case 11000:
      Serial.println("Debug 1: character not recognised");
      break;
    case 1011001:
      Serial.println("Debug 2: character not recognised");
      break;
    case 100001:
      Serial.println("Debug 3: character not recognised");
      break;
    case 1011000:
      Serial.println("Debug 4: character not recognised");
      break;
    default:
      Serial.println(binary);
      Serial.println("CAME IN DEFAULT ON PRINTCHAR");
      break;
  }
}
