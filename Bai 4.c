#include<stdio.h>


void Chucnang4(){
    printf("Chuong trinh tinh tien dien\n");
    int soDien, soTien;
    scanf("%d", &soDien);
    if(soDien <= 50){
        soTien = soDien * 1678;
        printf("So dien: %d => So tien:%d", soDien, soTien);
    }else if (soDien <= 100 && soDien >= 50){
        soTien = (50 * 1678) + (soDien - 50) * 1734;
        printf("So dien: %d => So tien:%d", soDien, soTien);
    }else if(soDien <= 200 && soDien >= 100){
        soTien = (50 * 1678) + 50*1734 + (soDien - 100)*2014;
        printf("So dien: %d => So Tien : %d", soDien, soTien);
    }else if(soDien <= 300 && soDien >= 200){
        soTien = (50 * 1678) + 50*1734 + 100 * 2014 + (soDien - 200)*2536;
        printf("So dien: %d => So Tien : %d", soDien, soTien);
    }else if(soDien <= 400 && soDien >= 300){
        soTien = (50 * 1678) + 50*1734 + 100 * 2014 + 100 * 2536 + (soDien - 300) * 2834;
        printf("So dien: %d => So Tien : %d", soDien, soTien);
    }else{
        soTien = (50 * 1678) + 50*1734 + 100 * 2014 + 100*2536 +100 * 2834 + (soDien - 400)*2927;
        printf("So dien: %d => So Tien : %d", soDien, soTien);
    }
}
