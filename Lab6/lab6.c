#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhap mang
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // BAI 1: TB tong cac so chia het cho 3
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }

    if (count == 0) {
        printf("\nKhong co so nao chia het cho 3 trong mang.\n");
    } else {
        float avg = (float)sum / count;
        printf("\nTrung binh tong cac so chia het cho 3: %.1f\n", avg);
    }

    // BAI 2: Tim min & max
    int min = a[0], max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }

    printf("Gia tri nho nhat trong mang: %d\n", min);
    printf("Gia tri lon nhat trong mang: %d\n", max);

    return 0;
}
