#include <stdio.h>

int main (){
	int angka;
	 
	 printf("masukkan bilangan bulat positif: ");
	 scanf ("%d", &angka);
	 
	 if (angka <= 0) {
	 	printf ("masukkan bilangan positif.\n");
	 } 
	 else {
	 	if (angka % 2 == 0){
	 		printf ("genap\n");
		 }
		 else {
		 	printf ("ganjil\n");
		 }
	 }
	 
	 return 0;
 }
