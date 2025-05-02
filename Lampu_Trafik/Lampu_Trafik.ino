//Pada aturcara ini, untuk membolehkan LED dikawal, pin yang disambung ke LED perlu dikonfigurasi segabai pin keluaran 

//Sambungan:

//Tiang Lampu trafik 1
//Pin 2 disambung ke Tiang 1 - lampu merah
//Pin 3 disambung ke Tiang 1 - lampu kuning
//Pin 4 disambung ke Tiang 1 - lampu hijau

//Tiang Lampu trafik 2
//Pin 5 disambung ke Tiang 2 - lampu merah
//Pin 6 disambung ke Tiang 2 - lampu kuning
//Pin 7 disambung ke Tiang 2 - lampu hijau

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

  //Untuk permulaan, pastikan kesemua lampu dipadamkan
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

  //Tiang 1 - Lampu hijau menyala, lampu merah dan kuning dipadamkan
  digitalWrite(2,PADAM);
  digitalWrite(3,PADAM);
  digitalWrite(4,NYALA);
  
  tunggu(10000);    //tunggu 10 saat (10000 milisaat). Lampu Hijau tiang 1 akan menyala selama 10 saat

  //Tiang 1 - Lampu kuning menyala, lampu merah dan hijau dipadamkan
  digitalWrite(2,PADAM);
  digitalWrite(3,NYALA);
  digitalWrite(4,PADAM);
  tunggu(3000);     //tunggu 3 saat. Lampu kuning tiang 1 akan menyala selama 3 saat

  //Tiang 1 - Lampu merah menyala, lampu kuning dan hijau dipadamkan
  digitalWrite(2,NYALA);
  digitalWrite(3,PADAM);
  digitalWrite(4,PADAM);
  tunggu(3000);   //tunggu 3 saat sebelum benarkan lampu hijau pada tiang 2 dinyalakan

  //Tiang 2 - Lampu hijau menyala, lampu merah dan kuning dipadamkan
  digitalWrite(5,PADAM);
  digitalWrite(6,PADAM);
  digitalWrite(7,NYALA);
  tunggu(10000);    //tunggu 10 saat. Lampu hijau tiang 2 akan menyala selama 10 saat

  //Tiang 2 - Lampu kuning menyala
  digitalWrite(5,PADAM);
  digitalWrite(6,NYALA);
  digitalWrite(7,PADAM);
  tunggu(3000);     //tunggu 3 saat. Lampu kuning tiang 2 akan menyala selama 3 saat

  //Tiang 2 - Lampu merah menyala, lampu kuning dan hijau dipadamkan
  digitalWrite(5,NYALA);
  digitalWrite(6,PADAM);
  digitalWrite(7,PADAM);
  tunggu(3000);   //tunggu 3 saat sebelum benarkan lampu hijau pada tiang 1 dinyalakan
  
  //ulang semula arahan dari mula fungsi loop ini
}
