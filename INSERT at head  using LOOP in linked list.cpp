#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int d)///mane patano head ta pointer ja Node typer and jake dukabo seta integer jar name d
{
    ///tahole nton matake rakar jnno nton akta Node create korbo jathe d dukbe ga data part e
    Node* temp=new Node(d);
    temp->next=head;///nton temp node ta jehuto head e add hbe tie puran head ta thakbe newly added temp er link
    head=temp;///mane akon nton je temp ta add korci seta akta head hoye jabe
}
void print(Node* &head)///mane head ta node typer pointer and & dia dilam jathe main tie change hoi copy na
{
    ///akon head take akta temp er modde reke amra pura linked list take traverse korbo
    Node* temp=head;///mane head pointer take arekta pointer temp er modde raklam
    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->next;///brtoman temp er address ta ager temp er next e thakbe

    }
    cout<<endl;
}
int main()
{
    int n,h,i;
    Node* node1=new Node(10);
    Node *head=node1;
    cout<<"How many elements you want to insert ? "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Which element you want to insert at head?? "<<endl;
        cin>>h;
        insertAtHead(head,h);///mane function aitake call korci and head and 12 ke patieci
        cout<<"Now the linked list is  :  ";
        print(head);
    }
}
