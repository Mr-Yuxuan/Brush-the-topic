
void ListSort(ListNode* head)
{
	if (head == NULL || (head->next == NULL))
		return;
	Node* cur1 = head;
	Node* cur2 = head->next;
	Node* end = NULL;
	while (cur1 != end)
	{
		while ((cur2 != end) && cur1)
		{
			if ((cur1->_data) > (cur2->_data))
			{
				DataType tmp = cur1->_data;
				cur1->_data = cur2->_data;
				cur2->_data = tmp;
			}
			cur1 = cur1->next;
			cur2 = cur2->next;
		}
		end = cur1;
		cur1 = head;
		cur2 = head->next;
	}
}