#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]){

char ch[20];
scanf("%19s", ch);

for(i = 0; i < argc; i++){

    if (strcmp (argv, ch) == 0 ){
         printf("Retezce jsou shodne\n", argv, ch);
    } else {
        printf("Retezce nejsou shodne\n", argv, ch);
    }

}
return 0;
}