class Solution{
pubilc:
      ListNode* AddTwoNumbers(ListNode* l1 , ListNode* l2){
                ListNode* dummy_head = new ListNode(0);
                ListNode* current = dummy_head;
                int carry = 0;
                while(l1 != nullptr || l2 != nullptr || carry != 0){
                      int val1 = (l1 != nullptr)?l1->val : 0;
                      int val2 = (l2 != nullptr)?l2->val : 0;
                      int totalsum = val1+val2+carry;
                      int newdigit = totalsum%10;
                      carry = totalsum/10;

                      current->next = new ListNode(newwdigit);
                      current = current->next;
                      if(l1!= nullptr) l1 = l1->next;
                      if(l2!=nullptr) l2 = l2->next;
                }
                ListNode* return_head = dummy_head->next;
                delete dummy_head;
                return return_head;
            }
      };
