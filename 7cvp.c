#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


typedef struct {
    int velikost;
    int* pole;
} shluk;


void inicializuj(shluk* a) {
a->velikost = 0;
a->pole = NULL;
return;
}


void vypis(shluk* a) {
    printf("Shluk ma %i prvku:", a -> velikost);

    for(int i = 0; i < a -> velikost; i++) {
        printf("%i", a-> pole[i]);
    }
    printf("\n");
}


void pridejPosledni(shluk* a, int cislo) {
    
    int* b; 
    b = realloc( a -> pole , sizeof(int) * (a -> velikost + 1));
        if(b != NULL) {
            a -> pole = b;
            a ->pole[a -> velikost] = cislo;
            a -> velikost++;
        }

}

void odeberPosledni(shluk* a) {

    int* b;
         b = realloc( a -> pole , sizeof(int) * (a -> velikost - 1));
         if(b != NULL) {
             a -> pole = b;
             a -> velikost--;
         } 

}

void pridejPrvni(shluk* a, int cislo) {
    int* b;
    b = realloc(a -> pole,a -> velikost + 1)
    if(b != NULL) {
        
    } 

}


int main() {

shluk a;
inicializuj(&a);
vypis(&a);

pridejPosledni(&a, 10);
vypis(&a);

pridejPosledni(&a, 20);
vypis(&a);

odeberPosledni(&a);
vypis(&a);

//prodejPrvni(&a, 30);
//vypis(&a);

//odeberPrvni(&a);
//vypis(&a);

//uvolni(&a);
//vypis(&a);




return 0;
}
