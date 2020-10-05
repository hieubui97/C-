#include <stdio.h>
#include <conio.h>

//  Khai bao cau truc du lieu danh sach lien ket cac so nguyen

struct Node
{
	int data;
	struct Node*next;
};
typedef struct Node node;

struct List
{
	node*Head;
	node*Tail;
};
typedef struct List list;

//  Khoi tao
void Init(list &l)
{
	l.Head = l.Tail = NULL;
}

// 3. Tao node 
node*GetNode(int x) 		// x la du lieu dua vao data
{
	
	node*p = new node;

	if(p == NULL)
	{
		return NULL;
	}
	p->data = x; 
	p ->next = NULL; 
	return p;
}


void AddHead(list &l,node *p) 		// them dau`
{
	if(l.Head == NULL) 
	{
		l.Head = l.Tail = p;
	}
	else
	{
		p->next = l.Head; 
		l.Head = p; 
	}
}

void AddTail(list &l,node *p) 		//them cuoi
{
	if(l.Head == NULL) 
	{
		l.Head = l.Tail = p;
	}
	else
	{
		l.Tail->next = p; 
		l.Tail = p;
	}
}

void Sort(list &l)
{
	
	for(node *p = l.Head; p != l.Tail; p = p ->next)
	{
		for(node *q = p ->next; q != NULL; q = q ->next)
		{
			if(p->data > q->data)
			{
				int temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}

}

void InPut(list &l, int n)
{	
	printf("nhap n:	");scanf("%d",&n);
	Init(l); 
	for(int i = 1; i <= n; i++)
	{
		int x;
		printf("\nnhap data: ");scanf("%d", &x);

		node*p = GetNode(x); 
		AddTail(l, p); 
	}
	Sort(l);
	
}

void OutPut(list l)
{
	for(node *p = l.Head; p != NULL; p = p->next)
	{
		printf("%d\t",p->data);
	}
}

void Insert(list &l,int x)
{	
	printf("\nnhap them phan tu: ");scanf("%d",&x);
	node *p=l.Head;
	if(l.Head==NULL||x<p->data) {
		node*temp=new node();
		temp=GetNode(x);
		AddHead(l,temp);
	}
	else
	{
		while(p!=l.Tail&&!(p->data<=x&&p->next->data>=x)) p=p->next;
		node *temp = new node();
		temp->data = x;
		temp->next=p->next;
		p->next=temp; 
		
	}
}

void Delete(list &l, int x)
{	printf("\nnhap phan tu can xoa: ");scanf("%d",&x);
	if(l.Head==NULL) printf("\nkhong tim thay phan tu can xoa!\n");
	else
	{
		node*p=l.Head;
		if(p->data==x)
		{   
			l.Head=p->next;
			delete p;
		}
		else
			while(p->next!=NULL&&(p->next->data!=x))	p=p->next;
			if(p->next==NULL) printf("\nkhong tim thay phan tu can xoa\n");
			else
			{
				node*t=p->next;
				p->next=t->next;
				delete t;
			}
	}
}

int main(){
	int n,x;
	list l;
	InPut(l,n);
	OutPut(l);
	Delete(l,x);
	OutPut(l);
}
