
ListNode* FindBeginning(ListNode* head)
{
	if (head == NULL)
		return NULL;
	ListNode* fast = head;
	ListNode* slow = head;

	//find meeting point  
	while (fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			break;
		}
	}

	// check iscricle
	if (fast->next == NULL)
	{
		return NULL;
	}
    slow = head;
	while (slow!= fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	
	return fast;
}