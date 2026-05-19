/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == nullptr) return nullptr;

        unordered_map<Node*, Node*> map;

        Node* dummy = new Node(0);

        Node* newhead = dummy;

        Node* temp = head;

        // Create copied nodes
        while(temp != nullptr){

            Node* newnode = new Node(temp->val);

            map[temp] = newnode;

            newhead->next = newnode;

            newhead = newhead->next;

            temp = temp->next;
        }

        // Connect random pointers
        temp = head;

        while(temp != nullptr){

            map[temp]->random = map[temp->random];

            temp = temp->next;
        }

        return dummy->next;
    }
};
