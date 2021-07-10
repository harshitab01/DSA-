#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput_Better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
            // OR
            // tail = newNode;
        }

        cin >> data;
    }
    return head;
}

Node *insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}

Node *deleteNode(Node *head, int pos)
{
    Node *temp = head;
    int count = 0;
    if (pos == 0)
    {
        temp = temp->next;
        delete head;
        return temp;
    }
    while (temp != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
        if (temp->next == NULL)
            return head;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = a->next;
        delete a;
        return head;
    }
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    Node *head = takeInput_Better();
    print(head);
    int i, data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);

    int pos;
    cin >> pos;
    head = deleteNode(head, pos);
    print(head);
}