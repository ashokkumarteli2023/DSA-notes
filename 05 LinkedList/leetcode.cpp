
// 143. Reorder List doubt-1
//solved 
//same address so double not won't form
class Solution {
public:
    void reorderList(ListNode* head) {
        if ((!head) || (!head->next) || (!head->next->next)) return; // Edge cases
        
        stack<ListNode*> my_stack;
        ListNode* ptr = head;
        int size = 0;
        while (ptr != NULL) // Put all nodes in stack
        {
            my_stack.push(ptr);
            size++;
            ptr = ptr->next;
        }
        // cout<<size;
        ListNode* pptr = head;
        for (int j=0; j<size/2; j++) // Between every two nodes insert the one in the top of the stack
        {
            ListNode *element = my_stack.top();
            my_stack.pop();
            element->next = pptr->next;
            pptr->next = element;
            pptr = pptr->next->next;
        }
        pptr->next = NULL;
            
    }
};




// 430. Flatten a Multilevel Doubly Linked List
class Solution {
public:
    Node* flatten(Node* head) {
        
        Node* curr=head;
        
        while(curr)
        {
            // if(curr->child==NULL)
            // {curr=curr->next;
            //                       continue;}
            
            while(curr->child==NULL ) curr=curr->next;
            Node* p1=curr->child;
            while(p1->next)
            {
                p1=p1->next;
            }
            
            p1->next=curr->next;
            if(curr->next!=NULL)
                curr->next->prev=p1;
            
            curr->next=curr->child;
            curr->next->prev=curr;
            curr->child=NULL;
            curr=curr->next;
            
        }
        return head;
        
    }
};


//138. Copy List with Random Pointer
class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL)
            return NULL;
        
        // temporary (copied) head node
        Node* temp=head;
        
        // 1st Pass
        
        while(temp!=NULL)
        {
             // Cloned node with same val as head
            Node* newnode= new Node(temp->val);
            
            // Insert the cloned node next to the original node
            // If A->B->C is the original linked list,
            // Linked list after weaving cloned nodes would be
            // A->A'->B->B'->C->C'
            
            newnode->next=temp->next;
            temp->next=newnode;
            temp=newnode->next;
        }
        
        temp=head;
        
        // Link random pointers of the newly created nodes
        // and iterate through the newly created list and
        // use original node's random pointers
        
        // 2nd Pass
        
        while(temp!=NULL)
        {
            temp->next->random=(temp->random)?(temp->random->next):NULL;       
            temp=temp->next->next;
        }
        
         // Unweave the current linked list to get back the 
        // original linked list and the cloned one.
        
		// A->B->C
        Node* original=head;
        
        // A'->B'->C'
        Node* clone=head->next;
        
        // Result is used for returning
        Node* result=head->next;
        // 3rd Pass
        
        while(original!=NULL)
        {
            original->next=original->next->next;
            clone->next= (clone->next)?(clone->next->next):NULL;
            
            original=original->next;
            clone=clone->next;
        } return result;
    }
        
};