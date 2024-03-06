#include <stdio.h>
#include <string.h>

int main() {
	int line, col;
	printf("enter lines number: ");
	scanf("%d", &line);
	printf("enter lines number: ");
	scanf("%d", &col);
	int array[line][col];
	
	for (int i = 0; i < line; i++) {
		printf("enter string %d: ", i);
		scanf("%s", array[i]);
	}
	for (int i = 0; i < line; i++) {
		printf("\nString %d: %s", i, array[i]);
	}
}
