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
void insert_at_tail(Node *&head, Node *&tail,int val)
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
void print_index(Node * head,int x){
    Node * tmp = head;
    bool flag = false;
    int count = 0;
    while(tmp != NULL){
        count++;
        if(tmp->val == x){
            cout <<count-1<<endl;
            flag = true;
            return;
        }
        tmp =tmp->next;
    }
     cout<<-1<<endl;
}
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
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
       int x;
        cin >> x;
        print_index(head,x);
    }

    return 0;
}