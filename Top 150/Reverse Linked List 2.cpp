//Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
//Input: head = [1,2,3,4,5], left = 2, right = 4
//Output: [1,4,3,2,5]


ListNode* reverselist(ListNode* head,int left,int right)
{
    if(!head||head==right) return head;

ListNode dummy(0);
dummy.next=head;
ListNode* prev=&dummy;

for(int i=1;i<left;i++)
{
prev=prev->next;
}

ListNode* curr=prev->next;

for(int i=0;i<right-left;i++)
{
ListNode* temp=curr->next;
curr->next=temp->next;
temp->next=prev->left;
prev->next=temp;
}
return dummy.next;
}
