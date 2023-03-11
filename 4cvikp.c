#include <stdio.h>
#include <stdbool.h>


bool jePrvekMnoziny(int delka, int arr[], int prvek);
bool jePrvekMnoziny(int delka, int arr[], int prvek) {

    for(int i = 0; i < delka; i++){ 
        return true ?: arr[i] == prvek;
    }
    return false;
}


bool jeMnozina(int delka, int pole[]) {
    for (int i = 0; i < delka; i++) {
        for (int j = 0; j < delka; j++) {
            if( j == i){
               break;
            } 
         if(pole[i] == pole[j]) {
             return false;
         }  
        }
    }   
            
    return true;     
}

void vypisPrunik(int delkaA, int arrA[], int delkaB, int arrB[]);
void vypisPrunik(int delkaA, int arrA[], int delkaB, int arrB[]){
    printf("Prunik:");
    for(int i = 0; i < delkaA; i++){
        for(int j = 0; j < delkaB; j++) {
            if (arrA[i] == arrB[j]) {
                printf(" %d", arrA[i]);
            }
        }
    }
    printf("\n");
    return;
}


void vypisSjednoceni(int delkaA, int arrA[], int delkaB, int arrB[]);
void vypisSjednoceni(int delkaA, int arrA[], int delkaB, int arrB[]){
    printf("Sjednoceni:");

    for(int k = 0; k < delkaA; k++) {
        printf(" %d", arrA[k]);
    }

    for(int i = 0; i < delkaB; i++) {
        for(int j = 0; j < delkaA; j++) {
            if(arrB[i] == arrA[j]) {
            break;
            } else if(j == delkaA - 1) {
                printf(" %d", arrB[i]);
            }
            
        }
    }
    printf("\n");
}
       



int main(){

    int x[4];
    for(int i = 0; i < 4 ; i++){
      scanf("%i", &x[i]);  
    }
    int y[5];
    for(int i = 0; i < 5 ; i++){
      scanf("%i", &y[i]);  
    }
    
if (jeMnozina(4,x) && jeMnozina (5, y))
 {
   vypisPrunik(4,x,5,y);
   vypisSjednoceni(4,x,5,y); 
}

    else{
        printf("Vstupy nejsou mnozinamy\n");
    }
return 0;
    
}