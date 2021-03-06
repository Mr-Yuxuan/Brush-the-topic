         //二叉树层序遍历（借用队列）
void _LevelOder(BinaryNode<T>* root)
{
	if (root == NULL)
		return;
	queue<BinaryNode<T>*> q;
	q.push(root);
	while (q.size())
	{
		BinaryNode<T>* tmp = q.front();
		cout << tmp->_data << ' ';
		q.pop();
		if (tmp->_left)
			q.push(tmp->_left);
		if (tmp->_right)
			q.push(tmp->_right);
	}
	return;
}