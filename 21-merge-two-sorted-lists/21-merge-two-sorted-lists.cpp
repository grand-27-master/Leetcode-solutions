/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL and list2==NULL)
            return NULL;
        
        ListNode* list3=new ListNode();
        ListNode* temp=list3;
        
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                temp->next=list1;
                list1=list1->next;
                temp=temp->next;
            }
            else
            {
                temp->next=list2;
                list2=list2->next;
                temp=temp->next;
            }
        }
        temp->next=(list1==NULL)?list2:list1;
        return list3->next;
    }
};