#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, h;
	printf("Input a ");
	scanf("%d", &a);
	printf("Input b ");
	scanf("%d", &b);
	printf("Input h ");
	scanf("%d", &h);
	printf("Result %d\n", (a + h) * (b + a));
	printf("( %d + %d ) * ( %d + %d ) = %d\n", a, h, b, a, (a + h) * (b + a));
	return 0;
}
