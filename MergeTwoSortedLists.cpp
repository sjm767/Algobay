//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//
//};
//ListNode *mergeLists(ListNode *l1, ListNode *l2);
//int main()
//{
//	ListNode *l1 = new ListNode(1);
//	l1->next = new ListNode(2);
//
//	ListNode *l2 = new ListNode(1);
//	l2->next = new ListNode(3);
//	l2->next->next = new ListNode(1);
//	l2->next->next->next = new ListNode(9);
//
//	mergeLists(l1, l2);
//	return 0;
//}
//
//ListNode *mergeLists(ListNode *l1, ListNode *l2)
//{
//	ListNode *result = new ListNode(-1);
//	ListNode *temp = result;
//	while (l1 != NULL && l2 != NULL)
//	{
//		if (l1->val == l2->val)
//		{
//			temp->next = new ListNode(l1->val);
//			temp = temp->next;
//			temp->next = new ListNode(l2->val);
//			temp = temp->next;
//
//			l1 = l1->next;
//			l2 = l2->next;
//		}
//		else if (l1->val > l2->val)
//		{
//			temp->next = new ListNode(l2->val);
//			temp = temp->next;
//			l2 = l2->next;
//		}
//		else
//		{
//			temp->next = new ListNode(l1->val);
//			temp = temp->next;
//			l1 = l1->next;
//		}
//	}
//
//	if (l1 != NULL)
//	{
//		while (l1 != NULL)
//		{
//			temp->next = new ListNode(l1->val);
//			l1 = l1->next;
//			temp = temp->next;
//		}
//	}
//	if (l2 != NULL)
//	{
//		while (l2 != NULL)
//		{
//			temp->next = new ListNode(l2->val);
//			l2 = l2->next;
//			temp = temp->next;
//		}
//	}
//
//
//	return result->next;
//}