  #include <math.h>
  
  int redPin{3};
  int yellowPin{4};
  int greenPin{5};
  int trigPin = 11;
  int echoPin = 12;
  double pingTravelTime{};
  int delayTime{10};
  double distance{};

void setup() {
  
 Serial.begin(9600);
 //trigPin sends out pulses hence OUTPUT
  pinMode(trigPin,OUTPUT); 
  //echoPin reads the pulses hence INPUT
  pinMode(echoPin,INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  //this replicates how the sensor emits the pulses.
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  //the trigger time,
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(delayTime);

  //when the trigPin, goes LOW, is when the pulses are sent.
  digitalWrite(trigPin, LOW);



  //gives us the total time in microseconds the echoPin stayed HIGH, so it keeps reading until echoPin goes LOW
  pingTravelTime = pulseIn(echoPin,HIGH);
  distance = 343 * pow(10,-6) * pingTravelTime / 2 * 100;
  Serial.println(distance);

  if (distance < 13){
    digitalWrite(redPin,HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  }
  else if (distance < 35){
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
  }
  else{
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);

  }
  //delay so that the echo can receive the signal and reset it, otherwise may give 0 as readings because Trig pin may rapidly fire pulses
  delay(25);
}
