        //�������������ҳ����ǵ�һ��������㡣
       //��������������ȣ����ó����������ĳ��ȣ���ͬʱ�߾��ҵ���һ�������ˡ�
ListNode *FindConmmonNode(ListNode *L1, ListNode *L2)
{
	int len1 = GetLen(L1);
	int len2 = GetLen(L2);
	int dilen = len1 - len2;
	int i = 0;
	ListNode *pHeadlong = L1;
	ListNode *pHeadshort = L2;
	if (len2 > len1);
	{
		pHeadlong = L2;
		pHeadshort = L1;
		dilen = L2 - L1;
	}
	for (i = 0; i < dilen; i++)
	{
		pHeadlong = pHeadlong->next;
	}
	while ((pHeadlong != NULL) && (pHeadshort != NULL) && (pHeadlong != pHeadshort))
	{
		pHeadlong = pHeadlong->next;
		pHeadshort = pHeadshort->next;
	}
	ListNode *pFindNode = pHeadlong;
	return pFindNode;
}
int Getlen(ListNode *pHead)
{
	int len = 0;
	ListNode *pNode = pHead;
	while (pNode != NULL)
	{
		len++;
		pNode = pNode->next;
	}
	return len;
}