//将当前节点的下一个结点的值赋给当前节点，删除下一个结点
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