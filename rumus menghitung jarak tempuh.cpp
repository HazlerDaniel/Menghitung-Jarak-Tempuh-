#include<stdio.h>
#include<stdlib.h>
int main()
{
	float s,v,t;
	printf("Masukan kecepatan kendaraan anda [dalam km\jam]:");
	scanf("%f",&v);
	printf("Masukan lama waktu kendaraan anda[dalam jam]:");
	scanf("%f",&t);
	s=v*t;
	printf("jadi jarak tempuh kendaraan anda adalah : %f km",s);
}
