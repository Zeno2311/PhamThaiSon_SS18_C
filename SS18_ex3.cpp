#include <stdio.h>
#include <string.h>

int main(){
	struct Student{
		char name[50];
		int age;
		char phone[25];
	};
	for(int i = 0 ; i < 5 ; i++){
		struct Student user[i];
		printf("\nSinh vien %d\n", i+1);
		printf("\tMoi ban nhap ten : ");
		fgets(user[i].name,sizeof(user[i].name),stdin);
		printf("\tMoi ban nhap tuoi : ");
		scanf("%d", &user[i].age);
		printf("\tMoi ban nhap so dien thoai : ");
		fflush(stdin);
		fgets(user[i].phone,sizeof(user[i].phone),stdin);
	}
	return 0;
}
