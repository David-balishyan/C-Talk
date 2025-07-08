#include <stdio.h>
#include <stdbool.h>

void first() {
	char str[100];
	int length = 0;
	printf("Input the string: ");
	fgets(str, sizeof(str), stdin);

	while (str[length] != '\0' && str[length] != '\n') {
        length++;
  }

	printf("Length of the string is : %d\n", length);
}

void second() {
		char str[100];
    int length = 0;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("The characters of the string in reverse are:\n");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}

void third() {
	 char str[200];
    int i = 0, wordCount = 0;
    bool inWord = false;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

  while (str[i] != '\0') {
       if (str[i] != ' ' && str[i] != '\n' && !inWord) {
            inWord = true;
            wordCount++;
      } else if (str[i] == ' ' || str[i] == '\n') {
            inWord = false;
      }
     i++;
 }

	printf("Total number of words in the string is : %d\n", wordCount);
}


int main () {
	// first();
	// second();
	third();
	return 0;
};
