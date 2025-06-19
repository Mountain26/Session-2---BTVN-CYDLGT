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
        printf("Nhap vi tri can xoa:\n");
        scanf("%d", &x);
        if (x < 1 || x > n) {
            printf("Vi tri khong co trong mang");
            return 0;
        }
        for (int i = x - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Mang sau khi da xoa la: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }else {
        printf("Mang khong chua qua 100 phan tu");
    }
}