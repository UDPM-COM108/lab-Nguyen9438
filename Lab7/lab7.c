#include <stdio.h>
#include <string.h>

int main() {

    //  BÀI 1: Đếm nguyên âm và phụ âm trong chuỗi
    char str1[100];
    int na = 0, pa = 0;

    printf("=== BAI 1: Dem nguyen am va phu am ===\n");
    printf("Nhap chuoi: ");
    fgets(str1, sizeof(str1), stdin);

    strlwr(str1);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            if (str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
                na++;
            else
                pa++;
        }
    }

    printf("Nguyen am: %d\n", na);
    printf("Phu am: %d\n\n", pa);


    char ten_dang_nhap[50], mat_khau[50];
    const char ten_nguoi_dung[] = "admin";
    const char mat_khau_nguoi_dung[] = "123";

    printf("=== BAI 2: Dang nhap ===\n");

    printf("Nhap username: ");
    fgets(ten_dang_nhap, sizeof(ten_dang_nhap), stdin);
    ten_dang_nhap[strcspn(ten_dang_nhap, "\n")] = 0;

    printf("Nhap password: ");
    fgets(mat_khau, sizeof(mat_khau), stdin);
    mat_khau[strcspn(mat_khau, "\n")] = 0;

    if (strcmp(ten_dang_nhap, ten_nguoi_dung) == 0 && strcmp(mat_khau, mat_khau_nguoi_dung) == 0)
        printf("Dang nhap thanh cong!\n\n");
    else
        printf("Dang nhap khong thanh cong!\n\n");

    return 0;
}
