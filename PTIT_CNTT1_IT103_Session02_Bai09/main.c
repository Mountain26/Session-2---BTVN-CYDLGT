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
        int maxCount = 0;
        int maxItem;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                maxItem = arr[i];
            }
        }
        printf("So lan xuat hien: %d\n", maxCount);
        printf("Phan tu co gia tri lon nhat: %d\n", maxItem);
    }
}