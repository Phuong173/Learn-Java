#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

#include"Bai 1.c"
#include"Bai 2.c"
#include"Bai 3.c"
#include"Bai 4.c"
#include"Bai 5.c"
#include"Bai 6.c"
#include"Bai 7.c"
#include"Bai 8.c"
#include"Bai 9.c"
#include"Bai 10.c"




int main(){
	printf("Menu chuong trinh  \n");
    printf("=========================\n");
    printf("1. Kiem tra so nguyen to va so chinh phuong\n");
    printf("2. Uoc chung lon nhat va Boi chung nho nhat\n");
    printf("3. Tinh tien quan Karaoke\n");
    printf("4. Tinh tien dien\n");
    printf("5. Chuc nang doi tien\n");
    printf("6. Tinh lai xuat vay ngan hang\n");
    printf("7. Vay tien mua xe\n");
    printf("8. Sap xep thong tin sinh vien\n");
    printf("9. Xay dung game FPOLY-LOTT\n");
    printf("10. Tinh toan phan so\n");
    printf("0. Thoat chuong trinh!\n");
    printf("=========================\n");
    printf("Lua chon cua ban: ");
    int chon;
    scanf("%d", &chon);
    switch (chon){
	case 1:
	     printf("1. Kiem tra so nguyen to va so chinh phuong\n");
	     Chucnang1();
	break;
	case 2:
	     printf("2. Uoc chung lon nhat va Boi chung nho nhat\n");
	     Chucnang2();
	break;
	case 3:
	     printf("3. Tinh tien quan Karaoke\n");
	     Chucnang3();
	break;
	case 4:
	     printf("4. Tinh tien dien\n");
	     Chucnang4();
	break;
	case 5:
	     printf("5. Chuc nang doi tien\n");
	     Chucnang5();
	break;
	case 6:
	     printf("6. Tinh lai xuat vay ngan hang\n");
	     Chucnang6();
	break;
	case 7:
	    printf("7. Vay tien mua xe\n");
	    Chucnang7();
	break;
	case 8:
	    printf("8. Sap xep thong tin sinh vien\n");
	    Chucnang8();
	break;
	case 9:
	     printf("9. Xay dung game FPOLY-LOTT\n");
	     Chucnang9();
	break;
	case 10:
	    printf("10. Tinh toan phan so\n");
	    Chucnang10();
	break;
	
	default:
	    break;
}
    return 0;
}

