#include "proto.h"

void my_putstr(char const *str)
{
	int a = 0;

	while (str[a] != '\0') {
		my_putchar(str[a]);
		a++;
	}
}
