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
        printf("Cac phan tu lon hon tat ca phan tu dung sau no:\n");
        for (int i = 0; i < n; i++) {
            int x = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] <= arr[j]) {
                    x = 0;
                    break;
                }
            }
            if (x == 1) {
                printf("%d\n", arr[i]);
            }
        }
    } else {
        printf("Mang khong chua qua 100 phan tu\n");
    }
    return 0;
}
