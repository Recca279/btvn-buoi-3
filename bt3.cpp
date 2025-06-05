#include <stdio.h>

int main() {
    int soTien;
    printf("Nhap so tien can rut (boi so cua 10000): ");
    scanf("%d", &soTien);

    // Kiểm tra tính hợp lệ
    if (soTien <= 0 || soTien % 10000 != 0) {
        printf("So tien khong hop le. Phai la boi so cua 10000.\n");
        return 0;
    }

    // Các mệnh giá
    int menhGia[] = {500000, 200000, 100000, 50000, 20000, 10000};
    int soTo, i;

    printf("Phan bo tien:");

    for (i = 0; i < 6; i++) {
        soTo = soTien / menhGia[i];
        if (soTo > 0) {
            printf("%d x %dk", soTo, menhGia[i] / 1000);
            soTien = soTien % menhGia[i];
        }
    }
}