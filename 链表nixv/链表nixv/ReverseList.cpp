ListNode* Reverse(ListNode* head)
{
	if (head == NULL || head->m_pNext)
		return head;
	ListNode* newHead = NULL;
	ListNode* cur = head;
	ListNode* per = NULL;
	while (cur)
	{
		//ժ
		per = cur;
		cur = cur->m_pNext;
		//��
		per->m_pNext = newHead;
		newHead = per;
	}
	return newHead;
}