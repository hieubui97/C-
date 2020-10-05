#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int NodeData;
typedef struct Node
{
	NodeData data;
	struct Node *next;
} Node;

int a[] = {1, 2, 3 ,4, 5};

Node *create_node(NodeData v)
{
	Node *tg = (Node*)malloc(sizeof(Node));
	tg->data = v;
	tg->next = NULL;
	return tg;
}

int insert_at_first(Node **f, NodeData v)
{
	Node *tg = create_node(v);
	if(*f == NULL)
	{
		*f = tg;
		return 1;
	}
	tg->next = *f;
	*f = tg;
	return 1;
}

int insert_at_pos(Node **f, int v, int pos)
{
	Node *tg = create_node(v);
	
	if(*f == NULL || pos == 0)
	{
		*f = tg;
		return 1;
	}

	int i = 1;
	Node *tg1 = *f;
	while((i < pos) && (tg1->next != NULL))
	{
		tg1 = tg1->next;
		i++;
	}
	tg->next = tg1->next;
	tg1->next = tg;
}

void print_value(Node *f)
{
	while(f!=NULL)
	{
		printf("%d ", f->data);
		
		f = f->next;
	}
}

int main()
{
	Node *f = NULL;
	int n = sizeof(a)/sizeof(int);
	int i;
	for(i = 0; i <= n - 1; ++i)
	{
		insert_at_first(&f, (NodeData)a[i]);
	}
	
	insert_at_pos(&f, 10, 3);
	
	print_value(f);
	
	return 1;
}
