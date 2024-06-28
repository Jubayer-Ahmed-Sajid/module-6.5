#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head,Node *&tail, long long val)
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
void print_difference(Node *head)
{
    Node *temp = head;
    long long min = INT_MAX;
    long long max = INT_MIN;

    while (temp != NULL)
    {
        if (temp->val >= max)
        {
            max = temp->val;
        }
        if (temp->val < min)
        {
            min = temp->val;
        }
        temp = temp->next;
    }
    long long difference = max - min;
    cout << difference;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    long long val;
    while (true)
    {
        cin >> val;
        if (val == -1){
            break;
        }
        insert_at_tail(head, tail,val);
    }
    print_difference(head);

    return 0;
}