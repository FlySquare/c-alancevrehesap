#include <stdio.h>
#define PI 3.141593
int main()
{
	float daire, kare, d1, d2, alan, cevre, aland, cevred, yariCap; //de�i�kenleri belirliyoruz

	printf("Dairenin yar��ap�n� giriniz : ");//dairenin yar��ap�n� istiyoruz
	scanf("%f", &daire);  //dairenin yar��ap�n� de�i�kene al�yoruz
	printf("Karenin kenar uzunlu�unu giriniz : ");//karenin uzunlu�unu istiyoruz
	scanf("%f", &kare);//karenin uzunlu�unu de�i�kene al�yoruz
	printf("Dikd�rtgenin k�sa kenar�n� giriniz : ");//dikd�rtgenin k�sa kenar�n� istiyoruz
	scanf("%f", &d1);  //dikd�rtgenin k�sa kenar�n� de�i�kene al�yoruz
	printf("Dikd�rtgenin uzun kenar�n� giriniz : ");//dikd�rtgenin uzun kenar�n� istiyoruz
	scanf("%f", &d2); //dikd�rtgenin uzun kenar�n� de�i�kene al�yoruz

	yariCap = daire;//yar��ap de�i�keni olu�turuyoruz kolayl�k i�in
	alan = PI * (yariCap * yariCap);//daire i�in alan� hesaplaya pi kullanarak alan� hesaplat�yoruz
	cevre = PI * yariCap * 2;//dairenin �evresini hesaplat�yoruz
	aland = d1 * d2;//dikd�rtgen alan� i�in kenarlar� �arp�yoruz
	cevred = (d1 + d2) * 2;//dikd�rtgen �evresi i�in kenarlar� toplay�p 2 ile �arp�yoruz
	printf("\n-----------------------------------------------\n");
	printf("Dairenin Alan�= %.1f\nDairenin Cevresi= %.1f\n", alan, cevre); // Noktadan sonra 1 basamak g�z�kmesi i�in .1 ekliyoruz ve alan,cevre de�i�kenlerini yazd�r�yoruz
	printf("-----------------------------------------------\n");
	printf("Karenin Alan�= : %.1f\nKarenin �evresi = %.1f\n", kare*kare, kare * 4);// Noktadan sonra 1 basamak g�z�kmesi i�in .1 ekliyoruz ve alan,cevre de�i�kenlerini yazd�r�yoruz

	printf("-----------------------------------------------\n");
	printf("Dikd�rtgen Alan= %.1f\nDikd�rtgen Cevre= %.1f\n", aland, cevred);//Noktadan sonra 2 basamak g�z�kmesi i�in .1 ekliyoruz ve alan,cevre de�i�kenlerini yazd�r�yoruz
	printf("-----------------------------------------------\n");
	printf("Ortalama Alan= %.1f\nOrtalama Cevre= %.1f", (alan + kare * kare + aland) / 3, (cevre + kare * 4 + cevred) / 3);

	return (0);