#include <stdio.h>
#include <string.h>

int main(){
	struct Sinhvien{
		char name[50];
		int age;
		char phone[25];
	};
	struct Sinhvien ptit;
	printf("Moi ban nhap ho ten :\n");
	fgets(ptit.name,sizeof(ptit.name),stdin);
	printf("Moi ban nhap tuoi :\n");
	scanf("%d", &ptit.age);
	printf("Moi ban nhap so dien thoai :\n");
	fflush(stdin);
	fgets(ptit.phone,sizeof(ptit.phone),stdin);
	printf("\n\n\n\n");
	printf("%s", ptit.name);
	printf("%d\n", ptit.age);
	printf("%s", ptit.phone);
	return 0;
}
