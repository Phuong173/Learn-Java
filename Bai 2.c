#include<stdio.h>
#include<math.h>

void B1(){
    int x, y, max, ucln = 1, max_chia_2;
    printf("Nhap x:");
    scanf("%d", &x);
    printf("Nhap y:");
    scanf("%d", &y);
    max = x > y ? x:y;
    max_chia_2 = (int) max/2;
    for (int i = 2; i <= max_chia_2; i++)
    {
        if(x % i == 0 && y % i == 0){
        ucln = i;
        }
    }
    printf("utln cua %d va %d = %d:\n", x, y, ucln);
}
void B2(){
    int x, y, max, Btnn = 0;
    printf("Nhap x:");
    scanf("%d", &x);
    printf("Nhap y:");
    scanf("%d", &y);
    max = x > y ? x:y;
    Btnn = x * y;
    for (int i = max; i <= Btnn; i++)
    {
        if(x % i == 0 && y % i == 0){
        Btnn = i;
        }
    }
    printf("Btnn cua %d va %d = %d:\n", x, y, Btnn);
}
void Chucnang2(){
    int lua_chon;
    int bai_toan;
    do{
        printf("1. Uoc chung lon nhat\n");
        printf("2. Boi chung nho nhat\n");
        printf("Moi ban chon:");
        scanf("%d", &bai_toan);
        switch (bai_toan){
        case 1:
            B1();
            break;
        case 2:
            B2();
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
        }
        printf("Chon lai(0|1)");
        scanf("%d", &lua_chon);
    } while (lua_chon == 1 );
   
}
