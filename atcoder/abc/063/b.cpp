#include <stdio.h>
#include <string.h>
#define  N 26

int main()
{
	char input[N + 1];
	size_t i, j;
	scanf("%s", input);

	for (i = 0; i < strlen(input); i++) {
		for (j = i + 1; j < strlen(input); j++) {
			if (input[i] == input[j]) {
				printf("no\n");
				return 0;
			}
		}
	}
	printf("yes\n");
	return 0;
}
