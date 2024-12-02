#include <stdio.h>

int main() {
    int a[100][100], n;
    int luaChon;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        if (luaChon == 1) {
            printf("Nhap kich co ma tran vuong (n x n): ");
            scanf("%d", &n);
            printf("Nhap gia tri cac phan tu cua ma tran:\n");
            for(int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    printf("a[%d][%d] = ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
        }
        else if (luaChon == 2) {
            printf("Ma tran:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
        }
        else if (luaChon == 3) {
            int tong = 0;
            printf("Cac phan tu le trong ma tran: ");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (a[i][j] % 2 != 0) {
                        printf("%d ", a[i][j]);
                        tong += a[i][j];
                    }
                }
            }
            printf("\nTong cac phan tu le: %d\n", tong);
        }
        else if (luaChon == 4) {
            int tich = 1;
            printf("Cac phan tu tren duong bien: ");
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                        printf("%d ", a[i][j]);
                        tich *= a[i][j];
                    }
                }
            }
            printf("\nTich cua cac phan tu tren duong bien: %d\n", tich);
        }
        else if (luaChon == 5) {
            printf("Cac phan tu tren duong cheo chinh: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i][i]);
            }
            printf("\n");
        }
        else if (luaChon == 6) {
            printf("Cac phan tu tren duong cheo phu: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i][n-i-1]);
            }
            printf("\n");
        }
        else if (luaChon == 7) {
            int maxSum = -999999, dongMax = -1;
            
            for (int i = 0; i < n; i++) {
                int tong = 0;
                for (int j = 0; j < n; j++) {
                    tong += a[i][j];
                }
                if (tong > maxSum) {
                    maxSum = tong;
                    dongMax = i;
                }
            }

            printf("Dong co tong phan tu lon nhat la: ");
            for (int j = 0; j < n; j++) {
                printf("%d ", a[dongMax][j]);
            }
            printf("\nTong cua dong la: %d\n", maxSum);
        }
        else if (luaChon == 8) {
            printf("Thoat chuong trinh.\n");
            break;
        }
        else {
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}
