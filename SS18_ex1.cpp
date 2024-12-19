#include <stdio.h>
#include <string.h>

int main(){
	struct Sinhvien{
		char name[50];
		int age;
		char phoneNumber[25];
	};
	//Khoi tao
	struct Sinhvien user01;
	//Nhap ho va ten
	printf("Moi ban nhap ho va ten : ");
	fgets(user01.name,sizeof(user01.name),stdin);
	//Nhap tuoi
	printf("Moi ban nhap tuoi : ");
	scanf("%d", &user01.age);
	//Nhap so dien thoai
	printf("Moi ban nhap so dien thoai : ");
	fflush(stdin);
	fgets(user01.phoneNumber,sizeof(user01.phoneNumber),stdin);
	printf("\n\n\n");
	//In ra cac gia tri ma nguoi dung vua nhap vao
	printf("Thong tin ban vua nhap vao :\n");
	printf("%s", user01.name);
	printf("%d\n", user01.age);
	printf("%s\n", user01.phoneNumber);
	return 0;
}
