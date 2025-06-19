#include <stdio.h>

int main() {
    int n;
    printf("Nhap n phan tu co trong mang\n");
    scanf("%d", &n);
    if (0< n && n <= 100) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            printf("Nhap gia tri cua cac phan tu co trong mang, phan tu thu %d\n", i + 1);
            scanf("%d", &arr[i]);
        }
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        printf("Gia tri phan tu lon nhat co trong mang la: %d", max);
    }else {
        printf("Mang khong chua qua 100 phan tu");
    }
}