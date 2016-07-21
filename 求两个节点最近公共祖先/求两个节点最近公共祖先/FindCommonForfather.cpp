//�������ڵ�������������
BinaryNode<T>* FindCommonForfather(BinaryNode<T>*root, BinaryNode<T>*a, BinaryNode<T>*b)
{
	if (root == NULL) //a,b������
		return NULL;
	if (root == a || root == b)
		return root;
	BinaryNode<T>* left = FindCommonForfather(root->_left, a, b);
	BinaryNode<T>* right = FindCommonForfather(root->_left, a, b);
	if (left&&right) //a,b��root��������
		return root;
	return left ? left : right;//��ͬ��
}