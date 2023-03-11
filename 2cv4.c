#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i;
    int arr[5];
    
printf("Select 5 numbers:\n ");
for( i=0; i<5; i++){
    scanf("%i", &arr[i]);
}
int sum;
for(sum= 0; sum<5;sum++){
    scanf("%i", &sum);
}
    
printf("Reversed:");
 for (int i = 4; i >= 0; i--) {
printf("%d", arr[i]);
 }
 printf("\n"); 


 printf("Zaporny cisla:");
 
 int x=0;
 for(i=0;i<5; i++){
     if(arr[i]<0){
         x=x+1;
         
         
     }
 }
printf("%i", x);

return 0;
 }
