#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node*next;

     node(int val)
  {
    data=val;
    next=NULL;
   }
};
int main()
{      node* node1=new node(4);
  cout<<node1->data<<endl;
  cout<<node1->next<<endl;



      return 0;
}