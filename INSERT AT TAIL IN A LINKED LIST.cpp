#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;///Node typer akta pointer ja kina next node ke point korbe
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head)
{
    Node* temp=head;///head jake point korto take akon temp namok node typer pointer point korbe
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertATtail(Node *&tail,int d)//aikane head ta pointer and node ke point korbe ba node typer pointer
{
    Node *temp=new Node(d);///mane arekta je value add korar jnno tail e patieci take nia arekta new node make korbo jake point korbe temp namer pointer
    tail->next=temp;///mane nton temp jeta add hoice last e take ager tail er next teke pao jabe
    tail=temp;
}
int main()
{
    int n,i,e;
    Node* node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;////inititally ja head er man tie tail er man hbe tie duijone node 1 ke point korbe
    cout<<"Initially linked list is : ";
    print(head);
    cout<<"How many elements you want to add at tail:??"<<endl;
    cin>>n;
    cout<<"Now insert the elements:"<<endl;
    for(i=0;i<n;i++)
    {
      cin>>e;
      insertATtail(tail,e);
    }
    print(head);

}
