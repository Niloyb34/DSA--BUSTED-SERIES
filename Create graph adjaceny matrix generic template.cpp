#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>
class graph
{
public:
       map<T,list<T>>adj;
       void addEdge(T u,T v, bool direction)
       {
              ///direction =0 ---> undirected
              ///direction =1 ----> Directed graph
              ///Create an edge from u to v
              adj[u].push_back(v);
              if(direction==0)
              {
                     adj[v].push_back(u);
              }
       }
       void printAdjList()
       {
              for(auto i:adj)
              {
                     cout<<i.first<<"-> ";
                     for(auto j:i.second)
                     {
                            cout<<j<<" , ";
                     }
                     cout<<endl;
              }
       }
};
int main()
{
       int n;
       cout<<"Enter the number of nodes :"<<endl;
       cin>>n;
       int m;
       cout<<"Enter the number of edges :"<<endl;
       cin>>m;
       graph<int>g;
       for(int i=0;i<m;i++)
       {
             int u,v;
             cin>>u>>v;
             //Creating an undirected graph
             g.addEdge(u,v, 0);
       }
       ///printing graph
       g.printAdjList();
}
/////////////////////////////////////////////////////  WHen All nodes are Characters  ///////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////tkon just nicher code ta korbe 
#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T> ////Ei template use korle only  graph<char>g; and char u,v; aikane data type change korlei hbe mane datatype easily shift kora jabe
class graph
{
public:
       map<T,list<T>>adj;
       void addEdge(T u,T v, bool direction)
       {
              ///direction =0 ---> undirected
              ///direction =1 ----> Directed graph
              ///Create an edge from u to v
              adj[u].push_back(v);
              if(direction==0)
              {
                     adj[v].push_back(u);
              }
       }
       void printAdjList()
       {
              for(auto i:adj)
              {
                     cout<<i.first<<"-> ";
                     for(auto j:i.second)
                     {
                            cout<<j<<" , ";
                     }
                     cout<<endl;
              }
       }
};
int main()
{
       int n;
       cout<<"Enter the number of nodes :"<<endl;
       cin>>n;
       int m;
       cout<<"Enter the number of edges :"<<endl;
       cin>>m;
       graph<char>g;
       for(int i=0;i<m;i++)
       {
             char u,v;
             cin>>u>>v;
             //Creating an undirected graph
             g.addEdge(u,v, 0);
       }
       ///printing graph
       g.printAdjList();
}

