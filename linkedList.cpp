// linkedList.cpp
#include <iostream>
using namespace std;

// linkedList major functions:
//  i - push_front
//  ii - push_back
//  iii - pop_front
//  iv - pop _ back // addtionl funtion insert and update

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
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

    void push_front(int val)
    {
        Node *newNode = new Node(val); // it will create a dynamic object
        // Node newNode(val); // it will create ststic object
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LikedList is empty\n";
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty\n";
            return;
        }

        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid Position\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int search(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
        }
        temp = temp->next;
        idx++;
    }
};

int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.insert(4, 1);

    ll.printLL();

    return 0;
}