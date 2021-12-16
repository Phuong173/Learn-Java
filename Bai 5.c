#include<stdio.h>


void doitien(int sotien){
    int menhGia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soMenhgia[9] = {0};

    int i = 0;
    while (i < 9){
        if(sotien > menhGia[i]){
            break;
        }
        i++;
    }

    while (i < 9 && sotien > 0){
        soMenhgia[i] = sotien / menhGia[i];
        sotien = sotien % menhGia[i];
        i++;
    }
    printf("So tien doi duoc la: \n");
    for (int j = 0; j < 9; j++){
        if(soMenhgia[j] > 0){
            printf("%d to %d \n", soMenhgia[j], menhGia[j]);
        }
    }  
}
void Chucnang5(){
    int sotien;
    printf("Nhap so tien can doi:");
    scanf("%d", &sotien);

    doitien(sotien);
}
