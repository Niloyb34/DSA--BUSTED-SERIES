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
   Node* node1=new Node();///Aiknae Node() ata akta default constructor ja class take access korbe
   cout<<node1->data<<endl;///mane node 1 er data dekabe
   cout<<node1->next<<endl;///mane node 1 er address dekabe
}
//////////  j   u    s   t    akta node create korlam jar jnno amra data and element gulake dukie dilam
///initially eigular  modde muloto kono node er data nei and address ba link e next node er kono value o nei
