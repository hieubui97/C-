#include<iostream>
    #include<string>
    #define MAX 100
    using namespace std;
    struct stack
    {
        int n;
        int e[MAX];
    };
    void init (stack &s)
    {
        s.n=-1;
    }
    int isempty(stack s)
    {
        if (s.n==-1)
            return 1;
        return 0;
    }
    int isfull(stack s)
    {
        return (s.n==MAX-1);
    }
    void push(stack &s, char x)
    {
        if (isfull(s))
            cout << " Ngan xep day! ";
        else
        {
            s.n++;
            s.e[s.n]=x;
        }
    }
    char pop ( stack &s)
    {
        if(isempty(s))
        {
            cout <<" Ngan xep rong !";
            return -1;
        }
        else
            return s.e[s.n--];
    }
   int main()
   {
       int i;
       stack s;
       string str;
       init (s);
       cout <<" Nhap xau ki tu: ";
       getline (cin,str);
       for(i=0;i<str.size();i++)
            push (s,str[i]);
        cout <<" Xau da dao nguoc la: ";
        while(isempty(s)==0)
            cout << pop(s);
   }
