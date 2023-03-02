#include <stdio.h>

int main(void)
{
	char* str = "ok";
	char c = *(str+2);
	if (c)
	printf("true\n");
	else
		printf("false\n");
	printf("%c\n", c);
}
