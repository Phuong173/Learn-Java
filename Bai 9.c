#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void nhapso(int *a, int *b){
    int flag = 0;
    do
    {
       printf("Nhap 2 so (trong khoang tu 1 den 15):");
       scanf("%d%d", a, b);

       flag = *a < 1 || *a > 15 || *b < 1|| *b > 15;

       if(flag !=0){
           printf("Ban nhap lai so. Vui long nhap lai!\n");
       }
    } while (flag !=0);
    
}
void xoSo(int a, int b){
    int rnd1, rnd2;
    srand(time(0));

    rnd1 = 1 + rand() % 15;
    rnd2 = 1 + rand() % 15;

    printf("So duoc sinh ra: So 1 %d - So 2 %d\n", rnd1, rnd2);
    if((a == rnd1 && b == rnd2) || (a == rnd2 && b == rnd1)){
        printf("Chuc mung ban da trung giai nhat \n");
    }else if (a == rnd1 || a == rnd2 || b == rnd1 || b == rnd2){
        printf("Chuc mung ban da chung giai nhi \n");
    }else{
        printf("Chuc ban may man lan sau\n");
    }
}
void Chucnang9(){
    int a, b;
    nhapso(&a, &b);
    xoSo(a, b);

}
