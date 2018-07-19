#include <stdio.h>
#include <string.h>

int main() {
	char string[25];
	int i = 0;
	FILE* f = fopen("/tmp/ex8-1.txt", "r");
	string[i] = fgetc(f);	

	while(string[i] != EOF)	
	{
		i++;
		string[i] = fgetc(f);
	}

	string[i] = '\0';
	fclose(f);
	printf("%s\n", string);
	return 0;
}
