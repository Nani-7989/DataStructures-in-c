#include<stdio.h>

int main() {
    int x;
    struct pixel {
        int h;
        int v;
        char cn;
    }paint[3] = { {100,120,'r'},{120,140,'y'},{140,160,'b'} };
    for (x = 0; x < 3; x++) {
        printf("horz:%d\n vert:%d\n color:%c\n", paint[x].h, paint[x].v, paint[x].cn);

    }
}
