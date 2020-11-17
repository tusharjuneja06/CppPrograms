#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class List : public Node
{
    protected:
        Node *head, *temp;
    public:
        void createList();
        void displayList();
};

void List::createList()
{
    int n;
    cout<<"How many Nodes?\n";
    cin>>n;
    head = new Node;
    temp = head;
    cin>>head->data;
    for(int i = 1;i < n;i++)
    {
        head->next = new Node;
        head = head->next;
        cin>>head->data;
    }
    head->next = NULL;
}

void List::displayList()
{
    head = temp;
    while(head != NULL)
    {
        cout<<"Elements: "<<head->data<<endl;
        head = head->next;
    }
}

int main()
{
    List obj;
    
    obj.createList();
    obj.displayList();
    return 0;
}

// struct Node
// {
//     int data;
//     Node *next;
// };

// void linkedListTraversal(struct Node* ptr)
// {
//     while(ptr != NULL)
//     {
//         cout<<"Elements: "<<ptr->data<<endl;
//         ptr = ptr->next;
//     }
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;
    
//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node*) malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*) malloc(sizeof(struct Node));
//     fourth = (struct Node*) malloc(sizeof(struct Node));

//     // Link first and second nodes
//     head->data = 7;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 11;
//     second->next = third;

//     // Link third and fourth nodes
//     third->data = 41;
//     third->next = fourth;

//     // Terminate the list at the fourth nodes
//     fourth->data = 66;
//     fourth->next = NULL;

//     linkedListTraversal(head);
//     return 0;
// }
