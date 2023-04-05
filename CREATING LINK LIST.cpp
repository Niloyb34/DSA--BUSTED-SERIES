//////////////////////////Bangla coding tuitor youtube channel/////////////////////
#include<bits/stdc++.h>
using namespace std;
struct Node///Node er duita part akta data arekta address or link
{
   int data;///akta node er 1st er data thake and 2ndly pointer thake ja muloto
   struct Node *next;///mane next hocce pointer jeta arekta structure typer Node ke point korbe
  ///next hocce muloto tik tar probrti node er address ke hold korbe oitao akta node tie node jehuto akta structure tie next pointer er type hbe struct Node
};
int main()
{
    ///3 ta pointer typer variable nilam tahole erpor malloc dia memory te jiega dilam erpor oikane amra memory te data and address duita jinish thakbe
    ///amra 3 ta variable nilam structure node typer a,b,c typer ja kina variable and niche ader jnno jiega allocate korci dynamically
   struct Node *a=NULL;
   struct Node *b=NULL;
   struct Node *c=NULL;
   a=(struct Node*)malloc(sizeof(struct Node));///aigula memory te jiega kore nilam
   b=(struct Node*)malloc(sizeof(struct Node));
   c=(struct Node*)malloc(sizeof(struct Node));
   ////////////////////////////////Filling  the data value
   a->data=10;///a node er data hbe 10
   b->data=20;///b  node er data hbe 20
   c->data=30;///c node er data hbe 30
   ///////////////////////////////Joining the link
   a->next =b;///mane a er link e b er address ase
   b->next=c;///mane b er link e c er address ase
   c->next=NULL;///mane c er link e NULL ase jehuto c last node
   ///mane a,b,c er modde amra data gula reke disi first node e 10 , 2nd node e 20, 3rd node e 30 reke disi
   //Traversing a link list
   while(a!=NULL)
    ///link list er first node ke head bola hoi oita jtokkan ta prjnto null na hoi ttokon prjnto traverse koro
   {
       //mane link list er start teke end prjnto traverse korbo
       cout<<a->data<<" ";/// a er data take amra print korbo
       a=a->next;///a er man update mane next node take denote korbe ba next node er address take
   }
   return 0;
}
///LINKED LIST HLO ONEKGULA NODE ER COLLECTION JEKANE AKTA NODE AREKTAR SATHE connected akta pointer er help e jar nam holo next
