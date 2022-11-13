//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head)
   {
       Node *prev=head,*cur=head->next;
       while(cur){
           Node *tmp=head,*pt=NULL;
           while(tmp!=cur and tmp->data < cur->data){
               pt=tmp;
               tmp=tmp->next;
           }
           if(tmp==cur){
               prev=prev->next;
               cur=cur->next;
               continue;
           }
           prev->next=cur->next;
           if(!pt){
               cur->next=head;
               head=cur;
           }
           else{
               pt->next=cur;
               cur->next=tmp;
           }
           cur=prev->next;
       }
       return head;   
   }
};
