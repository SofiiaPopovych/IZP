#include <stdio.h>
#include <ctype.h>
#include <math.h>


typedef struct {
    float x;
    float y;
}  bod;


    float stranaBA(bod a , bod b) {
        float dx = a.x - b.x;
        float dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
    }


    float stranaCA(bod a , bod c) {
        float sx = a.x - c.x;
        float sy = a.y - c.y;
    return sqrt(sx*sx + sy*sy);
    }


    float stranaBC(bod c , bod b) {
        float kx = c.x - b.x;
        float ky = c.y - b.y;
    return sqrt(kx*kx + ky*ky);
    }


   float obvod(float d, float s, float k);
   float obvod(float d, float s, float k) {
       float to = d + s + k;
       return to;
   }

   float obss(float d, float s, float k) {
       float o = (d + s + k)/2
   }

    float obsah(float d, float s, float k);
    float obsah(float d, float s, float k) {
        float tob = sqrt(o * (o - ));
        return tob;
    }

    float tezistex(bod a, bod b, bod c) {
        float tex = (a.x + b.x + c.x)/3;
        return tex;
    }

     float tezistey(bod a, bod b, bod c) {
        float tey = (a.y + b.y + c.y)/3;
        return tey;
    }


int main() {
    bod a, b, c;
    scanf("%f %f", &a.x, &a.y);
    scanf("%f %f", &b.x, &b.y);
    scanf("%f %f", &c.x, &c.y);

    float d = stranaBA(a, b);
    float s = stranaCA(a, c);
    float k = stranaBC(c, b);
    float o = obss(d, s, k);
    
    float to = obvod(d, s, k);
    printf("Obvod trejuholnika je %f\n", to);

    float tob = obsah(d, s, k);
    printf("Obsah trejuholnika je %f\n", tob);

    float tex = tezistex(a, b, c);
    float tey = tezistey(a, b, c);

    printf("Teziste = (%f, %f)\n", tex, tey);
return 0;
}