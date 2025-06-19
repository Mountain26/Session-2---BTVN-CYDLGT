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
        int x, y;
        printf("Nhap vi tri muon them ( 1 den %d ):\n", n);
        scanf("%d", &x);
        printf("Nhap gia tri muon them:\n");
        scanf("%d", &y);
        if (x < 1 || x > n + 1 ) {
            printf("Vi tri khong co trong mang");
            return 0;
        }
        for (int i = n; i >= x - 1; i--) {
            arr[i + 1] = arr[i];
        }
        arr[x - 1] = y;
        n++;
        printf("Mang sau khi da them la: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }else {
        printf("Mang khong chua qua 100 phan tu");
    }
}