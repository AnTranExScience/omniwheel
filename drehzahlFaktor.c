#include<stdio.h>
#include<stdlib.h>

float* drehzahlFaktor(float ax, float ay, float dis)
{

	float *resFaktoren=malloc(3*sizeof(float));
	resFaktoren[0]=ax*(-0.33) + ay*0.56 + dis*0.33;
	resFaktoren[1]=ax*(-0.33) + ay*(-0.56) + dis*0.33;
	resFaktoren[2]=ax*(0.67) + ay*0.0 + dis*0.33;

	return resFaktoren;
}
					

float * vektorenEinlesen(){
	float ax, ay, dis;
	float *resVektor=malloc(3*sizeof(float));

	printf("Gib bitte ax ein:\n");
    	scanf("%f", &ax);
	resVektor[0]=ax;
	printf("Gib bitte ay ein:\n");
    	scanf("%f", &ay);
	resVektor[1]=ay;
	printf("Gib bitte dis ein:\n");
    	scanf("%f", &dis);
	resVektor[2]=dis;

	printf("ax ist: %f\n", ax);  
	printf("ay ist: %f\n", ay);  
	printf("dis ist: %f\n", dis);
	return resVektor;  
}


int main(){

	
	float * paraVektor =vektorenEinlesen();
	float * ergebnis = drehzahlFaktor(paraVektor[0], paraVektor[1], paraVektor[2]);
	printf ("mein Ergebnis faktor1: %f, faktor2: %f, faktor3: %f\n", ergebnis[0], ergebnis[1], ergebnis[2]); 
}
