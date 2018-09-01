#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class stack
{
             int stck[5];
             int top;
      public:
             stack()
              {
                top=-1;
               }
             void push(int x)
              {
                 if(top >  4)
                       {
                           cout <<"stack over flow";
                           return;
                       }
                 stck[++top]=x;
                 cout <<"Inserted: " <<x;
               }
             void pop()
               {
                  if(top <0)
                   {
                         cout <<"stack under flow";
                         return;
                    }
                    cout <<"Deleted: " <<stck[top--];
                }
             void display()
               {
                   if(top<0)
                    {
                            cout <<" Stack empty";
                            return;
                    }
                    for(int i=top;i>=0;i--)
                    cout <<stck[i] <<" ";
                }
};

main()
{
     int ch;
     stack ob;
     while(1)
        {
             cout <<"\n1.push  2.pop  3.display  4.exit\nEnter ur choice";
             cin >> ch;
             switch(ch)
              {
               case 1:  cout <<"enter the element";
                        cin >> ch;
                        ob.push(ch);
                        break;
               case 2:  ob.pop();  break;
               case 3:  ob.display();break;
               case 4:  exit(0);
               }
         }
return (0);
}
