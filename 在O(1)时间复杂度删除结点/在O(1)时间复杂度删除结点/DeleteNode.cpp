//����ǰ�ڵ����һ������ֵ������ǰ�ڵ㣬ɾ����һ�����
void DeleteNode(ListNode* pTobeDelete)
{
	assert(pTobeDelete);
	ListNode* del = pTobeDelete->next;
	pTobeDelete->_data = pTobeDelete->next->_data;
	pTobeDelete->next = del->next;
	delete del;
	del = NULL;
	return;
}