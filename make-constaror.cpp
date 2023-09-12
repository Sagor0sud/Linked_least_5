#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    Node a(20);
    Node c(40);
    a.next=&c;
    cout<<a.next->val<<endl;
    
    return 0;
}