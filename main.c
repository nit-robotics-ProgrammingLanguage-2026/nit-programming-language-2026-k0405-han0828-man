
#include <stdio.h>

int main(void) {
    /* 課題0405：ロボット制御プログラム */
    double x;
    double r = 4.0;
    double pi = 3.141592;
    double a;

    scanf("%lf", &x);

    a = 360.0 * x / (r * pi);

    printf("%f", a);

    return 0;
}


