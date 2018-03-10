#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    struct node *next;
};

class linkedlist
{
    private:
        node *head,*tail;
    public:
        linkedlist()
        {
            head=NULL;
            tail=NULL;
        }

        void addnode(int n)
        {
            node *temp=new node;
            temp->val=n;
            temp->next=NULL;

            if(head==NULL)
            {
                head=temp;
                tail=temp;
            }
            else
            {
                tail->next=temp;
                tail=tail->next;
            }
        }

        void traverse()
        {
            node *p;
            p=head;
            while(p!=NULL)
            {
                cout<<p->val<<" ";
                p=p->next;
            }
            cout<<endl;
        }

        void findmiddle()
        {
            node *fast,*slow;//declare two pointers fast and slow
            fast=head;
            slow=head;
            while(fast!=NULL)
            {
                if(fast->next!=NULL)
                {
                fast=fast->next->next;//move the fast pointer with 2 nodes at a time
                slow=slow->next;//move the slow pointer at 1 node at a time
                }
                else
                {
                    fast=fast->next;
                }
            }
            //so when the fast pointer reaches the end of the linkedlist, the slow pointer is at middle of the linkedlist
            cout<<slow->val<<endl;
        }
};

int main()
{
    linkedlist a;
    a.addnode(4);
    a.addnode(5);
    a.addnode(-4);
    a.addnode(25);
    a.addnode(3);
    a.addnode(6);
    a.addnode(14);
    a.addnode(24);
    a.addnode(26);
    a.traverse();
    a.findmiddle();
    return 0;
}
