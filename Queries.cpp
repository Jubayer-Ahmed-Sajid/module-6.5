#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int count_size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        print_list(head);
        cout << endl;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        print_list(head);
        cout << endl;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        print_list(head);
        cout << endl;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = tail->next;
        print_list(head);
        cout << endl;
    }
}
void delete_at_position(Node *&head, Node *&tail, int pos, int size)
{
    Node *tmp = head;
    if (head == NULL || pos > size - 1)
    {
        print_list(head);
        cout << endl;
        return;
    }
    else if (pos == 0)
    {
        head = tmp->next;
        Node *deleteNode = tmp;
        delete tmp;
        print_list(head);
        cout << endl;

        return;
    }

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next == tail)
    {
        delete tail;
        tail = tmp;
        tail->next = NULL;
        print_list(head);
        cout << endl;
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    print_list(head);
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int op;
        cin >> op;
        int val;
        int pos;
        if (op == 0)
        {
            cin >> val;
            insert_at_head(head, tail, val);
        }
        else if (op == 1)
        {
            cin >> val;
            insert_at_tail(head, tail, val);
        }
        else if (op == 2)
        {
            cin >> pos;
            int size = count_size(head);
            delete_at_position(head, tail, pos, size);
        }
    }
    return 0;
}