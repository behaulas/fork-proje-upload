#include<stdio.h> /*KÜTÜPHANEMİZİ TANITTIK */
 
int main() /* C DİLİNİN OLMAZSA OLMAZI MAİNDİR ANA FONKSİYONU YAZMALIYIZ */
{
  int sayi1, sayi2, toplam;   /*DEĞERLERİMİZİ TANITTIK*/
  printf("iki tane sayi girin : "); /* EKRANA YAZDIRDIĞIMIZ YAZIYI TANITTIK*/
  scanf("%d%d", &sayi1, &sayi2); /*İŞLEM YAPILAN SAYILARI TANITTIK*/
  toplam = sayi1+sayi2; /*GİRİLEN DEĞERLERİN TOPLAMI VERECEĞİNİ TANITTIK*/
  printf("\n %d ve %d sayilarinin toplami : %d", sayi1, sayi2, toplam); /*DEĞERLER GİRİLDİKTEN SONRA SAYILARIN TOPLAMINI EKRANA NASIL YANSITACAĞINI YAZDIK*/
  
  return 0;
}
