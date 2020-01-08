#include <iostream>

using namespace std;

struct Node 
{
    int data;
    Node *next;

    Node(int a)
    {
        data = a;
        next = nullptr;
    }
};

class SinglyLinkedList {
    private:
        Node *head, *tail;
    public:
        SinglyLinkedList()
        {
            head = nullptr;
            tail = nullptr;
        }
        SinglyLinkedList(Node *n)
        {
            head = n;
            tail = n;
        }

        Node* getHead()
        {
            return head;
        }

        //TODO: Insert a Node at the end

        // TODO: Insert a Node at the beginning

        // TODO: Find a Node in a LL

        // TODO: Print entire Linked List

        // TODO: Insert a Node at a position k of the LL
};

int main()
{
    cout << "Hello" << endl;
    Node *mynode = new Node(5);
    
    SinglyLinkedList list = SinglyLinkedList(mynode);
    cout << list.getHead()->data << endl;
    return 0;
}
