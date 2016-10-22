// определим необходимые переменные
const int pin_button = 6;
const int pin_rele = 7;
const int pin_datchik_sveta = 10;
const int porog = 200;
char user_choice = "on";

//функция ручного режима управления лампой
void hands_mode( char light ){
  if ( light == "on" ){
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
  if ( light < porog ){
    digitalWrite(pin_rele, LOW);
  }
  else{
    digitalWrite(pin_rele, HIGH);
  }
}


void setup() {
  // put your setup code here, to run once:
pinMode(pin_button, INPUT);
pinMode(pin_rele, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if( user_choice == "on" || user_choice == "off" ){
    hands_mode(user_choice);
  }

  if( user_choice == "auto"){
    auto_mode();
  }

}
