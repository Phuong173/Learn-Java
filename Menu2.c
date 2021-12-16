#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void bai1(){
    float a;
    int dem=0;
   printf("Xin moi nhap so:"); scanf("%f",&a);
    int b=a;
    int c=sqrt(b);
    if(a - b ==0){
        printf("%.0f la so nguyen\n",a);
    }else{
        printf("%f khong phai so nguyen\n",a);
    }
    for(int i=2;i<b;i++){
        if(b%i==0){
          dem++;
        }
    }if(dem==0){
        printf("%d la so nguyen to\n",b);
    }else{
        printf("%d khong phai so nguyen to\n",b);
    }
    if(b==c*c){
        printf("%d la so chinh phuong\n",b);
    }
    else{
        printf("%d khong phai so chinh phuong\n",b);
    }
}
//
void bai2(){
    int a, b,BCNN, UCLN;
    printf("nhap so thu 1:"); scanf("%d",&a);
    printf("nhap so thu 2:"); scanf("%d",&b);
    for(int i = 1; i <= a || i <= b; i++) {
    if( a%i == 0 && b%i == 0 )
    UCLN = i;
    }
    printf("UCLN = %d\n", UCLN);
     for(int i=a*b;i>0;i--){
        if(i%a==0&&i%b==0){
            BCNN=i;
        }
    }
    printf("BCNN=%d",BCNN);
    }
//
void bai3(){
      int start, end;
    do{
    printf("Nhap gio bat dau:"); scanf("%d",&start);
    printf("Nhap gio ket thuc:"); scanf("%d",&end);
    }while(start<12&&end>23);
    int Money = 50;
    int Hour= end - start;
    float Seal_1;
    float Seal_2;
     if (Hour>3)
   {
    Money *= Hour;
    Seal_1 = (Money*30)/100;
    Money -=Seal_1;
    printf("\nSu dung %d tien het %d VND",Hour,Money);
    }else{
    Money *= Hour;
    if (start==14&&end==17)
    {
    Seal_2 = (Money*10)/100;

    Money -= Seal_2;
    } 
      printf("\nSu dung %d tieng het %d VND",Hour,Money);
       }
    }
//
void bai4(){
 float soDien, tienDien;
 int bac1=1678, bac2=1734, bac3=2014, bac4=2536, bac5=2834, bac6=2927;
 printf("Nhap vao so dien cua ban (kWh): ");
 scanf("%f",&soDien);
  if(soDien<=50){
  tienDien=soDien*bac1;
 }else if(soDien<=100){
  tienDien=50*bac1+((soDien-50)*bac2);
 }else if(soDien<=200){
  tienDien=50*bac1+(50*bac2)+((soDien-100)*bac3);
 }else if(soDien<=300){
  tienDien=50*bac1+(50*bac2)+(100*bac3)+((soDien-200)*bac4);
 
 }else if(soDien<=400){
  tienDien=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+((soDien-300)*bac5);
  
 }else if(soDien>400){
  tienDien=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+(100*bac5)+((soDien-400)*bac6);
 
 }
  printf("\nSo tien dien la: %.1f VND",tienDien);

}
//
void bai5(){
       int tien;
    int menhGia[9]={500,200,100,50,20,10,5,2,1};
    int soTo=0;
    printf("Nhap so tien muon quy doi(VND):"); scanf("%d",&tien);
    int money=tien;
    for(int i=0;i<9;i++){  
        if(money==menhGia[i]){
            i++;
        }
        if(money>=menhGia[i]){
            soTo= tien/menhGia[i];
            tien-=(soTo*menhGia[i]);
            printf("Co %d to %dk VND\n",soTo,menhGia[i]);
        if(tien==0){
            break;
        }
    }
  }
}

//
void bai6()
{
  float tien,lai,tragop,full;
  printf("nhap so tien muon vay:"); scanf("%f",&tien);
  tragop=tien/12;
  for(int i=1;i<13;i++){
    lai=tien*0.05;
    full = lai+tragop;
    tien=tien-tragop;
    printf(">>Thang %d\n",i);
    printf("Lai phai tra:%.1f\n",lai);
    printf("Goc phai tra:%.1f\n",tragop);
    printf("Lai phai tra:%.1f\n",full);
    printf("So tien con lai:%.1f\n",tien);
  }

}
//
void bai7(){
   double tien=500000;
   double phantram;
   printf("Nhap so phan tram muon vay:"); scanf("%lf",&phantram);
   double tratruoc=tien-(tien*phantram/100);
   double vay=tien-tratruoc;
   double tragop=vay/288;
   double laithang,full;
   vay=tien-tratruoc;
   printf("So tien phai tra truoc la:%lf VND",tratruoc);
   for(int i=1;i<=24;i++){
       printf("\n>>So tien phai tra trong nam %d\n",i);
       for(int j=1;j<=12;j++){
               laithang=vay*0.006;
               full=tragop+laithang;
               vay-=tragop;
               printf("\nSo tien tra trong thang %d:%lf",j,full);
               printf("\nTien con lai:%lf\n",vay);
       }

       printf("\n=========================\n");
   }

}
//
void bai8(){
  struct sinhvien{
    char name[100];
    float diem;
    };
   int n;
   int i; 
   printf("Nhap so sinh vien:"); scanf("%d",&n); 
   fflush(stdin); 
   struct sinhvien sv[50];
   for(i=0;i<n;i++){
     printf("Nhap ten sinh vien %d:",i+1); 
     gets(sv[i].name);
     printf("Nhap diem:"); scanf("%f",&sv[i].diem);
     fflush(stdin); 
   }
   int j; 
   for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
        if(sv[i].diem<sv[j].diem){
          float tmp=sv[i].diem;
          sv[i].diem=sv[j].diem;
          sv[j].diem=tmp;
          
          char temp[100];
          strcpy(temp, sv[j].name);
          strcpy(sv[j].name, sv[i].name);
          strcpy(sv[i].name, temp);
        }
     }
   }
   
   for(i=0;i<n;i++){
     printf("Ten sinh vien la:%s\n",sv[i].name);
     printf("Diem sinh vien la:%.1f\n",sv[i].diem);
     if(sv[i].diem>=9){
       printf("Xuat xac!");
     }else if(sv[i].diem>=8){
       printf("Gioi!");
     }else if(sv[i].diem>=6.5){
       printf("Kha!");
     }else if(sv[i].diem>=5){
       printf("Trung Binh!");
     }else{
       printf("Yeu!");
     }
     printf("\n====================\n");
   }
}
//
    void bai9(){
    time_t seconds;
    seconds = time(NULL);
    srand(seconds);
    int so1 = rand()%15 +1;
    int so2 = rand()%15 +1;
    int So1,So2;
    printf("Nhap so thu nhat:"); scanf("%d",&So1);
    printf("Nhap so thu hai:"); scanf("%d",&So2);
    printf("So may man thu nhat la:%d\n",so1);
    printf("So may man thu hai la:%d",so2);
    if(So1==so1&&So2==so2){
    	printf("Chuc mung ban da trung giai nhat");
	}else if(So1==so1||So2==so2){
		printf("Chuc mung ban da trung giai nhi");
	}else{
		printf("\nChuc ban may man lan sau!");
	}
}
//
int UCLN(int a,int b){
    if(a%b!=0){
        return UCLN(b,a%b);
        
    }else{
        return b;
    }
}
int BCNN(int a,int b){
    return a * b / UCLN(a, b);
}
typedef struct phanso
{
    int tu;
    int mau;
}PS;
PS rutgon(PS a){
    PS c;
    c.tu=a.tu /UCLN(a.tu,a.mau);
    c.mau=a.mau /UCLN(a.tu,a.mau);
    return c;
}
PS cong(PS a,PS b){
    PS c;
    c.tu=a.tu*b.mau+a.mau*b.tu;
    c.mau=a.mau*b.mau;
    c= rutgon(c);
    return c;
}
PS tru(PS a,PS b){
     PS c;
    c.tu = a.tu * b.mau - a.mau * b.tu;
    c.mau = a.mau* b.mau;
    c = rutgon(c);
    return c;
}
PS nhan(PS a, PS b)
{
    PS c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    c = rutgon(c);
    return c;
}
PS chia(PS a, PS b)
{
    PS c;
    c.tu = a.tu * b.mau;
    c.mau = a.mau * b.tu;
    c = rutgon(c);
    return c;
}
void bai10(){
PS a,b,c;
    printf("Nhap phan so thu nhat:"); scanf("%d%d",&a.tu,&a.mau);
    printf("Nhap phan so thu hai:"); scanf("%d%d",&b.tu,&b.mau);
    c=cong(a,b);
    printf("Tong 2 phan so = %d/%d\n",c.tu,c.mau);
    c=tru(a,b);
    printf("Tru 2 phan so = %d/%d\n",c.tu,c.mau);
    c=nhan(a,b);
    printf("tich 2 phan so = %d/%d\n",c.tu,c.mau);
    c=chia(a,b);
    printf("Thuong 2 phan so = %d/%d\n",c.tu,c.mau);
}
//
int main(){
  int baiToan;
  printf("=========Assaignment=========\n");
  printf("Danh sach bai toan:\n");
  printf("1.Kiem tra so co phai so nguyen,nguyen to,chinh phuong\n");
  printf("2.Kiem tra uoc chung,boi chung\n");
  printf("3.Tinh tien Karaoke\n");
  printf("4.Tinh tien dien\n");
  printf("5.Doi tien\n");
  printf("6.Tinh lai suat trong 12 thang\n");
  printf("7.Vay tien mua xe\n");
  printf("8.Thong tin sinh vien\n");
  printf("9.Game FPoly-LOTT\n");
  printf("10.Tinh toan phan so\n");
  printf("Xin moi chon bai toan:");
  scanf("%d",&baiToan);

  switch (baiToan)
  {
  case 1:
    printf("====Kiem tra so nguyen,nguyen to,chinh phuong====\n");
    bai1();
      break;
        
    case 2:
    printf("======Tim BCNN va UCLN======\n");
    bai2();

    break;
    case 3:
    printf("======Tinh tien Karaoke======\n");
    bai3();
    break;

    case 4:
    printf("=======Tinh tien dien=======\n");
    bai4();

    break;

    case 5:
    printf("=======Doi tien=======\n");
    bai5();
    break;

    case 6:
    printf("======Tinh lai suat trong 12 thang======\n");
    bai6();
    break;
  
    case 7:
    printf("======Vay tien mua xe======\n");
    bai7();
    break;
    case 8:
    printf("=====Xep hanh kiem=====\n");
    bai8();
    break;

    case 9:
    printf("======FPOLY-LOTT======\n");
    bai9();
    break;

    case 10:
    printf("=======Tinh toan phan so=======\n");
    bai10();
    break;

    default:
    printf("Xin moi nhap lai!");
      break;

  }


}