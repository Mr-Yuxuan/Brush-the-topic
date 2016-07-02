bool _IsBlanceTree(TreeNode* root)
{
	if (root == NULL)
		return true;
	int left = Hight(root->_left);
	int right = Hight(root->_right);
	if (abs(left - right) > 1)
	{
		return false;
	}
	return true;
}
int Hight(TreeNode* root)
	{
		if (root == NULL)
			return 0;
		int left = Hight(root->_left);
		int right = Hight(root->_right);
		return left > right ? left + 1 : right + 1;
	}