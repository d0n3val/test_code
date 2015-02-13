#include <stdio.h>

int main(int argc, char** argv)
{
	char c[10] = "hola";
	printf("%s", &c[1]);
	getchar();
}