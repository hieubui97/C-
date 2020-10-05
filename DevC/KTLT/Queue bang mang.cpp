#include <stdlib.h>
#include <stdio.h>
 
typedef int item; //kieu du lieu
struct Node
{
    item data;
    Node*next;
};
struct Queue
{
    Node*Front,*Rear; //Node dau va Node cuoi
    int count; //dem so phan tu
};

void Init(Queue &Q)
{
    Q.Front = Q.Rear = NULL;
    Q.count = 0;
}
int IsEmpty (Queue Q) 		//kiem tra Queue rong
{
    if (Q.count == 0) 		//so phan tu = 0 => rong
        return 1;
    return 0;
}
 
Node *GetNode(item x) //tao 1 Node
{
    Node*p = new Node;
    p->next = NULL;
    p->data = x;
    return p;
}
 
void Push(Queue &Q, item x) //them phan tu vao cuoi Queue
{
    Node *p = GetNode(x); 
    if (IsEmpty(Q))
    {
        Q.Front = Q.Rear = p; 	//dau va cuoi deu tro den P
    }
    else //Khong rong
    { 
        Q.Rear->next = p;
        Q.Rear = p;
    }
    Q.count ++ ;	 //tang so phan tu len
}
 
int Pop(Queue &Q) //Loai bo phan tu khoi dau hang doi
{
    if (IsEmpty(Q)) 
    {
        printf("Hang doi rong !");
        return 0;
    }
    else
    {
        item x = Q.Front->data;
        if (Q.count == 1) //neu co 1 phan tu
            Init(Q);
        else
            Q.Front = Q.Front->next;
        Q.count --;
        return x; //tra ve phan tu lay ra
    }
}
 
void Input (Queue &Q) //nhap hang doi
{
    int i=0; 
    item x;
    do
    {
        i++;
        printf ("Nhap phan tu thu %d : ",i);
        scanf("%d",&x);
        if (x != 0) Push(Q,x);
    } while(x != 0); 		//nhap 0 de ket thuc
}
 
void Output(Queue Q)
{
    Node *p = Q.Front;
    while (p != NULL) 
    {
        printf("%d   ",p->data);
        p = p->next;
    }
    printf("\n");
}
 
int main()
{
    Queue Q;
    Init(Q);
    Input(Q);
    Output(Q);
}
