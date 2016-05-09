ListNode* TailOfK(ListNode* phead, size_t k)
{
	if (phead == NULL || k > Lenth(phead))  //����Ϊ�ջ�K����������
		return NULL;
	ListNode* cur1 = phead;
	ListNode* cur2 = phead;
	while (k--)
	{
		cur1 = cur1->next;
	}
	while (cur1)
	{
		cur1 = cur1->next;
		cur2 = cur2->next;
	}
	return cur2;
}