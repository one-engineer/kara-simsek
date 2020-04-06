const int led[] ={2,3,4,5,6,7,8,9,10};

void setup() {
  // put your setup code here, to run once:
for(int i = 0; i<9; i++){
  pinMode(led[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i<9 ; i++){
  digitalWrite(led[i],HIGH);
  delay(50);
  digitalWrite(led[i],LOW);
}

for(int i = 8; i>=0; i--){
  digitalWrite(led[i],HIGH);
  delay(50);
  digitalWrite(led[i],LOW);
}
}
