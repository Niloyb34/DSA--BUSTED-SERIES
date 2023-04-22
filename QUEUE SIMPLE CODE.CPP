#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;///mane akta integer typer pointer nilam

    q.push(11);///mone rakio onek ta je age dukbe se age thakb
    cout<<"Front of q is :"<<q.front()<<endl;
    q.push(15);
    cout<<"Front of q is :"<<q.front()<<endl;
    q.push(13);
    cout<<"Front of q is :"<<q.front()<<endl;
    cout<<"Size of queue is :"<<q.size()<<endl;
    cout<<"Front of q is :"<<q.front()<<endl;
    q.pop();///muloto first er element ta pop() hoye jabe
    cout<<"Front of q is :"<<q.front()<<endl;
    q.pop();///first er por second element ta pore thakbe front e setie pop() hoye jabe
    cout<<"Front of q is :"<<q.front()<<endl;
    q.pop();
    cout<<"Front of q is :"<<q.front()<<endl;
    cout<<"Size of queue is :"<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"Queue is empty "<<endl;
    }
    else
    {
        cout<<"Queue is not empty "<<endl;
    }
}

