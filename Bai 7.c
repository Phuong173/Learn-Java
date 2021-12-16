#include<stdio.h>

void tinhVaytragop(float phanTramvay){
    double phanTramtratruoc = 1.0 - phanTramvay;
    double sotien = 5000000;
    double laiHangthang = 0.72 / 12;
    int thoiHan = 12;
    double soTientratruoc = sotien * phanTramtratruoc;
    sotien = sotien - soTientratruoc;
    double traHangthang = sotien / thoiHan;

    printf("So tien tra truoc: %2f\n", soTientratruoc);
    printf("So tien tra hang thang: \n");
    printf("Ky han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
    for (int i = 1; i <= thoiHan; i++)
    {
        double tralai = sotien * laiHangthang;
        double tongPhaitra = tralai + traHangthang;
        sotien = sotien - traHangthang;

        printf("%d\t%.2f\t%.2f\t%.2f\t\t%.2f\n", i, tralai, traHangthang, tongPhaitra, sotien);
    }
       
}
void Chucnang7(){
    double phanTramvay;

    printf("Nhap phan tram vay (0 - 1):");
    scanf("%lf", &phanTramvay);

    tinhVaytragop(phanTramvay);
    
}
