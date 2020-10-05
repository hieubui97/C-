#include<iostream>
#include<string>
#define max 100
using namespace std;
struct stack
    {
        int top;
        int data[max];
    };
void Init (stack &s)
    {
        s.top=-1;
    }
int IsEmpty(stack s)
    {
        if (s.top==-1)
            return 1;
        return 0;
    }
int IsFull(stack s)
    {
        return (s.top==max-1);
    }
void push(stack &s, char x)
    {
        if (IsFull(s))
            cout << " Ngan xep day ";
        else
        {
            s.top++;
            s.data[s.top]=x;
        }
    }
char Pop ( stack &s)
    {
        if(IsEmpty(s))
        {
            cout <<" Ngan xep rong ";
            return -1;
        }
        else
            return s.data[s.top--];
    }
int main()
   {
       int i;
       stack s;
       string str;
       Init (s);
       cout <<"Nhap xau ki tu: ";
       getline (cin,str);
       for(i=0;i<str.size();i++)
            push (s,str[i]);
        cout <<"Xau da dao nguoc la: ";
        while(IsEmpty(s)==0)
            cout << Pop(s);
   }
