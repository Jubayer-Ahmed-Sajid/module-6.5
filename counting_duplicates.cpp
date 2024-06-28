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

class Number {
    public:
    int val;
    Number* next;
    Number(int val){
        this->val=val;
        this->next=NULL;
    }

};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void counting_duplicate(Node * head){


}
int main()
{

    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
   
   Number *begin = 0;
   int num = 0;
   for(int i = 0 ; i < 100; i++){
    
   }

    return 0;
}