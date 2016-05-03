ListNode* Reverse(ListNode* head)
{
	if (head == NULL || head->m_pNext)
		return head;
	ListNode* newHead = NULL;
	ListNode* cur = head;
	ListNode* per = NULL;
	while (cur)
	{
		//Õª
		per = cur;
		cur = cur->m_pNext;
		//½Ó
		per->m_pNext = newHead;
		newHead = per;
	}
	return newHead;
}