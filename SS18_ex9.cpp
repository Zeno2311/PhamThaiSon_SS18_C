#include <stdio.h>
#include <string.h>
//Khai bao ham trong menu
void displayMenu();
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();
void menu7();
//khai bao bien
int choice, n = 5;
//Khai bao struct dish menu
struct Dish{
	int id;
	char name[50];
	int price;
};
//Gan 5 phan tu vao trong menu
struct Dish menu[5]={
	{1,"Banh mi",500000},
	{2,"Xoi xeo",10000},
	{3,"Oc xao",15000},
	{4,"Banh xeo",20000},
	{5,"Bun ca cay",25000},
	
};

int main(){
	do{
		displayMenu();
		switch(choice){
			case 1:
				menu1();
				break;
			case 2:
				menu2();
				break;
			case 3:
				menu3();
				break;
			case 4:
				menu4();
				break;	
			case 5:
				menu5();
				break;
			case 6:
				menu6();
				break;
			case 7:
				menu7();
				break;
		}
	}while(choice != 7);
	return 0;
}
//Menu chuong trinh
void displayMenu(){
	printf("\n\t--MENU--\n");
	printf("1.In ra cac phan tu co trong menu mon an.\n");
	printf("2.Them phan tu vao vi tri chi dinh.\n");
	printf("3.Sua phan tu o vi tri chi dinh.\n");
	printf("4.Xoa phan tu o vi tri chi dinh.\n");
	printf("5.Sap xep cac phan tu.\n");
	printf("6.Tim kiem phan tu theo name nhap vao\n");
	printf("7.Thoat.\n");
	printf("---> Lua chon cua ban : ");
	scanf("%d", &choice);
}
//menu1 in cac phan tu ban dau
void menu1(){
	for(int i = 0 ; i < n ;i++){
		printf("%d. %s : %dVND\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
//menu2 them phan tu vao vi tri chi dinh
void menu2(){
		menu[n].id = 6;
		printf("Mon an ban muon them : ");
		fflush(stdin);
		fgets(menu[n].name,sizeof(menu[n].name),stdin);
		menu[n].name[strcspn(menu[n].name, "\n")] = 0;
		printf("Gia tien cua mon an : ");
		scanf("%d", &menu[n].price);
		n++;
	for(int i = 0 ; i < n ; i++){
		printf("%d. %s : %dVND\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
//menu3 sua phan tu cuoi
void menu3(){
	int fixmenu;
	int addmenu;
	printf("Ban muon sua mon an thu may : ");
	scanf("%d", &fixmenu);
	fflush(stdin);
	printf("\nMoi ban nhap mon an moi : ");
	fgets(menu[fixmenu].name,sizeof(menu[fixmenu].name),stdin);
	menu[fixmenu].name[strcspn(menu[fixmenu].name, "\n")] = 0;
	printf("Gia tien cua mon an : ");
	scanf("%d", &menu[fixmenu].price);
	printf("\nMenu sau khi sua mon an theo yeu cau : \n");
	for(int i = 0 ; i <= 5 ; i++){
		printf("%d. %s : %dVND\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
//menu4 xoa phan tu cuoi
void menu4(){
	n--;
	printf("Sau khi xoa phan tu moi them vao : \n");
	for(int i = 0 ; i < n ; i++){
		printf("%d. %s : %dVND\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
//menu5 sap xep cac phan tu ( chua lam duoc )
void menu5(){
	for(int i = 0 ; i < 4 ; i++){
		if(menu[i].price > menu[i + 1].price){
			int temp = menu[i].price;
			menu[i].price = menu[i + 1].price;
			menu[i + 1].price = temp;
		}
	}
	for(int i = 0 ; i < 5 ;i++){
		printf("%d. %s : %dVND\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
//menu6 tim kiem phan tu theo ten 
void menu6(){
	fflush(stdin);
	char scheck_menu[50];
	int check = 0;
	printf("Ban muon tim mon an nao : ");
	fgets(scheck_menu,sizeof(scheck_menu),stdin);
	scheck_menu[strcspn(scheck_menu, "\n")] = 0;
	for(int i = 0 ; i <= n ; i++){
		if(strcmp(menu[i].name, scheck_menu)==0){
			printf("\nMon an ban dang tim : %d. %s : %d",menu[i].id,menu[i].name,menu[i].price);
			check++;
			break;
		}
	}
	if(check == 0){
		printf("Khong co mon ban tim");
	}
}
//menu7 thoat khoi chuong trinh
void menu7(){
	printf("\nBan dang thoat khoi chuong trinh.\n");
	for(int i = 0 ; i < 4 ; i++){
		printf("|\n");
	}
	printf("Hen gap lai.");
}
	
