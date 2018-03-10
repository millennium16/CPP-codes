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

        void deletenodeval(int n)
        {
            node *p,*q;
            p=head;
            q=head;
            if(p->val==n)
            {
                head=p->next;
                return;
            }
            else
            {
                p=p->next;
            }
            while(p!=NULL)
            {
                if(p->val==n)
                {
                    q->next=p->next;
                    return;
                }
                p=p->next;
                q=q->next;
            }
        }

        void deletenodepos(int n)
        {
            node *p;
            int c=1;
            p=head;
            while(c<n-1)
            {
                c++;
                p=p->next;
            }
            p->next=p->next->next;
            return;
        }
};

int main()
{
    linkedlist a;
    a.addnode(4);
    a.addnode(5);
    a.traverse();
    a.addnode(-4);
    a.addnode(25);
    a.addnode(3);
    a.traverse();
    a.deletenodeval(-4);
    a.traverse();
    a.deletenodeval(25);
    a.traverse();
    a.addnode(6);
    a.addnode(14);
    a.traverse();
    a.deletenodepos(3);
    a.traverse();
    a.addnode(3);
    a.traverse();
    return 0;
}
