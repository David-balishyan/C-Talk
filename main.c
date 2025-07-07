#include <stdio.h>

void first() {
	int a = 10;
	printf("a variable is: %d\n", a);
	printf("Address of a: %p\n", &a);

}

void second() {
    int b = 5;
		int *ptr = &b;     
    printf("Before change: b = %d\n", b);
    *ptr = 10;
		printf("After change: b = %d\n", b);
}

void third() {
	char letter = 'Z';
	char *p = &letter;
  printf("Value stored at pointer p: %c\n", *p);
  printf("Address stored in pointer p: %p\n", p);

}

void fourth() {
	int nums[] = {10, 20, 30, 40, 50};
	int *ptr = nums;

	for (int i = 0; i < 5; i++) {
     printf("%d ", *(ptr + i));
  }

	printf("\n");

}

void fifth() {
	int arr[] = {1, 2, 3, 4, 5};
	int *p = arr;
    
	p += 2;

	printf("%d\n", *p);	
}	

void sixth() {
	int nums[] = {2, 4, 6, 8};
	int sum = 0;
	int *ptr = nums;

	for (int i = 0; i < 4; i++) {
      sum += *(ptr + i);
	}

 	printf("Sum: %d\n", sum);
}

int main() {
	// first();
	// second();
	// third();
	// fourth();
	// fifth();
	// sixth();
	return 0;
};
