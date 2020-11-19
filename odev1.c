#include <stdio.h>
#define PI 3.141593
int main()
{
	float daire, kare, d1, d2, alan, cevre, aland, cevred, yariCap; //deðiþkenleri belirliyoruz

	printf("Dairenin yarýçapýný giriniz : ");//dairenin yarýçapýný istiyoruz
	scanf("%f", &daire);  //dairenin yarýçapýný deðiþkene alýyoruz
	printf("Karenin kenar uzunluðunu giriniz : ");//karenin uzunluðunu istiyoruz
	scanf("%f", &kare);//karenin uzunluðunu deðiþkene alýyoruz
	printf("Dikdörtgenin kýsa kenarýný giriniz : ");//dikdörtgenin kýsa kenarýný istiyoruz
	scanf("%f", &d1);  //dikdörtgenin kýsa kenarýný deðiþkene alýyoruz
	printf("Dikdörtgenin uzun kenarýný giriniz : ");//dikdörtgenin uzun kenarýný istiyoruz
	scanf("%f", &d2); //dikdörtgenin uzun kenarýný deðiþkene alýyoruz

	yariCap = daire;//yarýçap deðiþkeni oluþturuyoruz kolaylýk için
	alan = PI * (yariCap * yariCap);//daire için alaný hesaplaya pi kullanarak alaný hesaplatýyoruz
	cevre = PI * yariCap * 2;//dairenin çevresini hesaplatýyoruz
	aland = d1 * d2;//dikdörtgen alaný için kenarlarý çarpýyoruz
	cevred = (d1 + d2) * 2;//dikdörtgen çevresi için kenarlarý toplayýp 2 ile çarpýyoruz
	printf("\n-----------------------------------------------\n");
	printf("Dairenin Alaný= %.1f\nDairenin Cevresi= %.1f\n", alan, cevre); // Noktadan sonra 1 basamak gözükmesi için .1 ekliyoruz ve alan,cevre deðiþkenlerini yazdýrýyoruz
	printf("-----------------------------------------------\n");
	printf("Karenin Alaný= : %.1f\nKarenin Çevresi = %.1f\n", kare*kare, kare * 4);// Noktadan sonra 1 basamak gözükmesi için .1 ekliyoruz ve alan,cevre deðiþkenlerini yazdýrýyoruz

	printf("-----------------------------------------------\n");
	printf("Dikdörtgen Alan= %.1f\nDikdörtgen Cevre= %.1f\n", aland, cevred);//Noktadan sonra 2 basamak gözükmesi için .1 ekliyoruz ve alan,cevre deðiþkenlerini yazdýrýyoruz
	printf("-----------------------------------------------\n");
	printf("Ortalama Alan= %.1f\nOrtalama Cevre= %.1f", (alan + kare * kare + aland) / 3, (cevre + kare * 4 + cevred) / 3);

	return (0);