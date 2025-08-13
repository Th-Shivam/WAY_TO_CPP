#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void PushFront(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void PushBack(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void PopFront()
    {
        if (head == NULL)
        {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }
        else
        {
            tail = NULL;
        }

        delete temp;
    }

    void PopBack()
    {
        if (tail == NULL)
        {
            return;
        }

        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    void PopAt(int pos)
    {
        if (head == NULL)
        {
            return;
        }

        if (pos == 0)
        {
            PopFront();
            return;
        }

        Node* temp = head;
        int count = 0;

        while (temp != NULL && count < pos)
        {
            temp = temp->next;
            count++;
        }

        if (temp == NULL)
        {
            return;
        }

        if (temp == tail)
        {
            PopBack();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
    }

    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;

    ll.PushFront(10);
    ll.PushFront(20);
    ll.PushFront(30);
    ll.PushBack(40);

    ll.Display();

    ll.PopAt(1);
    ll.Display();

    ll.PopFront();
    ll.Display();

    ll.PopBack();
    ll.Display();

    return 0;
}