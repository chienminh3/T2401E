#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

struct student {
	char name[MAX_NAME_LENGTH];
	int age;
	char address[MAX_NAME_LENGTH];
};

//input thong tin sinh vien
void inputStudentInfo(struct student *student, int index) {
	printf("\nNHAP THONG TIN SINH VIEN %d:\n", index+1);
	printf("TEN: ");
	fgets(student->name, MAX_NAME_LENGTH, stdin);
	student->name[strcspn(student->name, "\n")] = '\0';
	
	printf("TUOI: ");
	scanf("%d", &student->age);
	getchar();
	
	printf("DIA CHI: ");
	fgets(student->address, MAX_NAME_LENGTH, stdin);
}

//luu thong tin sinh vien vao file
void saveInforStudent(struct student *student, int numberStudent) {
	FILE *filePointer;
	filePointer = fopen("Session11.txt", "a");//mo file va ghi mode "a"
	
	//ghi thong tin sinh vien vao tep
	for (int i = 0; i < numberStudent; i++) {
		fprintf(filePointer, "Ten: %s, Tuoi: %d, Dia chi: %s", student[i].name, student[i].age, student[i].address);
	}
	fclose(filePointer);
}

//check name dai nhat
void checkLongestNameStudent(const char *fileName) {
	FILE *filePointer;
	char buffer[MAX_NAME_LENGTH * 2];
	char longestName[MAX_NAME_LENGTH];
	int maxNameLength = 0;
	
	filePointer = fopen(fileName, "r");//mo file
	
	if (filePointer == NULL) {
		printf("\nKhong the mo file!\n");
	}
	
	
	
	
}

//doc file va hien thi len man hinh console
void readfile() {
	FILE *filePointer;
	filePointer = fopen("Session11.txt", "r");//mo file
	
	if (filePointer == NULL) {
		printf("\nKhong the mo file!\n");
	}
	
	char buffer[MAX_STUDENTS];
	while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {	//nhan thong tin sinh vien trong file va hien thi
		printf("%s", buffer);										
	}
	printf("\n");
	//dong file
	fclose(filePointer);
}


int main() {
	struct student *students = (struct student *) malloc(MAX_STUDENTS * sizeof(struct student));//su dung malloc mang cap phat dong
	int numberStudent;						
	
	int choose;
	do {
		printf("\n1. in ra sinh vien co tuoi lon nhat");
		printf("\n2. in ra sinh vien co ten dai nhat");
		printf("\n3. in ra sinh vien co tuoi lon hon '20'");
		printf("\n4. tim kiem thong tin sinh vien theo tuoi");
		printf("\n5. them sinh vien");
		printf("\n6. kiem tra file");
		printf("\n7. ket thuc chuong trinh!\n");
		printf("\nChon 1-5: ");
		scanf("%d", &choose);
		printf("\n");
		
		switch(choose) {
			case 1://hien thi sinh vien co ten dai nhat len man hinh console
				printf("\nSINH VIEN CO TEN DAI NHAT:\n");
				checkLongestNameStudent("Session11.txt");
				
				break;
				
			case 2:
				
				break;
			
			case 3: 
				
			 	break;
			 	
			case 4:
				
				break;
			
			case 5://nhap thong tin sinh vien
				printf("Nhap SV can them: ");
				scanf("%d", &numberStudent);
				getchar();
				
				if (numberStudent <= 0) {
					printf("\nKhong hop le, so sinh vien can them phai lon hon 1\n");
					break;
				}
				
				//so lan them sinh vien
				for (int i = 0; i < numberStudent; i++) {
					inputStudentInfo(&students[i], i);
				}
				
				saveInforStudent(students, numberStudent);	//luu thong tin sinh vien
				printf("\nDa luu thong tin sinh vien!\n\n");
				break;
			
			case 6://doc file va hien thi len man hinh console
				readfile();
				break;
			
			case 7:
				printf("\nKet thuc chuong trinh!\n");
				return 0;
				
			default:
				printf("\nVui long nhap lai 1-7!\n");
		}
	} while (true);
	
}
