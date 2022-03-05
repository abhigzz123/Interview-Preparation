#include <bits/stdc++.h>
using namespace std;

/* Insertion and deletions in linkedList 

*/

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
int size = 0;

void addAtLast(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if (size == 0)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    size++;
}

void addAtStarting(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    size++;
}

void printList()
{
    Node *headVal = head;
    while (headVal != NULL)
    {
        cout << headVal->data << endl;
        headVal = headVal->next;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    addAtLast(10);
    addAtLast(20);
    addAtStarting(50);
    addAtLast(30);
    addAtStarting(90);

    printList();

    return 0;
}
