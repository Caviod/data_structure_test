#include "linklist.h"
int main()
{
	linklist H, p;
	int m,n;
	H = list_create_all();
	list_show(H);
#if 0 
	printf("please input position:\n");
	scanf_s("%d", &n);
	if ((p = list_get(H, n))!= NULL)
	{
		printf("node data:%d\n", p->data);
	}
#endif
#if 0
	printf("please input value:\n");
	scanf_s("%d", &n);
	if ((p = list_location(H, n)) != NULL)
	{
		printf("node data:%d\n", p->data);
		printf("node data address:%d\n", &p);
	}
	else
	{
		printf("without data\n");
	}
#endif
	printf("please input position:\n");
	scanf_s("%d", &m);
	printf("please input value:\n");
	scanf_s("%d", &n);
	if (list_insert(H, m, n) == -1)
	{
		printf("insert failed:\n");
	}
	else
	{
		list_show(H);
	}
	return 0;
}
