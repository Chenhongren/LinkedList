#include "linkedlist.hpp"

int main()
{
    LinkedList list;

    cout << "==========\n"
         << "Delet Index 4\n"
         << "==========\n";
    list.Delete(4);

    cout << "\n==========\n"
         << "Push data (9, 5, 3)\n"
         << "==========\n";
    list.PushBack(5);
    list.PushBack(3);
    list.PushFront(9);
    list.PrintList();

    cout << "\n==========\n"
         << "Reverse\n"
         << "==========\n";
    list.Reverse();
    list.PrintList();

    cout << "\n==========\n"
         << "Add data (1) in Index (4)\n"
         << "Add data (10) in Index (2)\n"
         << "==========\n";
    list.PushAfter(4, 1);
    list.PushAfter(2, 10);
    list.PrintList();

    cout << "\n==========\n"
         << "Delete Index (2)\n"
         << "==========\n";
    list.Delete(2);
    list.PrintList();

    cout << "\n==========\n"
         << "Clear list\n"
         << "==========\n";
    list.Clear();
    list.PrintList();

    cout << "\n==========\n"
         << "Push data (3, 9)\n"
         << "==========\n";
    list.PushFront(9);
    list.PushAfter(0, 3);
    list.PrintList();

    return 0;
}
