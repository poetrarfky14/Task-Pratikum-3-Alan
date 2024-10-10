#include <stdio.h>
#include <math.h>  

int main() {
    float alas, tinggi, luas, keliling, sisiMiring;

   
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

  
    luas = (alas * tinggi) / 2;


    sisiMiring = sqrt(pow(alas / 2, 2) + pow(tinggi, 2));

    keliling = alas + (2 * sisiMiring);

    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);
    

    return 0;
}

