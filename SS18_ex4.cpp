#include <stdio.h>
#include <string.h>

int main(){
	struct Student{
		int id;
		char name[50];
		int age;
		char phone[11];
	};
	struct Student Ptit[50];
// Khai bao ho ten, tuoi, so dien thoai cua sinh vien
	for(int i = 1 ; i <= 5 ; i ++){
		Ptit[i].id = i;
		printf("STT %d\n", i);
		printf("Ho va ten : ");
		fgets(Ptit[i].name,sizeof(Ptit[i].name),stdin);
		printf("Tuoi : ");
		scanf("%d", &Ptit[i].age);
		fflush(stdin);
		printf("Sdt : ");
		fgets(Ptit[i].phone,sizeof(Ptit[i].phone),stdin);
	}
//In ra danh sach ra man hinh
	printf("\n\nSTT\tHo va ten\t\tTuoi\t\tSdt\n");
	for(int i = 1 ; i <= 5 ; i++){
		printf(" %d\t", Ptit[i].id);
		printf("%s", Ptit[i].name);
		printf("%d\n", Ptit[i].age);
		printf("%s\n", Ptit[i].phone);
	}
	return 0;
}
