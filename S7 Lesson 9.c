#include <stdio.h>
#include <math.h>

int main() {
    int n, a, b;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac cap (a, b) thoa man a^3 + b^3 = %d la:\n", n);

    for (a = 0; a <= cbrt(n); a++) {
        for (b = 0; b <= cbrt(n); b++) {
            if (a*a*a + b*b*b == n) {
                printf("(%d, %d)\n", a, b);
            }
        }
    }

    return 0;
}

