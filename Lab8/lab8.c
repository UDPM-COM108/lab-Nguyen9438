#include <stdio.h>
#include <string.h>
#define LUONG_CB 1500000
#define NGAY_QD 25
typedef struct {
    char ma[10], ten[50];
    int ngay;
    float luong;
}nhanvien;
// ham de sap xep theo thu tu tang dan cua ma nv
void sapXepTangDan(nhanvien nv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nv[i].ma, nv[j].ma) > 0) {
                // hoan doi vi tri
                nhanvien temp = nv[i];
                nv[i] = nv[j];
                nv[j] = temp;
            }
        }
    }
}
int main() {
    nhanvien nv[5];
    // 1: nhap 5 nv
    printf("NHAP THONG TIN 5 NHAN VIEN:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nNhan vien thu %d:\n", i+1);
        printf("MSNV: ");
        scanf("%s", nv[i].ms);
        getchar();
        printf("Ho ten: "); 
        gets(nv[i].ten);
        printf("So ngay cong: "); 
        scanf("%d", &nv[i].ngay);
        // tinh luong
        if(nv[i].ngay < NGAY_QD) 
            nv[i].luong = LUONG_CB * (1 - (NGAY_QD - nv[i].ngay) * 0.1);
        else if(nv[i].ngay > NGAY_QD) 
            nv[i].luong = LUONG_CB + (LUONG_CB / NGAY_QD) * 2 * (nv[i].ngay - NGAY_QD);
        else 
            nv[i].luong = LUONG_CB;
    }
    // 2: sap xep tang dan theo ma nv
    sapXepTangDan(nv, 5);
    // xuat ds da sap xep
    printf("\n\nDANH SACH NHAN VIEN (SAP XEP TANG DAN THEO MA NV):\n");
    printf("MSNV     HoTen                SoNgayCong    Luong\n");
    printf("---------------------------------------------------\n");
    for(int i = 0; i < 5; i++) {
        printf("%-8s %-20s %-12d %-12.0f\n", 
               nv[i].ms, nv[i].ten, nv[i].ngay, nv[i].luong);
    }
    
    return 0;
}