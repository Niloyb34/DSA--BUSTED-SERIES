#include<bits/stdc++.h>
using namespace std;
class Node///creating a class named Node mane node name akta class make korlam
{
public:
    int data;
    Node* next;///Node typer akta pointer make korlam ja kina onno kono node ke point korbe
    Node(int data)///akta parameterized constructor make korlam
    {
        this->data=data;
        this->next=NULL;
    }
};
///////////////////////////////////////////////////   INSERT AT HEAD /////////////////////////////////////
void insertAThead(Node* &head,int h)
{
    Node *temp=new Node(h);///mane temp name arekta pointer make korlam ja node ke point korbe aikane nton je value ta patabo take new akta node e dukabo tie new Node(h) use korlam
    /*AKON nton je temp ta add korlam ta jehoto head e add hbe tie nton temp er next hbe ager head ta*/
    temp->next=head;
    head=temp;///mane new head ta hbe newly added temp ta
}
//////////////////////////////////////////////////   INSERT AT TAIL  ////////////////////////////////////////
void insertATtail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;///mane seshe  e add kora temp er address kintu ager tail e thakbe
    tail=temp;///mane nton tail hbe temp ta ba tail take update korlam
}
void print(Node* &head)///aikane head er reference pass korci jathe main linked list e changed hoi
{
    Node *temp=head;///mane temp name arekta node typer pointer initially head ke point korbe and atar darie amra traverse korbo pura link list e
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;///mane nton  temp ase ager temp er next e
    }
    cout<<endl;
}
int main()
{
    int n,i,h;
    Node *node1=new Node(10);///mane node 1 name arekta pointer make korlam ja Node typer and aikane akebare first node take represent kore
    ///new ta akta Node er jnno dynamically jiega allocate kore like malloc and create kora new node take indicate kore node1 name pointer
    ///aikane teke new node er jnno 10 initialize kore dilam data hisebe
    Node *head=node1;///mane node-1 ke head name arekta node typer pointer point kore
    Node *tail=node1;///mane initially aktie node1 thakle tar head and tail akoi tie node1 ke tail name arekta pointer point kore
    cout<<"INITIALLY link list is : ";
    print(head);///mane head take parameter hisebe patalam

    //////////////////// INSERT AT HEAD /////////////////////////
    cout<<"How many elements you want to add at head??"<<endl;
    cin>>n;
    cout<<"INSERT THE ELEMENTS:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>h;
        insertAThead(head,h);
    }
    cout<<"AFTER HEAD INSERTIONS THE NEW LINKED LIST ARE:"<<endl;
    print(head);
    /////////////////// INSERT AT TAIL ////////////////////////////
    cout<<"Enter how many elements you want to add at tail??"<<endl;
    cin>>n;
    cout<<"INSERT THE ELEMENTS:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>h;
        insertATtail(tail,h);
    }
    cout<<"AFTER TAIL INSERTION THE NEW LINKED LIST ARE:"<<endl;
    print(head);

}
