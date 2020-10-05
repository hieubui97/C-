#include<stdio.h>
#define max 100

struct stack{
	int top;
	int data[max];
};

void Init(stack &s){ //khoi tao stack rong
	s.top=0 ;			//stack rong khi top = 0
}

int IsEmpty(stack s){ //kiem tra danh sach rong
	return(s.top=0);
}

int IsFull(stack s){ // kiem tra danh sach day
	return(s.top==max);
}

void Push(stack &s,int x){ // them vao stack
	if(!IsFull(s)){
		s.data[s.top]=x;
		s.top++;
	}
}

int Pop(stack &s){
	if(!IsEmpty){
		s.top--;
		s.data[s.top];
	}
} 

void InPut(stack &s){
	int n,x;
	do{
		printf("nhap so nguyen khong am: ");scanf("%d",&n);
	}while(n<0);
	while(n>0){
		x=n%2;
		n=n/2;
		Push(s,x);
	}
}

void OutPut(stack s){
	printf("so vua nhap doi sang co so 2 la: ");
	if(s.top==0) printf("0");
	else
	for(int i=s.top-1;i>=0;i--){
		printf("%d",s.data[i]);
	}
}

int main(){
	stack s;
	Init(s);
	InPut(s);
	OutPut(s);
}
