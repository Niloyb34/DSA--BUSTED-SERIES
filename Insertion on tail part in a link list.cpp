#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;///Node typer akta pointer ja kina next node ke point korbe
    Node(int data)///mane jkoni kono new node pabo tathe data er value dukie dibo and tar address e null reke dibo
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int d)///aikane & dia reference pass korci mane ja kicu change korbo sbgula main link list e change hoi jabe copy type er kicu hbe na
{
    /// new node creation
    Node* temp=new Node(d);
    //akon new node jeta create korlam take amra temp e reke dilam jekane data hbe d
    ///and initially new node er next ta NUll thake amra jehuto head side e add korbo new node ke tie amra new node er next jeta null chilo oitate ager head er bsie dibo
    /// tie temp er next e amra aher head ta reke dibo
    temp->next=head;
    ///akon nton head ta hbe new node ta tie head take change kore banie dibo temp name new node ta
    head=temp;
}
void insertATtail(Node* &tail,int d)
{
    ////new node creation
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(Node* &head)///aikaneo reference dici jathe mainlinked list e change hoi
{
    Node * temp = head;///aikane mane amra temp name arekta node typer pointer baniye akebare 1st node take denote korlam tie temp=head reke dilam
    ///current node er data ke print krie dao
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;///mane no de 1 er data dekabe aikane 10 dekabe
    //cout<<node1->next<<endl;///mane node 1 er address dekabe and node 1 er address e NULL dekabe
    ///HEAD POINTED TO NODE 1
    Node *head=node1;
    Node *tail=node1;
    print(head);
    insertATtail(tail,12);
    print(head);
    insertATtail(tail,15);
    print(head);

}
//////////  j   u    s   t    akta node create korlam jar jnno amra data and element gulake dukie dilam
///initially eigular  modde muloto kono node er data nei and address ba link e next node er kono value o nei
