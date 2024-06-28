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
class Node_two
{
public:
    int val;
    Node_two *next;
    Node_two(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = tail->next;
    }
}

void insert_at_tail_two(Node_two *&head_two, Node_two *&tail_two, int val_two)
{
    Node_two *newNode = new Node_two(val_two);
    if (head_two == NULL)
    {
        head_two = newNode;
        tail_two = newNode;
        return;
    }
    else
    {
        tail_two->next = newNode;
        tail_two = tail_two->next;
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
int count_size_two(Node_two *head_two)
{
    int count_two = 0;
    Node_two *tmp_two = head_two;
    while (tmp_two != NULL)
    {
        count_two++;
        tmp_two = tmp_two->next;
    }
    return count_two;
}
void print_result(Node *head, Node_two *head_two, int count, int count_two)
{
    Node *tmp = head;
    Node_two *tmp_two = head_two;
    bool flag = true;

    if (count != count_two)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (tmp != NULL)
        {

            if (tmp->val != tmp_two->val)
            {

                flag = false;
                cout << "NO";
                return;
            }
            tmp = tmp->next;
            tmp_two = tmp_two->next;
        }

        cout << "YES";
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int count = count_size(head);
    Node_two *head_two = NULL;
    Node_two *tail_two = NULL;
    int val_two;
    while (true)
    {
        cin >> val_two;
        if (val_two == -1)
        {
            break;
        }
        insert_at_tail_two(head_two, tail_two, val_two);
    }
    int count_two = count_size_two(head_two);
    print_result(head, head_two, count, count_two);

    return 0;
}