ComplexListNode* Clone(ComplexListNode* head)
{
	if (head == NULL)
		return NULL;
	CloneNodes(head);
	ConnectSilbings(head);
	return Rconnect(head);
}
void CloneNodes(ComplexListNode* head)
{
	ComplexListNode* cur = head;
	while (cur)
	{
		CompListNode* pcur = new ComplexListNode();
		cur->_value = pcur->_value;
		pcur->next = cur->next;
		pcur->_sibling = NULL;
		cur->next = pcur;
		cur = pcur->next;
	}
}
void ConnectSibling(ComplexListNode* head)
{
	ComplexListNode* cur = head;
	ComplexListNode* pcur = cur->next;
	while (cur)
	{
		if (cur->_sibling != NULL)
		{
			pcur->_sibling = cur->_sibling->next;
		}
		cur = pcur->next;
		if (cur == NULL)
		{
			break;
		}
		pcur = cur->next;
	}
}
ComplexListNode* Rconnect(ComplexListNode* head)
{
	ComplexListNode *cur = head;
	ComplexListNode* newhead = cur->next;
	ComplexListNode* pcur = newhead;
	while (cur)
	{
		cur->next = pcur->next;
		cur = cur->next;
		if (cur == NULL)
		{
			break;
		}
		pcur->next = cur->next;
	    pcur = cur->next;
	}
	return newhead;
}