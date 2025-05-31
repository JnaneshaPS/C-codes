//You are given the heads of two sorted linked lists list1 and list2.
//Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
//Return the head of the merged linked list.


ListNode* merge(ListNode* l1,ListNode* l2)
{
  ListNode* dummy=new ListNode(0);
  ListNode* tail=dummy;

while(l1&&l2){
if(l1->val<l2->val)
{
  tail->next=l1;
l1=l1->next;
}else{
tail->next=l2;
l2=l2->next;
}
tail=tail->next;
}
l1=(l1?l1:l2);
return dummy->next;
}
