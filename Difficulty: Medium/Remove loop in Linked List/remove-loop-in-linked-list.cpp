class Solution {
  public:
    void removeLoop(Node* head) {
        if (!head || !head->next) return;

        Node *slow = head, *fast = head;

        // Detect cycle using Floyd's algorithm
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) { // cycle detected
                break;
            }
        }

        // If no cycle
        if (slow != fast) return;

        // Find the start of the loop
        slow = head;
        if (slow == fast) {
            // Special case: cycle starts at head
            while (fast->next != slow) fast = fast->next;
        } else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        // Remove loop
        fast->next = nullptr;
    }
};
