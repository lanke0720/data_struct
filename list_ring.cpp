#include <iostream>
#include <assert.h>
using namespace std;

//带环，环的长度，环的入口点
typedef struct listnode
{
	int data;
	listnode* next;
	listnode(int x = int())
		:data(x)
		,next(NULL)
	{
	}
}Node;

void AddToList(Node** phead, int data)
{
	Node* tmp = new Node;
	tmp->data = data;
	tmp->next = NULL;

	if (*phead == NULL)
	{
		*phead = tmp;
	}
	else
	{
		Node* cur = *phead;
		while(cur->next)
		{
			cur = cur->next;
		}
		cur->next = tmp;
	}
}

bool IsRing(Node* phead)
{
	assert(phead != NULL);
	Node* pslow = phead->next;
	Node* pfast = pslow->next;

	while(pslow && pfast)
	{
		if (pslow == pfast)
		{
			return true;
		}
		pslow = pslow->next;
		pfast = pfast->next->next;
	}
	return false;
}

Node* MeetNode(Node* phead)
{
	Node* pslow = phead->next;
	Node* pfast = pslow->next;
	while(pslow != pfast)
	{
		pslow = pslow->next;
		pfast = pfast->next->next;
	}
	return pslow;
}

int Ring_C(Node* phead)
{
	Node* pnode = MeetNode(phead);
	Node* curnode = pnode->next;
	int k = 1;
	while (pnode != curnode)
	{
		curnode = curnode->next;
		++k;
	}
	return k;	
}

Node* EntryRing(Node* phead)
{
	Node* entrynode = MeetNode(phead);
	Node* pnode = phead;

	while (pnode != entrynode)
	{
		entrynode = entrynode->next;
		pnode = pnode->next;
	}
	return entrynode;
}

void Test1()
{
	Node node1(1);
	Node node2(2);
	Node node3(3);
	Node node4(4);
	Node node5(5);
	Node node6(6);
	Node node7(7);
	Node node8(8);
	Node node9(9);
	Node node10(10);

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = &node6;
	node6.next = &node7;
	node7.next = &node8;
	node8.next = &node9;
	node9.next = &node10;
	
	node10.next = &node5;
	Node* head = &node1;

	cout<<IsRing(head)<<endl;
	cout<<MeetNode(head)->data<<endl;
	cout<<Ring_C(head)<<endl;
	cout<<EntryRing(head)->data<<endl;
}

int main()
{
	/*Node* head = NULL;
	AddToList(&head, 1);
	AddToList(&head, 2);
	AddToList(&head, 3);
	AddToList(&head, 4);
	AddToList(&head, 5);
	AddToList(&head, 6);
	AddToList(&head, 7);
	AddToList(&head, 8);
	Node* curnode = head;
	while (curnode)
	{
		cout<<curnode->data<<' ';
		curnode = curnode->next;
	}
	cout<<endl;
	curnode = head->next->next;
	cout<<IsRing()<<endl;*/
	Test1();
	return 0;
}

