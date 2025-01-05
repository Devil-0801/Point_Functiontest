#include <stdio.h>
int main()
{
	int a = 1;
	int* p = &a;
    *p = 5;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);
	return 0;
}