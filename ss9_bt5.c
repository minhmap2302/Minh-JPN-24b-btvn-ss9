#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int m;
    int a[100];

    do {
        printf("\nMENU\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. In ra giá trị các phần tử chẵn và tính tổng\n");
        printf("4. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
        printf("5. In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");
        printf("6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
        printf("7. Thêm một phần tử vào vị trí chỉ định\n");
        printf("8. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &num);

        if (num == 1) {
            printf("Nhập số lượng phần tử m: ");
            scanf("%d", &m);

            if (m <= 0 || m > 100) {
                printf("Số lượng phần tử không hợp lệ! Vui lòng nhập lại.\n");
            } else {
                printf("Nhập giá trị các phần tử của mảng:\n");
                for (int i = 0; i < m; i++) {
                    printf("Nhập phần tử a[%d]: ", i);
                    scanf("%d", &a[i]);
                }
            }
        }
        else if (num == 2) {
            if (m == 0) {
                printf("Mảng chưa được nhập! Vui lòng nhập mảng trước.\n");
            } else {
                printf("Mảng đã nhập:\n");
                for (int i = 0; i < m; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
        else if (num == 3) {
            if (m == 0) {
                printf("Mảng chưa được nhập! Vui lòng nhập mảng trước.\n");
            } else {
                int tong = 0;
                printf("Các phần tử chẵn trong mảng:\n");
                for (int i = 0; i < m; i++) {
                    if (a[i] % 2 == 0) {
                        printf("%d ", a[i]);
                        tong += a[i];
                    }
                }
                printf("\nTổng các phần tử chẵn: %d\n", tong);
            }
        }
        else if (num == 4) {
            if (m == 0) {
                printf("Mảng chưa được nhập! Vui lòng nhập mảng trước.\n");
            } else {
                int max = a[0], min = a[0];
                for (int i = 1; i < m; i++) {
                    if (a[i] > max) {
                        max = a[i];
                    }
                    if (a[i] < min) {
                        min = a[i];
                    }
                }
                printf("Giá trị lớn nhất trong mảng: %d\n", max);
                printf("Giá trị nhỏ nhất trong mảng: %d\n", min);
            }
        }
        else if (num == 5) {
            if (m == 0) {
                printf("Mảng chưa được nhập! Vui lòng nhập mảng trước.\n");
            } else {
                int tong = 0;
                printf("Các phần tử là số nguyên tố trong mảng:\n");
                for (int i = 0; i < m; i++) {
                    int isPrime = 1;
                    if (a[i] < 2) {
                        isPrime = 0;
                    } else {
                        for (int j = 2; j <= sqrt(a[i]); j++) {
                            if (a[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                    }
                    if (isPrime) {
                        printf("%d ", a[i]);
                        tong += a[i];
                    }
                }
                printf("\nTổng các phần tử là số nguyên tố: %d\n", tong);
            }
        }
        else if (num == 6) {
            if (m == 0) {
                printf("Mảng chưa được nhập! Vui lòng nhập mảng trước.\n");
            } else {
                int x, count = 0;
                printf("Nhập số cần thống kê: ");
                scanf("%d", &x);
                for (int i = 0; i < m; i++) {
                    if (a[i] == x) {
                        count++;
                    }
                }
                printf("Số %d xuất hiện %d lần trong mảng.\n", x, count);
            }
        }
        else if (num == 7) {
            if (m == 0) {
                printf("Mảng chưa được nhập! Vui lòng nhập mảng trước.\n");
            } else {
                int pos, value;
                printf("Nhập vị trí muốn thêm phần tử: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > m) {
                    printf("Vị trí không hợp lệ!\n");
                } else {
                    for (int i = m; i > pos; i--) {
                        a[i] = a[i - 1];
                    }
                    printf("Nhập phần tử muốn thêm: ");
                    scanf("%d", &value);
                    a[pos] = value;
                    m++;
                    printf("Mảng sau khi thêm phần tử:\n");
                    for (int i = 0; i < m; i++) {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
            }
        }
        else if (num == 8) {
            printf("Thoát chương trình.\n");
        } else {
            printf("Lựa chọn không hợp lệ. Vui lòng nhập lại.\n");
        }

    } while(num != 8);

    return 0;
}

