#include <stdio.h>
int main (void)
{
	int x = 1245;
	printf("%d-%d-%d-%d\n" , 1245 % 1000 % 100, % 10, 1245 % 1000 % 100 / 10, 1245 % 1000 / 100, x / 1000);
	return 0;
	
}
