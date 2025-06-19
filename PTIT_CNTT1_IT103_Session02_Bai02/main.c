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
        printf("Nhap phan tu de kiem tra so lan xuat\n");
        scanf("%d", &x);
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                count++;
            }
        }
        if (count == 0) {
            printf("Phan tu khong co trong mang");
        }else {
            printf("Phan tu %d co %d lan xuat hien trong mang", x, count);
        }
    }else {
        printf("Mang khong chua qua 100 phan tu");
    }
}