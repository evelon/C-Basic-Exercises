// 각각의 notation만 외우기
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    char p;
    char q;
    char r;
    char s;
    char t;

    a = 74;          // 10진법
    b = 0x4A;        // 16진법
    c = 0112;        // 8진법
    d = 0b01001010;  // 2진법
    e = 'J';         // char 대입
    printf("a:%d, b:%d, c:%d, d:%d, e:%d\n", a, b, c, d, e);

    p = 110;
    q = 0x6E;
    r = 0156;
    s = 0b01101110;
    t = 'n';

    printf("p:'%c', q:'%c', r:'%c', s:'%c', t:'%c'\n", p, q, r, s, t);

    return 0;
}
