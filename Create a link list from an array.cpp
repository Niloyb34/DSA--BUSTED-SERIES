#include<bits/stdc++.h>
using namespace std;
void createLinkedList(int arr[],int size);
int main()
{
    int arr[]={5,10,30};
    createLinkedList(arr,3);
    return 0;
}
void createLinkedList(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
