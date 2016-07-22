//求最远两个节点距离
int Faraway(BinaryNode<T>* _root)
{
	int away = 0;
	_Faraway(_root, away);
	return away;
}
int _Faraway(BinaryNode<T>* t, int& away)
{
	if (t == NULL)
		return 0;
	int leftH = _Faraway(t->_left, away);
	int rightH = _Faraway(t->_right, away);
	if (leftH + rightH + 1 > away) //刷新距离
		away = leftH + rightH + 1;

	return leftH > rightH ? leftH + 1 : rightH + 1;

}