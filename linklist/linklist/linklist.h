#ifndef _LINKLIST_H_
#define _LINKLIST_H_
#include <stdio.h>
#include <stdlib.h>
typedef int datatype;
typedef struct node
{
	datatype data;
	struct node* next;
}listnode, * linklist;

//��������ͷ�ڵ�(������)
linklist list_create_head()
{
	linklist New_Node;
	if ((New_Node = (linklist)malloc(sizeof(listnode))) == NULL)
	{
		printf("malloc failed!\n");
		return New_Node;
	}
	New_Node->data = 0;
	New_Node->next = NULL;
	return New_Node;
}

//������������
linklist list_create_all()
{
	linklist New_Node, r, p;
	int value;
	if ((New_Node = (linklist)malloc(sizeof(listnode))) == NULL)
	{
		printf("malloc failed!\n");
		return New_Node;
	}
	New_Node->data = 0;
	New_Node->next = NULL;
	r = New_Node;

	while (1)
	{
		printf("input aa number(-1 exit):");
		scanf_s("%d", &value);
		if (value == -1)
		{
			break;
		}

		if ((p = (linklist)malloc(sizeof(listnode))) == NULL)
		{
			printf("malloc failed!\n");
			return New_Node;
		}
		p->data = value;
		p->next = NULL;

		r->next = p;
		r = p;
	}

	return New_Node;
}

//�������
void list_show(linklist H)
{
	while (H->next)
	{
		printf("%d", H->next->data);
	    H = H->next;
	}
	printf("\n");
}

//ͷ������
int list_head_insert(linklist H, datatype value)
{
	linklist p;
	if ((p = (linklist)malloc(sizeof(listnode))) == NULL)
	{
		printf("malloc failed!\n");
		return -1;
	}
	p->data = value;
	p->next = H->next;
	H->next = p;
	return 0;
}

#endif