#include <stdio.h>

// ================= BAI 2 =================
// Tinh trung binh cong cac so chia het cho 2
void bai2() {
    int min, max;
    int i;
    int tong = 0;
    int dem = 0;
    float trungbinh;

    printf("\n--- BAI 2: TINH TRUNG BINH CONG ---\n");

    printf("Nhap min: ");
    scanf("%d", &min);

    printf("Nhap max: ");
    scanf("%d", &max);

    for (i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong += i;
            dem++;
        }
    }

    if (dem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap.\n");
    } else {
        trungbinh = (float)tong / dem;

        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong: %d\n", dem);
        printf("Trung binh cong: %.2f\n", trungbinh);
    }
}


// ================= BAI 3 =================
// Kiem tra so nguyen to
void bai3() {
    int x;
    int i;
    int laNguyenTo = 1;

    printf("\n--- BAI 3: KIEM TRA SO NGUYEN TO ---\n");

    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    if (x < 2) {
        laNguyenTo = 0;
    } else {
        for (i = 2; i <= x - 1; i++) {
            if (x % i == 0) {
                laNguyenTo = 0;
                break;
            }
        }
    }

    if (laNguyenTo == 1) {
        printf("[%d] la so nguyen to.\n", x);
    } else {
        printf("[%d] khong phai la so nguyen to.\n", x);
    }
}


// ================= BAI 4 =================
// Kiem tra so chinh phuong
void bai4() {
    int x;
    int i;
    int laChinhPhuong = 0;

    printf("\n--- BAI 4: KIEM TRA SO CHINH PHUONG ---\n");

    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    if (x >= 0) {
        for (i = 0; i * i <= x; i++) {
            if (i * i == x) {
                laChinhPhuong = 1;
                break;
            }
        }
    }

    if (laChinhPhuong == 1) {
        printf("[%d] la so chinh phuong.\n", x);
    } else {
        printf("[%d] khong phai la so chinh phuong.\n", x);
    }
}


// ================= BAI 1 =================
// He thong Menu lap
int main() {
    int chon;

    do {
        printf("\n");
        printf("========================================\n");
        printf("              MENU CHUONG TRINH         \n");
        printf("========================================\n");
        printf("1. Tinh trung binh cong cac so chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat chuong trinh\n");
        printf("========================================\n");

        printf("Xin moi chon chuc nang (1-4): ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                bai2();
                break;

            case 2:
                bai3();
                break;

            case 3:
                bai4();
                break;

            case 4:
                printf("\nDa thoat chuong trinh!\n");
                break;

            default:
            printf("\nLua chon khong hop le! Vui long chon lai.\n");
        }

    } while (chon != 4);

    return 0;
}