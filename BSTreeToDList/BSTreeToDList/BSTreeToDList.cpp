//������������ת���������˫���������ܴ����κ��½ڵ㣬ֻ�ܵ������нڵ�ָ���ָ��
Node* BSTToDL()
{
	Node* head = NULL;
	Node* cur = _root;
	Node* per = NULL;
	_BSTToDL(cur, per, head);
	return head;

}
void _BSTToDL(Node* cur, Node*& per, Node*& head)
{
	if (cur == NULL)
		return;

	_BSTToDL(cur->_left, per, head);
	if (per == NULL)
		head = cur;
	else
	{
		cur->_left = per;
		per->_right = cur;
	}
	per = cur;
	_BSTToDL(cur->_right, per, head);

}