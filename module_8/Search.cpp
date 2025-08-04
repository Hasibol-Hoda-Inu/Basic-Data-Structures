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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void finding_the_value(Node *head, int val)
{
    Node *temp = head;
    for (int i = 0; temp != NULL; i++)
    {
        if (temp->value == val)
        {
            cout << i << '\n';
            return;
        }
        temp = temp->next;
    }
    cout << -1 << '\n';
}

int main()
{
   

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int value;
        while (true)
        {
            cin >> value;
            if (value == -1)
            {
                break;
            }
            insert_at_tail(head, tail, value);
        }

        int idx;
        cin >> idx;
        finding_the_value(head, idx);
    }

    return 0;
}