int i=2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.

  for ( int i = 2 ; i <= 4 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
  int temp=2000;
  int cont=0;


  for (int i=2 ; i <= 4 ; i++)
  {
      cont++;
       digitalWrite( i , HIGH) ;
       delay (200) ;
       digitalWrite( i , LOW);
       delay (temp-(cont*100)) ;
  }
}
