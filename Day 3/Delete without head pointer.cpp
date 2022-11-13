/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // create a pointer o the next node
       Node *ptr;
       ptr = del -> next;
       
       /*replace the data and link of the
        node to be deleted */
       del -> data = ptr -> data;
       del -> next = ptr -> next;
       
       // delete the next node
       free(ptr);
    }

};
