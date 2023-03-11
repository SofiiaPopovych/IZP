#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} dvojice;


bool jeFunkce(int delka, dvojice pole[])
{
    for (int i = 0; i < delka; ++i) {
        for (int j = 0; j < delka; ++j) {
            if (pole[i].x == pole[j].x && pole[i].y != pole[j].y)
            {
                return false;
            }
        }
    }
    return true;
}


bool jeMnozina(int delka, dvojice pole[])
{
    for (int i = 0; i < delka; ++i) {
        for (int j = 0; j < delka; ++j) {
            if(i == j) {
                break;
            }
            if (pole[i].x == pole[j].x && pole[i].y == pole[j].y)  {
                return false;
            }
        }
    }
    return true;

}


bool jeAntisymetricka(int delka, dvojice pole[])
{
    for (int i = 0; i < delka; ++i) {
        for (int j = 0; j < delka; ++j) {
            if (pole[i].x == pole[j].y && pole[i].y == pole[j].x && pole[i].x != pole[i].y)  {
            return false;
            }
        }
    }
    return true;
}


bool jeSymetricka(int delka, dvojice pole[])
{   
    bool isFound = false;
    for (int i = 0; i < delka; ++i) {
        for (int j = 0; j < delka; ++j) {
            
            if (pole[i].x == pole[j].y && pole[i].y == pole[j].x)  {
                isFound = true;
                break;
            }
        }   
        if( ! isFound) {
            return false;
        }
        isFound = false;
    }

    return true;
}


int main() {
    int delkaDvojic = 4;
    dvojice poleDvojic[delkaDvojic];


    for (int i = 0; i < delkaDvojic; ++i)
    {
        scanf("%i %i", &poleDvojic[i].x, &poleDvojic[i].y);
    }

    bool jeAntisymetricka(int delka, dvojice pole[]);
    bool jeSymetricka(int delka, dvojice pole[]);
    bool jeMnozina(int delka, dvojice pole[]);
    bool jeFunkce(int delka, dvojice pole[]);
    

    if(jeAntisymetricka(4,poleDvojic)) {
        printf("Je antisymetricka\n");
    }
    if(jeSymetricka(4,poleDvojic)) {
        printf("Je symetricka\n");
    }
    if(jeMnozina(4,poleDvojic)) {
        printf("Je mnozina\n");
    }
     if(jeFunkce(4,poleDvojic)) {
        printf("Je funkce\n");
    }


    return 0;
}