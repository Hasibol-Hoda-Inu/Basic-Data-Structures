#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *next;
    Node *prev;

    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void input(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

Node *find_address(Node *head, string str)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->value == str)
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while (cin >> val)
    {
        if (val == "end")
        {
            break;
        }
        input(head, tail, val);
    }

    Node *temp = head;

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        if (str == "visit")
        {
            string address;
            cin >> address;
            Node *targetNode = find_address(head, address);
            if (targetNode != NULL)
            {
                temp = targetNode;
                cout << temp->value << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (str == "prev")
        {
            if (temp != NULL && temp->prev != NULL)
            {
                temp = temp->prev;
                cout << temp->value << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (str == "next")
        {
            if (temp != NULL && temp->next != NULL)
            {
                temp = temp->next;
                cout << temp->value << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}