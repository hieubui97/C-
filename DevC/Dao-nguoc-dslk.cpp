#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

struct List{
	Node *head;
	Node *tail;
};
void Init( List &l){
	l.head = NULL;
	l.tail = NULL;
}

Node *createNode( int x){              // khoi tao danh sach
	Node *p= new Node;
	if(!p)  exit(1);
	p -> data=x;
	p -> next= NULL;
	return p;
}
void addTail( List &l, Node *p){
	if(!l.head) l.head=l.tail= p;
	else{
		l.tail->next=p;
		l.tail=p;  //Cap nhat duoi
	}
}
void reverse( List &l){
	Node *parent = l.head;   // Parent gan la l.head
	Node *current = l.head -> next; //current la thang tiep theo
	l.head = current-> next; // cap nhat lai haed la tiep theo cua current, khi den head thi se ket thuc chuong trinh
	parent ->next= NULL;    // Khoi tao perent la NULL, khi doi chieu thi parent thi la cai cuoi
	current -> next=parent; // next cua current ko phai la head ma la parent --> da doi chieu
	while(l.head->next){   // CAP nhat lai sau khi da doi chieu
		parent=current;
		current=l.head;
		l.head=l.head->next;
		current->next=parent;
	}
	l.head->next=current;
}
void display( List l){
	while(l.head){
		cout<< l.head -> data<<" ";
		l.head=l.head-> next;
	}
}
void Nhap(List &l){
	int n;
	cin>> n;
	for(int i=0; i<=n;i++){
		Node *p=createNode(i);
		addTail(l,p);
	}
}
int main()
{
	List l;
	Init(l);
	Nhap(l);
	
	reverse(l);
	display(l);
	return 0;
}
