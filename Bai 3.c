#include<stdio.h>

void tien_KARAOKE(int gioDau, int gioCuoi){
    int T = 150000;
    int tienGio, tongGio;
    int km4, kmv;
    printf("Tinh tien KARAOKE\n");
    tongGio = gioCuoi - gioDau;
    printf("Gio Cuoi %dh - Gio Dau %dh = %dh\n", gioCuoi, gioDau, tongGio);
    printf("Tien gio: %d\n", (tongGio * T));
    if(gioDau >= 14 && gioDau <= 17){
        printf("Khuyen mai khung gio vang 10 phan tram\n");
        if(tongGio > 3){
           printf("Tien gio vuot qua 3h\n");
           km4 = (tongGio - 3) * 0.3 * T;
           tienGio = tongGio * T - km4;
           printf("So gio vuot: %d => Tien KM: %d", (tongGio - 3), km4);
        }else{
           tienGio = tongGio * T;
        }
        kmv = tienGio * 0.1;
        printf("Tien gio truoc KMV: %d\n", tienGio);
        printf("Tien KMV: %d\n", kmv);
        tienGio = tongGio * T;
    }else{
        if(tongGio > 3){
            printf("Tien gio vuot qua 3h\n");
            km4 = (tongGio - 3) * 0.3 * T;
            tienGio = tongGio * T * km4;
            printf("So gio vuot:%d => Tien KM: %d\n", (tongGio - 3), km4);
        }else{
            tienGio = tongGio * T;
        }
    }
    printf("Tien phai tra: %d\n", tienGio);
}
void Chucnang3(){
   int gioDau, gioCuoi;
   do{
       printf("Nhap gio dau:");
       scanf("%d",&gioDau);
       printf("Nhap gio cuoi:");
       scanf("%d",&gioCuoi);
   }while(gioDau < 12 || gioCuoi > 23);
   tien_KARAOKE(gioDau, gioCuoi);
}
