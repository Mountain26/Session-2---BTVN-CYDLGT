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
        printf("Nhap vi tri can sua gia tri:\n");
        scanf("%d", &x);
        if (x <= n - 1) {
        int y;
            printf("Moi ban nhap gia tri moi cua phan tu ma ban muon sua:\n");
            scanf("%d", &y);
            arr[x] = y;
            printf("MAng sau khi sua gia tri la:");
            for (int i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
        }else{
            printf("Khong co vi tri do trong mang");
        }
    }else {
        printf("Mang khong chua qua 100 phan tu");
    }
}