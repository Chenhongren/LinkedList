#pragma once

#include <iostream>

using namespace std;

class LinkedList;

class Node
{
  private:
    int data;
    Node* next;

  public:
    Node() : data(0), next(0){};
    Node(int a) : data(a), next(0){};
    Node(int a, Node* next) : data(a), next(next){};

    friend class LinkedList;
};

class LinkedList
{
  private:
    int size;
    Node* first;

  public:
    LinkedList() : first(0), size(0){};
    void PrintList();
    void PushFront(int data);
    void PushBack(int data);
    void PushAfter(int index_num, int data);
    void Delete(int index_num);
    void Clear();
    void Reverse();
};
