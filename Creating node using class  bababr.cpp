////////////////////////////////////NUMBER 1 CODE TA DEKO WITH USING THIS POINTER/////
#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
      int data;
      Node* next;
      ///constructor
      Node(int data)
      {
          this->data=data;
          this->next=NULL;
      }

};
int main()
{
   Node *node1=new Node(10);
   cout<<node1->data<<endl;
   cout<<node1->next<<endl;
}
//////////////////////////////  NUMBER 2 CODE DEKO ////////////////////////////////////
//////////////////////////////  OR WITHOUT USING THIS POINTER//////////////////////////
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;///Node typer akta pointer ja kina next node ke point korbe
};
int main()
{
   Node* node1=new Node();
   node1->data=10;
   node1->next=NULL;
   cout<<node1->data<<endl;///mane node 1 er data dekabe
   cout<<node1->next<<endl;///mane node 1 er address dekabe
}
//////////  j   u    s   t    akta node create korlam jar jnno amra data and element gulake dukie dilam
///initially eigular  modde muloto kono node er data nei and address ba link e next node er kono value o nei
