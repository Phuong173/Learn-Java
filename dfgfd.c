#include<stdio.h>

void Chucnang6(){
    printf("Bang lai suat vay ngan hang \n \n");
    int tienVay ;
    printf("Nhap so tien:");
    scanf("%d", &tienVay);
    int tienLai;
    int tienGoc = tienVay / 12;
    int tienTra;
    int tienConlai;
    tienConlai = tienVay;
    printf("Ky han | Lai phai tra | Goc phai tra| So tien phai tra| So tien con lai \n");
    for (int i = 1; i <= 12; i++)
    {
        tienLai = tienConlai * 0.05;
        tienTra = tienGoc + tienLai;
        tienConlai = tienConlai - tienGoc;
        printf("--------------------------------------------------------------------------\n");
        printf("%6d | ", i);
        printf("%12d |", tienLai);
        printf("%12d |", tienGoc);
        printf("%16d |", tienTra);
        printf("%15d |", tienConlai);
        printf("\n");
    
    }
    
}
