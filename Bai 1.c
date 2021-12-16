#include <stdio.h>
#include <stdbool.h>
#include<math.h>

bool ktr_so_ngto(int x){
    if(x < 2){
        return false;
    }
    if(x == 2){
        return true;
    }
    int count = 0;
    for (int i = 2; i < x; i++) {
        if(x%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        return true;
    }
    return false;
}
bool ktr_so_chinh_phuong(int x){
    int i = sqrt(x);
    if(i * i == x){
        return true;
    }else{
        return false;
    }
}	
bool ktr_so_nguyen(int x){
    int flag = 1;
    if(ceil(x) != floor(x)) flag = 0;
    return flag;
}
void bai1(){
    printf("Nhap so:");
    int x;
    scanf("%d", &x);
    if(ktr_so_nguyen(x) == 1){
        printf("%d la so nguyen\n", x);
    }else if (ktr_so_nguyen(x) == 0){
        printf("%d khong phai la so nguyen\n", x);
    }
}
void bai2(){
    printf("Nhap so:");
    int x;
    scanf("%d", &x);
    if(ktr_so_ngto(x) == true){
        printf("%d la so nguyen to\n", x);
    }else{
        printf("%d khong la so nguyen to\n", x);
    }
}
void bai3(){
    printf("Nhap so:");
    int x;
    scanf("%d", &x);
    if(ktr_so_chinh_phuong(x) == true){
        printf("%d la so chinh phuong\n", x);
    }else{
        printf("%d khong phai la so chinh phuong\n", x);
    }

} 
void Chucnang1() {
    int lua_chon;
    int bai_toan;
    do {
        printf("1. So x co phai la so nguyen\n");
        printf("2. So x co phai so nguyen to\n");
        printf("3. So x co phai so chinh phuong\n");
        printf("Moi ban chon:");
        scanf("%d", &bai_toan);
        switch (bai_toan) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            default:
                printf("lua chon khong hop le!\n");
                break;
        }


        printf("choi tiep chu?(0|1)");
        scanf("%d", &lua_chon);
    } while (lua_chon == 1);
}
