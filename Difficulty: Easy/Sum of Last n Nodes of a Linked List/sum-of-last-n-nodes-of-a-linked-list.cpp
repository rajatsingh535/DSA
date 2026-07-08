/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) {

        Node* slow = head;
        Node* fast = head;

        // Move fast n steps
        while (n-- && fast != NULL) {
            fast = fast->next;
        }

        // If n >= length, return total sum
        if (fast == NULL && n >= 0) {
            int sum = 0;
            while (head != NULL) {
                sum += head->data;
                head = head->next;
            }
            return sum;
        }

        // Move both pointers
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        // Sum last n nodes
        int sum = 0;
        while (slow != NULL) {
            sum += slow->data;
            slow = slow->next;
        }

        return sum;

        
    }
};