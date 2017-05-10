//#include<iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
//int main()
//{
//	ListNode *l1 = new ListNode(1);
//	ListNode *l2 = new ListNode(8);
//
//	l1->next = l2;
//
//	ListNode *ll1 = new ListNode(0);
//
//	ListNode *result = addTwoNumbers(l1, NULL);
//	return 0;
//}
//ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//{
//	ListNode * result;
//	int carry;
//	if (l1 != NULL && l2 != NULL)
//	{
//		result = new ListNode((l1->val + l2->val) % 10);
//		carry = (l1->val + l2->val) / 10;
//
//		l1 = l1->next;
//		l2 = l2->next;
//	}
//	else if (l1 != NULL)
//	{
//		result = new ListNode(l1->val);
//		carry = 0;
//		l1 = l1->next;
//	}
//	else if (l2 != NULL)
//	{
//		result = new ListNode(l2->val);
//		carry = 0;
//		l2 = l2->next;
//	}
//	ListNode  *temp = result;
//
//	while (l1 != NULL || l2 != NULL)
//	{
//		ListNode * newNode;
//		if (l1 != NULL && l2 != NULL)
//		{
//			newNode = new ListNode((l1->val + l2->val + carry) % 10);
//			carry = (l1->val + l2->val + carry) / 10;
//
//			l1 = l1->next;
//			l2 = l2->next;
//		}
//		else if (l1 != NULL)
//		{
//			newNode = new ListNode((l1->val + carry) % 10);
//			carry = (l1->val + carry) / 10;
//			l1 = l1->next;
//		}
//		else if (l2 != NULL)
//		{
//			newNode = new ListNode((l2->val + carry) % 10);
//			carry = (l2->val + carry) / 10;
//			l2 = l2->next;
//		}
//
//		temp->next = newNode;
//		temp = temp->next;
//	}
//
//	if (carry > 0)
//	{
//		temp->next = new ListNode(carry);
//	}
//
//	return result;
//}