void appendTail(const T& node)       //β��
{
	stack1.push(node);
	return;
}
void deleteHead()                    //ͷɾ
{
	if (!stack2.empty())
	{
		stack2.pop();
	}
	else
	{
		if (!stack1.empty())
		{
			
			while (stack1.size() - 1)        
			{
				T tmp = stack1.top();
				stack2.push(tmp);
				stack1.pop();
			}
			stack1.pop();
		}
	}
	return;
}