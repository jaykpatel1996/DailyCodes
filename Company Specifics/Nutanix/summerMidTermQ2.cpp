#include <iostream>

using namespace std;

struct Node{
   int data;
   Node *next;
   Node(int v, Node *n=NULL){
       data = v;
       next = n;
   }
};
 
class LinkedList{
   private:
      Node *head;
      Node *search(int val);
   public:
      LinkedList(){head = NULL;};
      void insertNode(int leftVal, int newVal);
      void printList();
      void findAndMoveMin();
};

void LinkedList::insertNode(int leftValue, int value) {
   Node* left = search(leftValue);
   Node* node = new Node(value);
   
   if (left == 0) { /* inserting a new head node */
      node->next = head;
      head = node;
   }
   else if (left->next == 0) { /* inserting a new tail node */
      left->next = node;
      if (head == 0) 
         head = node;
   }
   else { /* inserting a node in the middle */
      node->next = left->next;
      left->next = node;
   }
}

Node* LinkedList::search(int val) {
   Node* current = head;
   while (current != 0) {
      if (current->data == val)
         return current;
      current = current->next;
   }
   return 0;
}

void LinkedList::printList()
{
   Node *current = head;
   
   while (current != NULL)
   {
      cout << current->data << " ";
      current = current->next;
   }
}

void LinkedList::findAndMoveMin()
{
    if(head==NULL)
    return;
    int min_val = 2147483647;
    Node *minNode=NULL;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data<min_val)
        {
            min_val=temp->data;
            minNode=temp;
        }
        temp=temp->next;
    }
    if(head==minNode)
    return;
    temp=head;
    while(temp->next!=minNode)
    {
        temp=temp->next;
    }
	   
    temp->next=temp->next->next;
    minNode->next=head;
    head=minNode;
    return;
    
}

int main()
{
   LinkedList ll;
   for(int i=1;i<10;i++)
   {
   	ll.insertNode(i+1,i);
   }
   ll.printList();
   ll.findAndMoveMin();
   ll.printList();
   
   return 0;
}
