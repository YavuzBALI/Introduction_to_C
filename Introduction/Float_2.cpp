#include<stdlib.h>
#include<stdio.h>
int main()
{
	float km,pound,kg,mil,cl,fah;
	printf("Please enter the distance in km:");  scanf("%f",&km);
		printf("Please enter the weight in kg:");  scanf("%f",&kg);
			printf("Please enter the temperature in celcius:");  scanf("%f",&cl);
			mil=km*0.6214;
			pound=kg*2.205;
			fah=(cl*9/5)+32;
			
	printf("%.1f km is equal %.1f miles\n",km,mil);
	printf("%.1f kg is equal %.1f pounds\n",kg,pound);
	printf("%.f Celcius is equal %.1f Fahreanit\n ",cl,fah);
}

