//Untuk membolehkan kawalan servo motor, aturcara ini perlu menyertakan pustaka (library) Servo
//Aturcara ini akan memutarkan servo motor dari sudut 0 darjah ke 180 darjah dengan sudut petambahan 10 darjah
//Kemudian, dari sudut 180 ke 0 semula dengan nilai pengurangan 10 darjah

#include <Servo.h>    //sertakan pustaka Servo 

Servo servomotor;   //cipta satu objek dari pustaka Servo bernama "servomotor"

int sudut = 0;  //deklarasi pemboleh ubah yang dinamakan sebagai "sudut" - untuk menyimpan nilai sudut

void setup() {
  // put your setup code here, to run once:
  servomotor.attach(9);   //Pin 9 digunakan untuk mengawal servo motor
  servomotor.write(0);  //setkan posisi servo motor pada 0 darjah
  delay(3000);          //tunggu 3 saat untuk memberi masa servo motor membuat putaran ke kedudukan 0 darjah
}

void loop() {
  // put your main code here, to run repeatedly:

  //sudut = 0 : Nilai awalan sudut dijadikan = 0
  //sudut <= 180 : kondisi ulangan, jika nilai sudut tidak melebihi 180 darjah, arahan-arahan didalam gelung diulangi
  //sudut += 10 : Setelah selesai arahan-arahan didalam gelung, nilai sudut meningkat 10 darjah 
  for(sudut = 0 ; sudut <= 180 ; sudut += 10 )  
  {
    servomotor.write(sudut);    //servo motor diputarkan ke nilai sudut terkini
    delay(500);                 //tunggu 0.5 saat sebelum tambah nilai sudut
  }//nilai sudut meningakat 10 darjah dan nilai sudut disemak semula sama ada masih kecil atau sama 180
  //jika nilai sudut sudah melebihi 180 darjah, arahan dalam gelung tidak lagi diulang, arahan seterusnya dilaksanakan

  //sudut = 180 : Nilai awalan sudut dijadikan = 180
  //sudut >= 0 : kondisi ulangan, jika nilai sudut tidak kurang dari 0, arahan-arahan didalam gelung diulangi
  //sudut -= 10 : Setelah selesai arahan-arahan didalam gelung, nilai sudut berkurang 10 darjah 
  for(sudut = 180 ; sudut >= 0 ; sudut -= 10 )  
  {
    servomotor.write(sudut);    //servo motor diputarkan ke nilai sudut terkini
    delay(500);                 //tunggu 0.5 saat sebelum tambah nilai sudut
  }//nilai sudut berkurangan 10 darjah dan nilai sudut disemak semula sama ada masih besar atau sama 0
  //jika nilai sudut sudah menjadi kurang dari 0 darjah, arahan dalam gelung tidak lagi diulang, arahan seterusnya dilaksanakan

}
