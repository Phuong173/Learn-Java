#include<stdio.h>

struct Sinhvien{
    char hoTen[100];
    float DTB;
};
char *xepHocluc(float DTB){
    char *st;
    if(DTB >= 9){
        st = "Xuat sac";
    }else if(DTB >= 8){
        st = "Gioi";
    }else if(DTB >= 6.5){
        st = "Kha";
    }else if(DTB >= 5){
        st = "Trung binh";
    }else {
        st = "Yeu";
    }
    return st;
}
void sapSepdanhsach(struct Sinhvien danhsach[], int soluong){
    for (int i = 0; i < soluong; i++)
    {
        for (int j = i + 1; j < danhsach[j].DTB; j++)
        {
            if(danhsach[i].DTB > danhsach[j].DTB){
                struct Sinhvien temp = danhsach[i];
                danhsach[i] = danhsach[j];
                danhsach[j] = temp;
            }
        }
        
    }
    
}
void nhapDanhsach(struct Sinhvien danhsach[], int * soluong){
    printf("Nhap so luong sinh vien: ");
    scanf("%d", soluong);

    for (int i = 0; i < *soluong; i++)
    {
        fflush(stdin);
        printf("Nhap sinh vien thu %d: \n", i + 1);
        printf("Ho ten: ");
        gets(danhsach[i].hoTen);
        printf("Diem trung binh:");
        scanf("%f", &danhsach[i].DTB);
    }
    
}
void hienThidanhsach(struct Sinhvien danhsach[], int soluong){
    printf("\n\t\tDanh Sach Sinh Vien\n");
    printf("STT\tHo ten\tDiem trung binh\tHoc luc\t\n");
    for (int i = 0; i < soluong; i++)
    {
        printf("%d\t%-15s\t%.1f\t%s\n", i + 1, danhsach[i].hoTen, danhsach[i].DTB, xepHocluc(danhsach[i].DTB));
    }
    
}
void Chucnang8(){
    struct Sinhvien danhSach[30];
    int soluong;
    nhapDanhsach(danhSach, &soluong);
    hienThidanhsach(danhSach, soluong);
    sapSepdanhsach(danhSach, soluong);
    printf("\nDanh sach sau khi sap xep theo DTB:\n");
    hienThidanhsach(danhSach, soluong);
}