#include <SoftwareSerial.h>
String data;
SoftwareSerial mySerial(0, 1);  // TX, RX

#include <Servo.h>
Servo myservo;


#include <Servo.h>
Servo myservo1;


const int leftmotorA = 4;
const int leftmotorB = 3;
const int rightmotorA = 9;
const int rightmotorB = 10;

const int led1 = 12;
const int led2 = 13;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(leftmotorA, OUTPUT);
  pinMode(leftmotorB, OUTPUT);
  pinMode(rightmotorA, OUTPUT);
  pinMode(rightmotorB, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  myservo.attach(7);
  myservo1.attach(8);

  myservo.write(90);
  delay(15);
  myservo1.write(90);
  delay(15);
}
void loop() {
  Bluetooth();
}

void Forward() {
  digitalWrite(leftmotorA, HIGH);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, HIGH);
  digitalWrite(rightmotorB, 0);
}

void Backward() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, HIGH);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, HIGH);
}


void TurnRight() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, HIGH);
  digitalWrite(rightmotorA, HIGH);
  digitalWrite(rightmotorB, 0);
}

void TurnLeft() {
  digitalWrite(leftmotorA, HIGH);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, HIGH);
}

void Stop() {
  digitalWrite(leftmotorA, 0);
  digitalWrite(leftmotorB, 0);
  digitalWrite(rightmotorA, 0);
  digitalWrite(rightmotorB, 0);
}

void Bluetooth() {
  while (mySerial.available()) {
    delay(10);
    char c = mySerial.read();
    if (c == "#") {
      break;
    }
    data += c;
  }

  if (data.length() > 0) {
    Serial.println(data);

    if (data == "A") {
      digitalWrite(led2, HIGH);
      delay(100);
    } else if (data == "B") {
      digitalWrite(led1, HIGH);
      delay(100);
    } else if (data == "a") {
      digitalWrite(led2, LOW);
      delay(100);
    } else if (data == "b") {
      digitalWrite(led1, LOW);
      delay(100);
    } else if (data == "laser one on") {
      digitalWrite(led1, HIGH);
      delay(100);
    } else if (data == "laser two on") {
      digitalWrite(led2, HIGH);
      delay(100);
    } else if (data == "laser two off") {
      digitalWrite(led2, LOW);
      delay(100);
    } else if (data == "laser one off") {
      digitalWrite(led1, LOW);
      delay(100);
    } else if (data == "laser 1 on") {
      digitalWrite(led1, HIGH);
      delay(100);
    } else if (data == "laser 2 on") {
      digitalWrite(led2, HIGH);
      delay(100);
    } else if (data == "laser two of") {
      digitalWrite(led2, LOW);
      delay(100);
    } else if (data == "laser 1 of") {
      digitalWrite(led1, LOW);
      delay(100);
    } else if (data == "laser 1 off") {
      digitalWrite(led1, LOW);
      delay(100);
    } else if (data == "laser 2 of") {
      digitalWrite(led2, LOW);
      delay(100);
    } else if (data == "laser 2 off") {
      digitalWrite(led2, LOW);
      delay(100);
    } else if (data == "laser to of") {
      digitalWrite(led2, LOW);
      delay(100);
    } else if (data == "laser to on") {
      digitalWrite(led2, HIGH);
      delay(100);
    } else if (data == "laser one of") {
      digitalWrite(led1, LOW);
      delay(100);
    } else if (data == "forward") {
      Forward();
      delay(200);
      Stop();
    } else if (data == "backward") {
      Backward();
      delay(200);
      Stop();
    } else if (data == "turn left") {
      TurnLeft();
      delay(200);
      Stop();
    } else if (data == "turn right") {
      TurnRight();
      delay(200);
      Stop();
    } else if (data == "jade") {
      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
    } else if (data == "I") {
      Forward();
    } else if (data == "J") {
      Backward();
    } else if (data == "K") {
      TurnLeft();
    } else if (data == "L") {
      TurnRight();
    } else if (data == "q") {
      myservo1.write(0);
      delay(15);
    } else if (data == "p") {
      myservo1.write(20);
      delay(15);
    } else if (data == "o") {
      myservo1.write(40);
      delay(15);
    } else if (data == "n") {
      myservo1.write(60);
      delay(15);
    } else if (data == "m") {
      myservo1.write(80);
      delay(15);
    } else if (data == "l") {
      myservo1.write(100);
      delay(15);
    } else if (data == "k") {
      myservo1.write(130);
      delay(15);
    } else if (data == "j") {
      myservo1.write(150);
      delay(15);
    } else if (data == "i") {
      myservo1.write(180);
      delay(15);
    } else if (data == "0") {
      myservo.write(0);
      delay(15);
    } else if (data == "1") {
      myservo.write(20);
      delay(15);
    } else if (data == "2") {
      myservo.write(40);
      delay(15);
    } else if (data == "3") {
      myservo.write(60);
      delay(15);
    } else if (data == "4") {
      myservo.write(80);
      delay(15);
    } else if (data == "5") {
      myservo.write(100);
      delay(15);
    } else if (data == "6") {
      myservo.write(130);
      delay(15);
    } else if (data == "7") {
      myservo.write(150);
      delay(15);
    } else if (data == "8") {
      myservo.write(170);
      delay(15);
    } else if (data == "9") {
      myservo.write(180);
      delay(15);
    } else if (data == "hands up") {
      myservo1.write(180);
      delay(15);
      myservo.write(0);
      delay(15);
    } else if (data == "hands down") {
      myservo1.write(0);
      delay(15);
      myservo.write(180);
      delay(15);
    } else if (data == "S") {
      Stop();
    }
  }
  data = "";
}