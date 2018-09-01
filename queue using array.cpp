#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class queue
{
              int queue1[5];
              int rear,front;
      public:
              queue()
                {
                     rear=-1;
                     front=-1;
                }
              void insert(int x)
               {
                   if(rear >  4)
                    {
                       cout <<"queue over flow";
                       front=rear=-1;
                       return;
                    }
                    queue1[++rear]=x;
                    cout <<"\nInserted: " <<x;
               }
              void del()
               {
                   if(front==rear)
                     {
                         cout <<"queue under flow";
                         return;
                     }
                     cout <<"\nDeleted: " <<queue1[++front];
                }
              void display()
               {
                   if(rear==front)
                     {
                          cout <<" queue empty";
                          return;
                     }
                   for(int i=front+1;i<=rear;i++)
                   cout <<queue1[i]<<"\n";
               }
};

main()
{
      int ch;
      queue ob;
      while(1)
        {
              cout <<"\n1.Insert  \n2.Delete  \n3.Display  \n4.Exit\n\nEnter ur choice: ";
              cin >> ch;
              switch(ch)
                {
                  case 1:    cout <<"\nEnter the element: ";
                           	 cin >> ch;
                             ob.insert(ch);
                             break;
                  case 2:  ob.del();  break;
                  case 3:  ob.display();break;
                  case 4: exit(0);
                  }
          }
return (0);
}
