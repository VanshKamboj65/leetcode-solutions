class Solution {
public:
    ListNode* getKthNode(ListNode* temp, int k) {
        k -= 1;

        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }

        return temp;
    }

    ListNode* KReverse(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;
        ListNode* newHead = NULL;

        while (temp != NULL) {
            ListNode* kthNode = getKthNode(temp, k);

            if (kthNode == NULL) {
                if (prevLast != NULL)
                    prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;

            ListNode* prev = NULL;
            ListNode* curr = temp;

            while (curr != NULL) {
                ListNode* front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
            }

            if (newHead == NULL)
                newHead = kthNode;

            else
                prevLast->next = kthNode;

            prevLast = temp;
            temp = nextNode;
        }

        return newHead == NULL ? head : newHead;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k <= 1)
            return head;

        return KReverse(head, k);
    }
};