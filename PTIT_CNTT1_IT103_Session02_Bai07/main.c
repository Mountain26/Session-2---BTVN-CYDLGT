#include <stdio.h>

int main() {
    int n;
    int count = 0;
    printf("Nhap n phan tu co trong mang\n");
    scanf("%d", &n);
    if (0< n && n <= 100) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            printf("Nhap gia tri cua cac phan tu co trong mang, phan tu thu %d\n", i + 1);
            scanf("%d", &arr[i]);
        }
        int x;
        printf("Nhap mot so nguyen:\n");
        scanf("%d", &x);
        int found = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == x) {
                    printf("%d + %d = %d\n", arr[i], arr[j], arr[i] + arr[j]);
                    found = 1;
                }
            }
        }
        if (!found) {
            printf("Khong tim thay\n");
        }
    }else {
        printf("Mang khong chua qua 100 phan tu");
    }
}