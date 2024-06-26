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

void insert_at_tail(Node *&head, int val)
{
    Node *tmp = head;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << endl
             << "Inserted at the Head!!" << endl
             << endl;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at the tail!!" << endl
         << endl;
}

void display_list(Node *head)
{
    if (head == NULL)
    {
        cout << endl
             << endl
             << "No node available!!" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    cout << endl
         << endl
         << "Your nodes are: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    int op;
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Display List" << endl;
        cout << "Option 3: Insert at certain position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Delete at certain postion" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate" << endl;
        cin >> op;

        if (op == 1)
        {
            int val;
            cout << endl
                 << "Enter Value: ";
            cin >> val;
            insert_at_tail(head, val);
        }

        else if (op == 2)
        {
            display_list(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}