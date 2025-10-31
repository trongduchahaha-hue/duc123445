#include <stdio.h>
#include <math.h>

int main() {
    int n, x, d, dem = 0;

    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x (0-9): ");
    scanf("%d", &x);

    if (n == 0 && x == 0)
        dem = 1;     

    if (n < 0) n = -n;     

    while (n > 0) {
        d = n % 10;         
        if (d == x) dem++;  
        n = n / 10;    
    }

    printf("Chu so %d xuat hien %d lan.\n", x, dem);
    return 0;
}

