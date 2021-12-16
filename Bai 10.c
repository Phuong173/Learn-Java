#include<stdio.h>
#include<math.h>

int bcnn(int m1, int m2){
    int max = m1;
    if(max < m2)
        max = m2;
    for(int i = max; i <= m1*m2; i++){
        if(i%m1 == 0 && i%m2 == 0){
            return i;
        }
    }
}


void Chucnang10(){
    int tu1, tu2;
    int mau1, mau2;
    printf("Nhap tu so 1:");
    scanf("%d", &tu1);
    printf("Nhap mau so 1:");
    scanf("%d", &mau1);
    printf("Nhap tu so 2:");
    scanf("%d", &tu2);
    printf("Nhap mau so 2:");
    scanf("%d", &mau2);

    int tongtu, tongmau, trutu;
    tongmau = bcnn(mau1, mau2);
    tongtu = tu1*(tongmau/mau1) + tu2*(tongmau/mau2);
    printf("%d/%d + %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tongtu, tongmau);

    trutu = tu1*(tongmau/mau1) - tu2*(tongmau/mau2);
    printf("%d/%d - %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, trutu, tongmau);
    
    int tichtu, tichmau;
    tichtu = tu1 * tu2;
    tichmau = mau1 * mau2;
    printf("%d/%d * %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tichtu, tichmau);

    tichtu = tu1 * mau2;
    tichmau = mau1 * tu2;
    printf("%d/%d / %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tichtu, tichmau);
    
}
