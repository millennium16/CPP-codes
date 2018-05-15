#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
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

        void sortedinsert(int n)
        {
            node *p,*q;
            p=head;
            q=head;
            node *temp;
            temp->data=n;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
                temp->next=NULL;
                return;
            }
            p=p->next;
            while(p!=NULL)
            {
                if(n<p->data)
                {
                    q->next=temp;
                    temp->next=p;
                    q=temp;
                    return;
                }
                p=p->next;
                q=q->next;
            }
            q->next=temp;
            temp->next=p;
            return;

        }
};

int main()
{
    linkedlist a;
    a.sortedinsert(4);
    a.sortedinsert(5);
    a.sortedinsert(2);
    a.sortedinsert(-7);
    a.sortedinsert(56);
    a.sortedinsert(3);
}
