//automatic var. multiple function calls
#include<stdio.h>
void test()
{
	auto int i=10;
	printf("%d ",i);
	i++;
}
int main()
{
	test();
	test();
	test();
	test();
	return 0;
}
