         //����������ȣ��ֱ���������������� �ٽ��бȽϷ�������
size_t _Depth(BinaryNode<T>* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		size_t left = 1;
		size_t right = 1;
		left += _Depth(root->_left);
		right += _Depth(root->_right);
		return left>right ? left : right;
	}
}