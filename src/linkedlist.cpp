#include "linkedlist.hpp"

void LinkedList::PrintList()
{
    if (first == 0)
    {
        cout << "List is empty.\n";
        return;
    }

    Node* current = first;
    while (current != 0)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void LinkedList::PushFront(int data)
{
    Node* newNode = new Node(data, first);
    first = newNode;
    size++;
}

void LinkedList::PushBack(int data)
{
    Node* newNode = new Node(data);

    if (first == 0)
    {
        first = newNode;
    }
    else
    {
        Node* current = first;
        while (current->next != 0)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    size++;
}

void LinkedList::PushAfter(int index_num, int data)
{
    Node* newNode = new Node();
    Node* current = first;
    if (index_num > size)
    {
        cout << "Index " << index_num << " is not exist (zero based)" << endl;
        cout << "List size is " << size << endl;
        return;
    }

    // push data in the head
    if (index_num == 0)
    {
        PushFront(data);
    }
    else
    {
        for (int i = 0; i < index_num; i++)
        {
            current = current->next;
        }
        if (index_num == size)
        {
            newNode->next = current->next;
        }
        else
        {
            newNode->next = 0;
        }
        newNode->data = data;
        current->next = newNode;
    }
    size++;
}

void LinkedList::Delete(int index_num)
{
    Node *current = first, *previous = 0;
    if (index_num >= size)
    {
        cout << "Index " << index_num << " is not exist (zero based)" << endl;
        cout << "List size is " << size << endl;
        return;
    }
    for (int i = 0; i < index_num; i++)
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    delete current;
    size--;
}

void LinkedList::Clear()
{
    while (first != 0)
    {
        Node* current = first;
        first = first->next;
        delete current;
        current = 0;
        size = 0;
    }
}

void LinkedList::Reverse()
{
    if (first == 0 || first->next == 0)
    {
        // list is empty or list has only one node
        return;
    }

    Node *previous = 0, *current = first, *preceding = first->next;

    while (preceding != 0)
    {
        current->next = previous;
        previous = current;
        current = preceding;
        preceding = preceding->next;
    }

    current->next = previous;
    first = current;
}
