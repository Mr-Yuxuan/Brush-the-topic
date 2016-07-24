bool IsCompleteTree()
{
	int h = 1;
	_IsCompleteTree(_root, h);

	if (h)
		return true;
	return false;
}
int _IsCompleteTree(BinaryNode<T>* root, int& h)
{
	if (root == NULL)
		return 0;
	int leftH = _IsCompleteTree(root->_left, h);
	int rightH = _IsCompleteTree(root->_right, h);
	if ((leftH != rightH) && (leftH - rightH != 1))
		h = 0;

	return leftH > rightH ? leftH + 1 : rightH + 1;

}