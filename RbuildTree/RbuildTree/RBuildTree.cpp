BinaryNode<T>* Rebuild(int* pre, int begin_pre, int end_pre, int* in, int begin_in, int end_in)
{
	if (end_pre - begin_pre != end_in - begin_in)
		return NULL;
	if (begin_pre > end_pre || begin_in > end_in)
		return NULL;
	BinaryNode<int> Node(pre[begin_pre]);
	if (begin_pre == end_pre)
		return Node;
	int i = begin_in;
	int lenth = 0;
	for (; i <= end_in; ++i)
	{
		if (in[i] == per[begin_pre])
			break;
	}
	if (i > end_in)
		return NULL;


	Node._left = Rebuild(pre, begin_pre + 1, begin_pre + i, in, begin_in, i - 1);
	Node._right = Rebuild(pre, begin_pre + i + 1, end_pre, i + 1, end_in);
	return Node;

}