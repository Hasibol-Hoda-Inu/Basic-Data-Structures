#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void findingMiddleElement(Node *head, int count)
{
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    int r = 0;
    if (count % 2 != 0)
    {
        r = count / 2;

        for (int i = 0; i < r; i++)
        {
            temp = temp->next;
        }

        cout << temp->value;
        //    cout << r+1;
    }
    else
    {
        r = count / 2;
        for (int i = 0; i < r-1; i++)
        {
            temp = temp->next;
        }
        cout << temp->value << " " << temp->next->value;
        // cout << r << " " << r+1;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node* e = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    findingMiddleElement(head, 0);
    return 0;
}