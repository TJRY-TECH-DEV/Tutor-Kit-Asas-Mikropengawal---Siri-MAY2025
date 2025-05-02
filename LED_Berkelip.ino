//Pada aturcara ini, untuk membolehkan LED dikawal, pin yang disambung ke LED perlu dikonfigurasi segabai pin keluaran 

//Sambungan:
//Pin 2 disambung ke LED1
//Pin 3 disambung ke LED2
//Pin 4 disambung ke LED3
//Pin 5 disambung ke LED4
//Pin 6 disambung ke LED5
//Pin 7 disambung ke LED6

//definasi ini dibuat hanya untuk memudahkan memahami kod aturcara
#define tunggu(x) delay(x)    //arahan "delay" diganti namanya kepada "tunggu" untuk memudahkan memahami apa yang berlaku
#define NYALA HIGH  //LED akan menyala apabila LOGIK "1" @ "HIGH" disetkan pada pin Mikropengawal. Kata nama "NYALA" akan mewakili "HIGH"
#define PADAM LOW   //LED akan padam apabila LOGIK "0" @ "LOW" disetkan pada pin Mikropengawal. Kata nama "PADAM" akan mewakili "LOW"

//Kebiasannya pada fungsi setup, arahan-arahan konfigurasi akan dibuat disini
//fungsi setup ini akan dijalakan terlebih dahulu sebelum fungsi-fungsi yang lain
//fungsi ini akan dijalakan setiap kali papan litar dihidupkan atau di reset
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);  //pin 2 dijadikan pin keluaran (output)
  pinMode(3,OUTPUT);  //pin 3 dijadikan pin keluaran (output)
  pinMode(4,OUTPUT);  //pin 4 dijadikan pin keluaran (output)
  pinMode(5,OUTPUT);  //pin 5 dijadikan pin keluaran (output)
  pinMode(6,OUTPUT);  //pin 6 dijadikan pin keluaran (output)
  pinMode(7,OUTPUT);  //pin 7 dijadikan pin keluaran (output)

  //Sebelum mulakan kerdipan LED, kesemua LED perlu dipadam terlebih dahulu 
  digitalWrite(2,PADAM);
  digitalWrite(3,PADAM);
  digitalWrite(4,PADAM);
  digitalWrite(5,PADAM);
  digitalWrite(6,PADAM);
  digitalWrite(7,PADAM);
}

//Selepas fungsi setup selesai dilaksanakan, arahan-arahan dibawah akan dilaksanakan secara berulang-ulang
void loop() {
  // put your main code here, to run repeatedly:

  //Setkan LED1, LED2 dan LED3 menyala. Manakala LED4, LED5 dan LED6 padam
  digitalWrite(2,NYALA);
  digitalWrite(3,NYALA);
  digitalWrite(4,NYALA);
  digitalWrite(5,PADAM);
  digitalWrite(6,PADAM);
  digitalWrite(7,PADAM);

  tunggu(500);    //tunggu 0.5 saat sebelum tukar nyalaan

  //Setkan LED1, LED2 dan LED3 padam. Manakala LED4, LED5 dan LED6 nyala
  digitalWrite(2,PADAM);
  digitalWrite(3,PADAM);
  digitalWrite(4,PADAM);
  digitalWrite(5,NYALA);
  digitalWrite(6,NYALA);
  digitalWrite(7,NYALA);

  tunggu(500);    //tunggu 0.5 saat sebelum ulang semula arahan-arahan bermula dari awalan fungi loop ini
}
