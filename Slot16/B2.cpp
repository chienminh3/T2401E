#include <stdio.h>

int main() {
	int n;
	printf("Nhap vao size cua mang: ");
	scanf("%d", &n);
	int array[n];
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("Nhap gia tri thu %d: ", i);
		scanf("%d", &array[i]);
	}
	
	//sap xep mang giam dan
	int tmp;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (array[j] < array[j+1]) {
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
	printf("\n.Sap xep mang da nhap theo chieu giam dan\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	
	//in ra tong cac so le
	printf("\n.Tong cac so le trong mang\n");
	int sum;
	for (int i = 0; i < n; i++) {
		if (array[i]%2 != 0) {
			sum += array[i];
		}
	}
	printf("%d ", sum);
	
	//in ra tong cac so chan trong mang
	printf("\n.Tong cac so chan trong mang\n");
	sum = 0;
	for (int i = 0; i < n; i++) {
		if (array[i]%2 == 0) {
			sum += array[i];
		}
	}
	printf("%d ", sum);
	
	//Tong cac so nguyen to trong mang
	printf("\n.Tong cac so nguyen to\n");
	sum = 0;
	int tmp2, sochia;
	sochia = 2;
	tmp2 = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] > 1) {
			if (array[i] % 2 != 0 || array[i] == 2) {
				tmp2 = sochia*sochia;
				while (tmp2 <= array[i]) {
					sochia++;
					tmp2 = sochia*sochia;
				}
				if (tmp2 >= array[i]) {
					sum+= array[i];
				}
				tmp2 = 0;
				sochia = 2;
			}
		}
	}
	printf("%d", sum);
	
	//tim so lan m xuat hien trong mang
	printf("\n.Tim so lan m xuat hien trong mang\n");
	int m, count;
	printf("Nhap vao so m bat ky: ");
	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		if (m == array[i]) {
			count += 1;
		}
	}
	printf("%d", count);
	
	//tinh tong cac phan tu trong mang
	printf("\n.Tinh tong cac phan tu trong mang\n");
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += array[i];
	}
	printf("%d", sum);
	
}
