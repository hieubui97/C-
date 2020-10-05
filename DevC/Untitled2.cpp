#include <stdio.h>
#include <conio.h>


struct Node
{
	int data;
	Node*next;
};
typedef struct Node node;

struct List
{
	node *head;
	node *tail;
};
typedef struct List list;

void init(list &l)
{
	l.head = l.tail = NULL;
}
node*getnode(int x) 
{
	node*p = new node;
	if(p == NULL)
	{
		return NULL;
	}
	p->data = x;
	p->next = NULL;
	return p;
}

void TimKiem(list &l,int x){
	Node*node= l;
	while(node!=0&&node->data!=x){
		node=node->next;
		return node;
	}
}

void AddHead(list &l,node*p)
{
	if(l.head == NULL) 
	{
		l.head = l.tail = p;
	}
	else
	{
		p ->next = l.head; 
		l.head = p; 		 
	}
}

void InPut(list &l,int n)
{
	init(l); 
	for(int i = 1; i <= n; i++)
	{
		int x;
		printf("\nNhap vào data: ");
		scanf("%d", &x);
		
		node*p = getnode(x); 
		AddHead(l, p);
	}
}

void OutPut(list l)
{
	for(node*p = l.head; p != NULL; p = p->next)
	{
		printf("%d ",p->data);
	}
}

int main()
{
	list l;
	int n;
	printf("\nBan muon nhap bao nhiêu Node: ");
	scanf("%d", &n);
	InPut(l,n);
	OutPut(l);
}
