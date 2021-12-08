// FALL 2021 - FPT POLYTECHNIC HCM
// HO TEN: NGUYEN THANH VINH - MSSV: PS23411 - LOP: CP17306
// ASSIGNMENT NHAP MON LAP TRINH
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
//HAM THONG DUNG
void createBorder(int len, int border);
void borderRectangle(int borderLeft, int len, int border, int borderRight);
void insertDot(int n);
int UCLNCua2So(int a, int b);
//MENU
void xuatMenu();
// BAI 1
int kiemTraSoNguyen(float n);
int kiemTraSoChinhPhuong(float n);
int kiemTraSoNguyenTo(float n);
void kiemTraSo();
// BAI 2
int BCNNCua2So(int a, int b);
void timBCNNVaUCLNcua2so();
// BAI 3
void tinhTienKaraoke();
// BAI 4
void tinhTienDien();
// BAI 5
void doiTien();
// BAI 6
void hienThiBangThongKe(int a, int b, int c, int d, int e);
void tinhLaiSuatVay();
// BAI 8
void printEmptyList();
void nhapSV(struct SinhVien ds[], int n);
char *hocLuc(double diem);
void xuatSV(struct SinhVien ds[], int n);
void sapXepGiamDan(struct SinhVien ds[], int n);
void themSV(struct SinhVien ds[], int n);
void xoaSV(struct SinhVien ds[], int n);
void timSVCoDiemCaoNhatVaThapNhap(struct SinhVien ds[], int n);
void timSVTheoTen(struct SinhVien ds[], int n);
void timSVTheoTenNangCao(struct SinhVien ds[], int n); // Chi can nhap cac ky tu co lien quan toi ten SV
void suaDiemSinhVien(struct SinhVien ds[], int n);
void hienThiBieuDo(struct SinhVien ds[], int n);
void quanLySinhVien();
// BAI 9
void xayDungGameLOTT();
// BAI 10
typedef struct PhanSo PHANSO;
void nhapPhanSo(PHANSO *ps);
void xuatPhanSo(PHANSO ps);
void rutGonPS(PHANSO *ps);
void xuatCongThuc(char s[10], PHANSO ps1, PHANSO ps2, char c);
void phepCong(PHANSO a, PHANSO b);
void phepTru(PHANSO a, PHANSO b);
void phepNhan(PHANSO a, PHANSO b);
void phepChia(PHANSO a, PHANSO b);
void tinhToanPhanSo();

int main(){
	xuatMenu();
	return 0;
}
// TAO VIEN
void createBorder(int len, int border){
	for(int i=0; i<len; i++) {
	    printf("%c",border);
	}
}
void borderRectangle(int borderLeft, int len, int border, int borderRight){
	printf("\t\t%c",borderLeft);
	createBorder(len,border);
	printf("%c",borderRight);
}
// CHEN THEM DAU '.'
void insertDot(int n){
    if (n < 1000) {
        printf ("%d", n);
        return;
    }
    insertDot(n/1000);
    printf (".%03d", n%1000);
}
// TIM USCLN CUA 2 SO
int UCLNCua2So(int a, int b){
	int r=0;
	while(b!=0){
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}
// MENU
void xuatMenu(){
	char check;
    int luachon;
	do{
		system("cls");		
	//MENU
		printf("\n\t\t\t\tMENU\n");
		printf("    %c",201);
	    createBorder(58,205);
	    printf("%c\n",187);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t1.  Kiem tra so nguyen\t\t\t\t       %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t2.  Tim USCLN va BSCNN cua 2 so\t\t\t       %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t3.  Tao chuong trinh tinh tien cho quan Karaoke\t       %c",186,186);
	    printf("    %c",218);
		createBorder(29,196);
	    printf("%c\n",191);
	    printf("    %c\t\t\t\t\t\t\t       %c",186,186);
	    printf("    %c  Ho ten: Nguyen Thanh Vinh  %c\n",179,179);
	    printf("    %c\t4.  Tao chuong trinh tinh tien dien\t\t       %c",186,186);
	    printf("    %c  MSSV: PS23411\t\t  %c\n",179,179);
	    printf("    %c\t\t\t\t\t\t\t       %c",186,186);
	    printf("    %c  Lop: CP17306\t\t  %c\n",179,179);
	    printf("    %c\t5.  Tao chuc nang doi tien\t\t\t       %c",186,186);
	    printf("    %c",192);
	    createBorder(29,196);
	    printf("%c\n",217);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t6.  Xay dung chuong trinh tinh lai suat vay tra gop    %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t7.  Xay dung chuong trinh vay tien mua xe\t       %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t8.  Sap xep thong tin sinh vien\t\t\t       %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t9.  Xay dung game FPOLY-LOTT\t\t\t       %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t10. Xay dung chuong trinh tinh toan phan so\t       %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c\t0.  Thoat chuong trinh\t\t\t\t       %c\n",186,186);
	    printf("    %c\t\t\t\t\t\t\t       %c\n",186,186);
	    printf("    %c",200);
	    createBorder(58,205);
	    printf("%c\n\n",188);
    	// NHAP LUA CHON
    	printf("\tMoi ban nhap chuong trinh (0-10): ");
    	scanf("%d", &luachon);
    	fflush(stdin);
    	printf("\n");
    	switch(luachon){
    		case 1: 
    			kiemTraSo();
    			break;
    		case 2:
    			timBCNNVaUCLNcua2so();
    			break;
    		case 3:
    			tinhTienKaraoke();
    			break;
    		case 4:
    			tinhTienDien();
    			break;
    		case 5:
    			doiTien();
    			break;
    		case 6:
    			tinhLaiSuatVay();
    			break;
    		case 7:
    			printf("\tBAI NAY DUOC GIAM TAI.\n\n");
    			break;
    		case 8:
    			quanLySinhVien();
    			break;
    		case 9:
    			xayDungGameLOTT();
    			break;
    		case 10:
    			tinhToanPhanSo();
    			break;
    		case 0:
    			printf("\tCHUONG TRINH KET THUC!\n\n");
    			return;
    		default:
    			printf("  GIA TRI NHAP KHONG TON TAI, VUI LONG NHAP LAI!\n\n");
		}
		printf("\n\t\tNhan ENTER de tiep tuc...");
		getch();
	}while(true);
}

////////// BAI 1: KIEM TRA SO NGUYEN ////////////
int kiemTraSoNguyen(float n){
	return (n==(int)n) ? 1:0;
}
int kiemTraSoNguyenTo(float n){
	int count=0;
	if(n==(int)n){
		if((int)n<=1){
			return 0;
		}
		for(int i=2; i<=sqrt(n); i++){ // DAT DIEU KIEN <= SQRT(N) DUYET IT HON
			if((int)n%i==0){
				return 0;
			}
		}
		return 1;
	}
	else{
		return 0;
	}
}
int kiemTraSoChinhPhuong(float n){
	int flag=0;
	for(int i=0; i<=sqrt(n); i++){
		if(i==sqrt(n)){
			flag=1;
		}
	}
	return (flag==1) ? 1:0;
}
void kiemTraSo(){
	float n;
	borderRectangle(218,21,196,191);
	printf("\n\t	%c KIEM TRA SO NGHUYEN %c\n",179,179);
	borderRectangle(192,21,196,217);
	printf("\n\n  Nhap mot so nguyen: ");
	scanf("%f",&n);
	printf("\n");
	createBorder(40,196);
	printf("\n\n  KET QUA: \n\n");
	//Kiem tra so nguyen
	if(kiemTraSoNguyen(n)){
		printf("  %g la mot so nguyen.\n", n);
	}else{
		printf("  %g ko phai la mot so nguyen.\n", n);
	}
	//Kiem tra so nguyen to
	if(kiemTraSoNguyenTo(n)){
		printf("  %g la so nguyen to.\n",n);
	}else {
		printf("  %g khong phai la so nguyen to.\n",n);
	}
	//Kiem tra so chinh phuong
	if(kiemTraSoChinhPhuong(n)){
		printf("  %g la so chinh phuong.\n\n", n);
	}else {
		printf("  %g khong phai la so chinh phuong.\n\n", n);
	}
	createBorder(40,196);
	printf("\n");
}
////////// HET BAI 1 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 2: TIM USCLN VA BSCNN CUA 2 SO ////////////
int BCNNCua2So(int a, int b){
	return (a*b)/UCLNCua2So(a,b);
}

void timBCNNVaUCLNcua2so(){
	int a,b;
	borderRectangle(218,27,196,191);
	printf("\n\t\t%c TIM UCLN VA BCNN CUA 2 SO %c\n",179,179);
	borderRectangle(192,27,196,217);
	printf("\n  Nhap a: ");
	scanf("%d", &a);
	printf("  Nhap b: ");
	scanf("%d", &b);
	printf("\n");
	createBorder(50,196);
	printf("\n\n  Uoc so chung lon nhat chua %d va %d la %d.\n\n",a, b, UCLNCua2So(a,b));
	printf("  Boi so chung nho nhat chua %d va %d la %d.\n\n",a, b, BCNNCua2So(a,b));
	createBorder(50,196);
	printf("\n");
}
////////// HET BAI 2 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 3: TINH TIEN CHO QUAN KARAOKE////////////
void tinhTienKaraoke(){
	int gioDau, gioKetThuc, khoangThoiGian;
	double tongTien;
	int gia1Tieng = 150000;
	int gia3Tieng = gia1Tieng*3;
	borderRectangle(218,24,196,191);
	printf("\n\t\t%c TINH TIEN QUAN KARAOKE %c\n",179,179);
	borderRectangle(192,24,196,217);
	printf("\n\n  Nhap gio bat dau: ");
	scanf("%d", &gioDau);
	printf("  Nhap gio ket thuc: ");
	scanf("%d", &gioKetThuc);
	printf("\n");
	createBorder(55,196);
	if(gioDau > gioKetThuc){
		printf("\n\n  Gio khong hop le!\n\n");
	}
	else{
		if(gioDau<12 || gioKetThuc>23) {
			printf("\n\n  Quan khong hoat dong!\n\n");
		}
		else{
			khoangThoiGian = gioKetThuc - gioDau;
			if(khoangThoiGian<=3){
				tongTien = khoangThoiGian*gia1Tieng;
			}else {
				tongTien = gia3Tieng + (khoangThoiGian-3)*gia1Tieng*0.7;
			}
			if(gioDau>=14&&gioDau<=17){
				tongTien = tongTien*0.9;
			}
				printf("\n\n  Gia Karaoke sau khi ket thuc %d tieng: ", khoangThoiGian, gioDau);
				insertDot((int)tongTien);
				printf(" VND.\n\n");
		}	
	}
	createBorder(55,196);
	printf("\n\n");
}
////////// HET BAI 3 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 4: TINH TIEN DIEN ////////////
void tinhTienDien(){
	double soDien, soTien;
	borderRectangle(218,20,196,191);
	printf("\n\t\t%c TINH GIA TIEN DIEN %c\n",179,179);
	borderRectangle(192,20,196,217);
	printf("\n\n  Nhap so dien su dung: ");
	scanf("%lf", &soDien);
	printf("\n");
	if(soDien<0){
		printf("  So dien khong hop le!\n\n");
	}
	else{
		if(soDien<=50){
			soTien = 1678 * soDien;
		}
		else if(soDien<=100){
			soTien = 50*1678 + 1734*(soDien-50);
		}
		else if(soDien<=200){
			soTien = 50*1678 + 50*1734 + 2014*(soDien-100); 
		}
		else if(soDien<=300){
			soTien = 50*1678 + 50*1734 + 100*1014 + 2536*(soDien-200); 
		}
		else if(soDien<=400){
			soTien = 50*1678 + 50*1734 + 100*1014 + 100*2536 + (soDien-300)*2834; 
		}
		else{
			soTien = 50*1678 + 50*1734 + 100*1014 + 100*2536 + 100*2834 + (soDien-400)*2927;
		}
		createBorder(40,196);
		printf("\n\n  So tien can phai tra: ");
		insertDot(int(soTien));
		printf(" VND.\n\n");
		createBorder(40,196);
		printf("\n\n");
	}
}
////////// HET BAI 4 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 5: XAY DUNG CHUC NANG DOI TIEN ////////////
void doiTien(){
	int giaTriTien[9] = {500,200,100,50,20,10,5,2,1};
	int soTien;
	int soLuongTien[9] = {0};
	borderRectangle(218,10,196,191);
	printf("\n\t\t%c DOI TIEN %c\n",179,179);
	borderRectangle(192,10,196,217);
	printf("\n\n  Nhap so tien muon doi: ");
	scanf("%d", &soTien);
	printf("\n");
	createBorder(20,196);
	printf("\n\n  To %d co: \n\n", soTien);
	int i=0; // VD: SO TIEN = 500
	// DUYET QUA MANG GIA TRI TIEN, NEU LON NHON 1 GIA TRI GAN NHAT THI DUNG VONG LAP
	while(i<9){		
		if(soTien>giaTriTien[i]){   // I = 0 -> 500>500(FALSE)
			break;					// I = 1-> 500>200(TRUE) -> END LOOP I = 1
		}
		i++;
	}
	for(;i<9; i++){										// DUYET TU I = 1 TOI 9
		if(soTien>0)									// 500>0
			soLuongTien[i] = soTien / giaTriTien[i];	// SO LUONG = 500 / 200 = 2
			soTien %= giaTriTien[i];					// SO TIEN = 500 % 200 = 100				
	}													// -> QUAY LAI VONG LAP
	for(int i=0; i<9; i++){
		if(soLuongTien[i]>0){
			printf("   . %d co %d\n",soLuongTien[i], giaTriTien[i]);
		}
	}	
	printf("\n");
	createBorder(20,196);
	printf("\n\n");
}
////////// HET BAI 5 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 6: TINH LAI SUAT VAY TRA GOP ////////////
void hienThiBangThongKe(int kyHan , double laiPhaiTra, double gocPhaiTra, double tienPhaiTra, double tienConLai){
    printf("     %02d\t\t   ", kyHan);
    insertDot((int)laiPhaiTra);
    printf("\t\t");
    insertDot((int)gocPhaiTra);
    printf("\t\t");
    insertDot((int)tienPhaiTra);
    printf("\t\t");
    insertDot((int)tienConLai);
    printf("\n  ");
}
void tinhLaiSuatVay(){
	double tienVay;
	double laiPhaiTra, gocPhaiTra, tienPhaiTra;
	borderRectangle(218,23,196,191);
	printf("\n\t\t%c TINH LAI SUAT TRA GOP %c\n",179,179);
	borderRectangle(192,23,196,217);
	printf("\n\n   Nhap tien muon vay: ");
	scanf("%lf", &tienVay);
	gocPhaiTra = tienVay/12;
	printf("\n  SO TIEN PHAI TRA TRONG 12 THANG\n");
	printf("\n   Ky han\tLai phai tra\t      Goc phai tra\t    So tien phai tra\t     So tien con lai\n  ");
	createBorder(100,196);
	printf("\n");
	for (int i = 1; i <= 12; i++){
	 	laiPhaiTra = tienVay * 0.05;
	 	tienPhaiTra = gocPhaiTra + laiPhaiTra;
	 	tienVay -= gocPhaiTra; // SO TIEN CON LAI
	 	hienThiBangThongKe(i,laiPhaiTra,gocPhaiTra,tienPhaiTra,tienVay);
	 	createBorder(100,196);
		printf("\n");
	}
	printf("\n");
}
////////// HET BAI 6 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 8: HIEN THI THONG TIN SINH VIEN ////////////
struct SinhVien{
	char tenSV[50];
	double diem;
};
void printEmptyList(){
	printf("\n\tDanh sach sinh vien trong, vui long nhap sinh vien!\n");
}
void quanLySinhVien(){
	int choice;
	int n=0;
	struct SinhVien ds[50];
	do{
		system("cls");
		printf("\n\t%c",218);
		createBorder(56,196);
		printf("%c",191);
		printf("\n\t%c\t        QUAN LY SINH VIEN%25c\n",179,179);
		printf("\t%c  1.  Nhap sinh vien%37c\n",179,179);
		printf("\t%c  2.  Xuat danh sach sinh vien%27c\n",179,179);
		printf("\t%c  3.  Sap xep sinh vien giam dan%25c\n",179,179);
		printf("\t%c  4.  Them sinh vien%37c\n",179,179);
		printf("\t%c  5.  Xoa sinh vien%38c\n",179,179);
		printf("\t%c  6.  Hien thi sinh vien co diem cao nhat va thap nhat%3c\n",179,179);
		printf("\t%c  7.  Tim sinh vien theo ten%29c\n",179,179);
		printf("\t%c  8.  Tim sinh vien nang cao%29c\n",179,179);
		printf("\t%c  9.  Sua diem sinh vien%33c\n",179,179);
		printf("\t%c  10. Hien thi bieu do%35c\n",179,179);
		printf("\t%c  0.  Thoat chuong trinh%33c\n",179,179);
		printf("\t%c",192);
		createBorder(56,196);
		printf("%c",217);
		printf("\n\n\tNhap chuc nang: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\n\tNhap so luong sinh vien: ");
				scanf("%d",&n);
				nhapSV(ds,n);
				break;
			case 2:
				if(n==0){
					printEmptyList();
				}else{
					xuatSV(ds,n);
				}
				break;
			case 3:
				if(n==0){
					printEmptyList();
				}else{
					sapXepGiamDan(ds,n);
					printf("\n\tSAP XEP THANH CONG, CHON 2 DE XUAT DANH SACH!\n\n");
				}
				break;
			case 4:
				themSV(ds,n);
				n++;
				break;
			case 5:
				if(n==0){
					printf("\n\tKHONG CO SINH VIEN DE XOA\n\n");
				}else{
					xoaSV(ds,n);
					n--;
				}
				break;
			case 6:
				if(n==0){
					printEmptyList();
				}else{
					timSVCoDiemCaoNhatVaThapNhap(ds,n);
				}	
				break;
			case 7:
				if(n==0){
					printEmptyList();
				}else{
					timSVTheoTen(ds,n);
				}
				break;
			case 8:
				if(n==0){
					printEmptyList();
				}else{
					timSVTheoTenNangCao(ds,n);
				}	
				break;
			case 9:
				if(n==0){
					printEmptyList();
				}else{
					suaDiemSinhVien(ds,n);
				}			
				break;
			case 10:
				if(n==0){
					printEmptyList();
				}else{
					hienThiBieuDo(ds,n);
				}			
				break;
			case 0:
				printf("\n\tChuong trinh ket thuc!\n\n");
				return;
				break;
			default:
				printf("\n\tGia tri khong hop le, vui long nhap lai!\n\n");
		}
		
		printf("\n\tNhan ENTER de chon chuc nang khac...");
		getch();
	}while(true);
}
void nhapSV(struct SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		fflush(stdin);
		printf("\n");
		printf("\tSinh vien %d:\n",i+1);
		printf("\tTen: ");
		gets(ds[i].tenSV);
		printf("\tDiem: ");
		scanf("%lf",&ds[i].diem);
	}
	printf("\n\t\tNHAP HOAN TAT, CHON 2 DE XUAT DANH SACH!\n");
}
char *hocLuc(double diem){
	char *kq;
	if(diem>=9){
		kq = "Xuat Sac";
	}else if(diem>=8){
		kq = "Gioi";
	}else if(diem>=6.5){
		kq = "Kha";
	}else if(diem>=5){
		kq = "Trung Binh";
	}else{
		kq = "Yeu";
	}
}

void xuatSV(struct SinhVien ds[], int n){
	printf("\n\t\t\t\tDANH SACH SINH VIEN\n\n\n");
	printf("\tSTT\t%c\tHO VA TEN\t%c\tDIEM\t%c\tHOC LUC\n",179,179,179,179);
	printf("\t\t%c\t\t\t%c\t\t%c\n",179,179,179,179);
	for(int i=0; i<n; i++){
		printf("\t%02d\t%c\t%s\t\t%c\t%.1lf\t%c\t%s\n",i+1,179,ds[i].tenSV,179,ds[i].diem,179,hocLuc(ds[i].diem));
		printf("\t\t%c\t\t\t%c\t\t%c\n",179,179,179,179);
	}
	printf("\n");
}

void sapXepGiamDan(struct SinhVien ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diem < ds[j].diem){
				struct SinhVien temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

void themSV(struct SinhVien ds[], int n){
	fflush(stdin);
	printf("\n\tSinh vien %d:\n",n+1);
	printf("\tTen: ");
	gets(ds[n].tenSV);
	printf("\tDiem: ");
	scanf("%lf",&ds[n].diem);
	printf("\n\tTHEM SINH VIEN THANH CONG, CHON 2 DE XUAT DANH SACH!\n\n");
}

void xoaSV(struct SinhVien ds[], int n){
	xuatSV(ds,n);
	int pos;
	printf("\n\tNhap vi tri can xoa: ");
	scanf("%d",&pos);
	printf("\n\tXOA THANH CONG SINH VIEN TEN %s, CHON 2 DE XUAT LAI DANH SACH!\n\n",strupr(ds[pos-1].tenSV));
	for(int i=pos-1; i<n-1; i++){
		ds[i] = ds[i+1];
	}
}

void timSVCoDiemCaoNhatVaThapNhap(struct SinhVien ds[], int n){
	sapXepGiamDan(ds,n);
	printf("\n\tSinh vien co diem cao nhat:\n\n");
	double max = ds[0].diem;
	for(int i=0; i<n; i++){
		if(max == ds[i].diem){
			printf("\t\t%02d\tTen: %s\t\tDiem: %.1lf\n\n",i+1,ds[i].tenSV,ds[i].diem);
		}
	}
	printf("\tSinh vien co diem thap nhat:\n\n");
	double min = ds[n-1].diem;
	int dem=0;
	for(int i=n-1; i>0; i--){
		if(min == ds[i].diem){
			dem++;
			printf("\t\t%02d\tTen: %s\t\tDiem: %.1lf\n\n",dem,ds[i].tenSV,ds[i].diem);
		}
	}
}

void timSVTheoTen(struct SinhVien ds[], int n){
	char name[30];
	struct SinhVien dsMoi[30];
	int k=0;
	fflush(stdin);
	printf("\n\tNhap ten sinh vien muon tim: ");
	gets(name);
	strlwr(name);
	int flag = -1;
	for(int i=0; i<n; i++){
		if(strcmp(strlwr(ds[i].tenSV),name)==0){
			dsMoi[k] = ds[i];
			k++;
			flag = 1;
		}
	}
	if(flag == -1){
		printf("\n\tKHONG TIM THAY TEN SINH VIEN TRONG DANH SACH!\n\n");
	}else{
		printf("\n\tKET QUA: \n");
		xuatSV(dsMoi,k);
	}
}

void timSVTheoTenNangCao(struct SinhVien ds[], int n){
	struct SinhVien dsMoi[30];
	int k=0;
	char name[50];
	fflush(stdin);
	printf("\n\tNhap cac ky tu muon tim: ");
	gets(name);
	strlwr(name); // DUNG STRLWR CHO 2 CHUOI DE TOI UU VIEC TIM KIEM
	int flag=0;
	for(int i=0; i<n; i++){
		if(strstr(strlwr(ds[i].tenSV),name)!=NULL){
			dsMoi[k] = ds[i];
			k++;
			flag=1;
		}
	}
	if(flag == 0){
		printf("\n\tKHONG TIM THAY KY TU PHU HOP TRONG DANH SACH!\n\n");
	}else{
		printf("\n\tCAC KET QUA TIM DUOC: \n");
		xuatSV(dsMoi,k);
	}
}

void suaDiemSinhVien(struct SinhVien ds[], int n){
	int pos;
	xuatSV(ds,n);
	printf("\n\tNhap vi tri sinh vien muon sua diem: ");
	scanf("%d",&pos);
	fflush(stdin);
	
	if(pos<1||pos>n){
		printf("\n\tKhong tim thay vi tri nay.\n\n");
	}else{
		printf("\n\tNhap diem moi: ");
		scanf("%lf",&ds[pos-1].diem);
		printf("\n\tSUA DIEM THANH CONG CHO SINH VIEN TEN %s, ",strupr(ds[pos-1].tenSV));
		printf("CHON 2 DE XUAT LAI DANH SACH!\n\n");
		fflush(stdin);
	}
}

void hienThiBieuDo(struct SinhVien ds[], int n){
	printf("\n\tHIEN THI BIEU DO\n\n\n");
	for(int i=0; i<n; i++){
		printf("\t  %.2lf   ",ds[i].diem);
		for(float j=0; j<ds[i].diem*3; j++){
			printf("%c",178);
		}
		printf("  %s\n\n",strupr(ds[i].tenSV));
		
		printf("\n");	
	}
}
////////// HET BAI 8 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 9: XAY DUNG GAME FPOLY-LOTT ////////////
void xayDungGameLOTT(){
	int so1, so2;
    int soTrungGiai1, soTrungGiai2;
    int check = 0;
	borderRectangle(218,26,196,191);
    printf("\n\t\t%c XAY DUNG GAME FPOLY-LOTT %c\n",179,179);
    borderRectangle(192,26,196,217);
    printf("\n\n");
    do{
        printf("  Nhap so may man (1-15): \n");
        printf("  Nhap so 1: ");
        scanf("%d", &so1);
        printf("  Nhap so 2: ");
        scanf("%d", &so2);
        check = (so1<1||so1>15)&&(so2<1||so2>15);
        if(check != 0) {
            printf("  Gia tri khong hop le, vui long nhap lai!\n\n");
        }
    }while (check!=0);
    
    srand((int)time(0));
    soTrungGiai1 = 1+rand()%15;// MAC DINH LA 0-14 NEN PHAI +1
    soTrungGiai2 = 1+rand()%15;
    printf("\n");
    createBorder(45,196);
    printf("\n\n  So trung giai lan luot la %d va %d.\n\n", soTrungGiai1,soTrungGiai2);   

    if((so1==soTrungGiai1&&so2==soTrungGiai2)||(so1==soTrungGiai2&&so2==soTrungGiai1)){
        printf("  KET QUA: CHUC MUNG BAN DA TRUNG GIAI NHAT!\n\n");
    }
    else if((so1==soTrungGiai1||so2==soTrungGiai2)||(so1==soTrungGiai2||so2==soTrungGiai1)){
        printf("  KET QUA: CHUC MUNG BAN DA TRUNG GIAI NHI!\n\n");
    }
    else {
        printf("  KET QUA: CHUC BAN MAY MAN LAN SAU!\n\n");
    }
    createBorder(45,196);
	printf("\n\n");
}
////////// HET BAI 9 ////////////

//-----------------------------------------------------------------------------------

////////// BAI 10: TINH TOAN PHAN SO ////////////
struct PhanSo{
	int tuSo, mauSo;
};

void tinhToanPhanSo(){
	PHANSO ps1,ps2;	
	borderRectangle(218,19,196,191);
	printf("\n\t\t%c TINH TOAN PHAN SO %c\n",179,179);
	borderRectangle(192,19,196,217);
	// INPUT
	printf("\n\n\tNhap phan so 1:\n");
	nhapPhanSo(&ps1);
	printf("\tNhap phan so 2:\n");
	nhapPhanSo(&ps2);
	// END INPUT
	printf("\tPS1: ");
	xuatPhanSo(ps1);
	printf("	PS1 da rut gon: ");
	rutGonPS(&ps1);
	printf("\n\tPS2: ");
	xuatPhanSo(ps2);
	printf("	PS2 da rut gon: ");
	rutGonPS(&ps2);
	printf("\n\n");
	// OUPUT
	createBorder(45,196);
	printf("\n\n     KET QUA:\n");
	// PHEP CONG
	xuatCongThuc("Cong",ps1,ps2,'+');
	phepCong(ps1,ps2);
	printf("\n");
	// PHEP TRU
	xuatCongThuc("Tru",ps1,ps2,'-');
	phepTru(ps1,ps2);
	printf("\n");
	// PHEP NHAN
	xuatCongThuc("Nhan",ps1,ps2,'*');
	phepNhan(ps1,ps2);
	printf("\n");
	// PHEP CHIA
	if(ps2.tuSo==0){
		printf("\n\tPhan so khong chia duoc cho 0.");
	}else{
		xuatCongThuc("Chia",ps1,ps2,':');
		phepChia(ps1,ps2);
		
	}
	printf("\n\n");
	createBorder(45,196);	
	printf("\n\n");
}

void nhapPhanSo(PHANSO *ps){
	printf("\tTu so: ");
	scanf("%d",&ps->tuSo);
	do{
		printf("\tMau so: ");
		scanf("%d",&ps->mauSo);
		if(ps->mauSo==0){
			printf("\tPhan so khong hop le vi mau so phai khac 0\n\tVui long nhap lai mau so!\n\n");
		}
	}while(ps->mauSo==0);
	
	printf("\n");
}

void xuatPhanSo(PHANSO ps){
	printf("%d/%d",ps.tuSo,ps.mauSo);
}

void rutGonPS(PHANSO *ps){
	int ucln = UCLNCua2So(abs(ps->tuSo),abs(ps->mauSo)); 
							// DE GIA TRI TUYET DOI DE TRANH UCLN =-1
	if(ps->mauSo<0){		// XET DIEU KIEN NEU MAU = 0 THI CHUYEN DAU TRU LEN TREN
		ps->tuSo *= -1;
		ps->mauSo *= -1;
	}
	ps->tuSo /= ucln;
	ps->mauSo /= ucln;
	if(ps->tuSo%ps->mauSo==0){
		printf("%d",ps->tuSo/ps->mauSo);
	}else{
		xuatPhanSo(*ps);
	}
}

void xuatCongThuc(char s[10], PHANSO ps1, PHANSO ps2, char c){
	printf("\n\tPhep %s: ",s);
	rutGonPS(&ps1);
	printf(" %c ",c);
	rutGonPS(&ps2);
	printf(" = ");
}

void phepCong(PHANSO a, PHANSO b){
	struct PhanSo phepCong;
	phepCong.tuSo = a.tuSo*b.mauSo + b.tuSo*a.mauSo;
	phepCong.mauSo = a.mauSo*b.mauSo;
	rutGonPS(&phepCong);
}

void phepTru(PHANSO a, PHANSO b){
	struct PhanSo phepTru;
	phepTru.tuSo = a.tuSo*b.mauSo - b.tuSo*a.mauSo;
	phepTru.mauSo = a.mauSo*b.mauSo;
	rutGonPS(&phepTru);
}

void phepNhan(PHANSO a, PHANSO b){
	struct PhanSo phepNhan;
	phepNhan.tuSo = a.tuSo*b.tuSo;
	phepNhan.mauSo = a.mauSo*b.mauSo;
	rutGonPS(&phepNhan);
}

void phepChia(PHANSO a, PHANSO b){
	struct PhanSo phepChia;
	phepChia.tuSo = a.tuSo*b.mauSo;
	phepChia.mauSo = a.mauSo*b.tuSo;
	rutGonPS(&phepChia);	
}
////////// HET BAI 10 ////////////

//                      THE END.                //
