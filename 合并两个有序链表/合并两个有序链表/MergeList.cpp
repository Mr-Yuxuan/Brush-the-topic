ListNode* MergeList(ListNode* l1, ListNode* l2)
{
	if (l1 == NULL)
		return l2;
	if (l2 == NULL || l1 == l2)
		return l1;
	ListNode* newhead = NULL;
	if (l1->data < l2->data)
	{
		newhead = l1;
		l1 = l1->next;
	}
	else
	{
		newhead = l2;
		l2 = l2->next;
	}
	ListNode* cur = newhead;
	while (l1&&l2)
	{
		if (l1->data < l2->data)
		{
			cur->next = l1;
			l1 = l1->next;
		}
		else
		{
			cur->next = l2;
			l2 = l2->next;
		}
		cur = cur->next;
	}
	if (l1 == NULL)
	{
		cur->next = l2;
	}
	else
	{
		cur->next = l1;
	}
	return newhead;
}