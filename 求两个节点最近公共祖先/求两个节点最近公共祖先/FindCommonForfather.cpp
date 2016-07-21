//求两个节点的最近公共祖先
BinaryNode<T>* FindCommonForfather(BinaryNode<T>*root, BinaryNode<T>*a, BinaryNode<T>*b)
{
	if (root == NULL) //a,b不存在
		return NULL;
	if (root == a || root == b)
		return root;
	BinaryNode<T>* left = FindCommonForfather(root->_left, a, b);
	BinaryNode<T>* right = FindCommonForfather(root->_left, a, b);
	if (left&&right) //a,b在root左右两侧
		return root;
	return left ? left : right;//在同侧
}