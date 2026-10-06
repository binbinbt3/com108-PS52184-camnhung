#include <stdio.h>
#include <math.h>

// Khai bao ham
void tinhHocLuc();
void giaiPTBacHai();
void tinhTienDien();


// =====================================================
// BAI 2: TINH HOC LUC SINH VIEN
// =====================================================
void tinhHocLuc() {
    float diem;

    printf("\n===== BAI 2: TINH HOC LUC SINH VIEN =====\n");

    printf("Nhap diem sinh vien (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
    }
    else if (diem >= 9.0) {
        printf("Hoc luc: Xuat sac\n");
    }
    else if (diem >= 8.0) {
        printf("Hoc luc: Gioi\n");
    }
    else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
    }
    else if (diem >= 5.0) {
        printf("Hoc luc: Trung binh\n");
    }
    else {
        printf("Hoc luc: Yeu\n");
    }
}


// =====================================================
// BAI 3: GIAI PHUONG TRINH BAC HAI
// =====================================================
void giaiPTBacHai() {
    float a, b, c;
    float delta;
    float x, x1, x2;

    printf("\n===== BAI 3: GIAI PHUONG TRINH BAC HAI =====\n");

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    printf("Nhap c: ");
    scanf("%f", &c);

    // Truong hop a = 0
    if (a == 0) {

        // b = 0, c = 0
        if (b == 0 && c == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        }

        // b = 0, c != 0
        else if (b == 0 && c != 0) {
            printf("Phuong trinh vo nghiem.\n");
        }

        // b != 0
        else {
            x = -c / b;
            printf("Phuong trinh co nghiem: x = %.2f\n", x);
        }
    }

    // Truong hop a != 0
    else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        }

        else if (delta == 0) {
            x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        }

        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}


// =====================================================
// BAI 4: TINH TIEN DIEN TIEU THU HANG THANG
// =====================================================
void tinhTienDien() {
    float soDien;
    float tien = 0;

    printf("\n===== BAI 4: TINH TIEN DIEN =====\n");

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &soDien);

    if (soDien < 0) {
        printf("So dien khong hop le!\n");
    }
    else if (soDien <= 50) {
        tien = soDien * 1800;
    }
    else if (soDien <= 100) {
        tien = 50 * 1800
             + (soDien - 50) * 2000;
    }
    else if (soDien <= 200) {
        tien = 50 * 1800
             + 50 * 2000
             + (soDien - 100) * 2500;
    }
    else {
        tien = 50 * 1800
             + 50 * 2000
             + 100 * 2500
             + (soDien - 200) * 3000;
    }

    printf("Tien dien phai tra: %.0f VND\n", tien);
}


// =====================================================
// BAI 1: XAY DUNG MENU CHUONG TRINH
// =====================================================
int main() {
    int chon;

    do {
        printf("\n");
        printf("============================================\n");
        printf("          MENU CHUONG TRINH LAB 3           \n");
        printf("============================================\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("0. Thoat chuong trinh\n");
        printf("============================================\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                tinhHocLuc();
                break;

            case 2:
                giaiPTBacHai();
                break;

            case 3:
                tinhTienDien();
                break;

            case 0:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }

    } while (chon != 0);

    return 0;
}