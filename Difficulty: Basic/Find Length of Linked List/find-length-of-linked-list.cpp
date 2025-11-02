/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        
        Node *temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        
        return cnt;

    }
};