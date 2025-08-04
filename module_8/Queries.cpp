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

void delete_at_any(Node *&head, Node *&tail, int idx)
{
    if (head == NULL || head->next == NULL)
        return;
    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
            return;
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    if (deleteNode == NULL)
        return;
    temp->next = temp->next->next;
    if (deleteNode == tail)
        tail = temp;
    delete deleteNode;
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    if (head == NULL)
        tail = NULL;
    delete deleteNode;
}

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

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = newNode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

    int t;
    cin >> t;
    while (t--)
    {
        
        int idx, val;
        cin >> idx >> val;
        if (idx == 0)
        {
            insert_at_head(head, tail, val);
            count++;
        }
        else if (idx == 1)
        {
            insert_at_tail(head, tail, val);
            count++;
        }
        else if (idx == 2)
        {
            if (val >= 0 && val < count)
            {
                if (val == 0)
                {
                    delete_at_head(head, tail);
                }
                else
                {
                    delete_at_any(head, tail, val);
                }
                count--;
            }
        }

        print(head);
    }

    return 0;
}