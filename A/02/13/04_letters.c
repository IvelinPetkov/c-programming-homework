#include <stdio.h>
#include <string.h>
int main()
{
	char c;
	char d;
	char m;
	c=getchar();
	m=c-'a';
	d='z'-m;
	printf("%c ----> %c\n", c, d);
	return 0;
}
