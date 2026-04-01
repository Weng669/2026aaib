//week06-6a.cpp SOIT107_BASE_019
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a<=b && a<=c) printf("%d\n",a);
	else if (b<=a &&b<=c) printf("%d\n",b);
	else printf("%d\n",c);
}
