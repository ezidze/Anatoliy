
const int pin_button = 6;

const int pin_rele = 7;

const int pin_datchik_sveta = 10;

//функция ручного режима управления лампой
void hands_mode( boolean light ){
  if ( light ){
    digitalWrite( pin_rele, LOW ); // не подаем напряжение на  реле
  }
  else{
    digitalWrite( pin_rele, HIGH ); // подаем напряжение на реле 
  }
  

}

//функция автоматической работы лампы
void auto_mode(){
  int light = 0;
  light = analogRead(pin_datchik_sveta);
}


void setup() {
  // put your setup code here, to run once:
pinMode(pin_button, INPUT);
pinMode(pin_rele, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
