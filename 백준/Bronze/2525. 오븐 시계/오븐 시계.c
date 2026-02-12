#include <stdio.h>

int main(void) {
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);
    x = x + (z / 60);
    y = y + (z % 60);

    if(y>=60){
        y-=60;
        x+=1;
    }
    
    if(x>=24) {
        x -= 24;
    }

    printf("%d %d\n", x, y);

    return 0;
}