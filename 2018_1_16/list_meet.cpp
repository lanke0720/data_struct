
#include <iostream>
#include <assert.h>
using namespace std;

typedef struct listnode
{
	int data;
	listnode* next;
	listnode(int x = int())
		:data(x)
		,next(NULL)
	{}
}Node;

bool is_point(Node* head1, Node* head2)
{
	while(head1)
	{
		head1 = head1->next;
	}
	while(head2)
	{
		head2 = head2->next;
	}
	return (head1 == head2)?true:false;
}

Node* point_list(Node* head1, Node* head2)
{
	Node* cur1 = head1;
	Node* cur2 = head2;
	while (cur1 != cur2)
	{
		if (cur1 == NULL)
			cur1 = head2;
		if (cur2 == NULL)
			cur2 = head1;

		cur1 = cur1->next;
		cur2 = cur2->next;
	}
	return cur1;
}

Node* ringmeetnode(Node* head)
{
	assert(head);
	Node* pslow = head->next;
	Node* pfast = pslow->next;

	while (pfast != pslow)
	{
		pslow = pslow->next;
		pfast = pfast->next->next;
	}
	return pslow;
}

bool Is_Ring(Node* head)
{
	assert(head);
	Node* pslow = head->next;
	Node* pfast = pslow->next;

	while (pfast != NULL)
	{
		if(pfast == pslow)
		{
			return true;
		}
		pslow = pslow->next;
		pfast = pfast->next->next;
	}
	return false;
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
	//l2
	Node node21(201);
	Node node22(202);
	Node node23(203);
	Node node24(204);
	//Node node25(5);

	node21.next = &node22;
	node22.next = &node23;
	node23.next = &node24;
	node24.next = &node5;

	Node* head1 = &node1;
	Node* head2 = &node21;

	cout<<is_point(head1, head2)<<endl;
	cout<<point_list(head1, head2)->data<<endl;
	
}

void Test2() //
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
	Node* head1 = &node1;
	//l2 
	Node node21(1);
	Node node22(2);
	Node node23(3);
	Node node24(4);
	Node node25(5);
	Node node26(6);
	Node node27(7);
	Node node28(8);
	Node node29(9);
	Node node210(10);

	node21.next = &node22;
	node22.next = &node23;
	node23.next = &node24;
	node24.next = &node25;
	node25.next = &node26;
	node26.next = &node27;
	node27.next = &node28;
	node28.next = &node29;
	node29.next = &node210;

	node210.next = &node27;
	Node* head2 = &node21;

	if (Is_Ring(head1))
	{
		cout<<"head1 is ring list"<<endl;
	}
	else
	{
		cout<<"head1 is not ring"<<endl;
	}

	if (Is_Ring(head2))
	{
		cout<<"head2 is ring list"<<endl;
	}
	else
	{
		cout<<"head2 is not ring"<<endl;
	}
	if (Is_Ring(head1) && Is_Ring(head2))
	{
		cout<<"two ringlist is always not meet"<<endl;
	}	
}

Node* EntryRing(Node* phead)
{
	Node* entrynode = ringmeetnode(phead);
	Node* pnode = phead;

	while (pnode != entrynode)
	{
		entrynode = entrynode->next;
		pnode = pnode->next;
	}
	return entrynode;
}


Node* entrynode(Node* head, Node* meetnode)
{
	Node* entry = meetnode;
	Node* curnode = head;
	while (curnode != meetnode)
	{
		curnode = curnode->next;
		entry = entry->next;
	}
	return entry;
}

void Test3()
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

	node9.next = &node5;

	//l2
	Node node21(1);
	Node node22(2);
	Node node23(3);
	Node node24(4);
	Node node25(5);

	node21.next = &node22;
	node22.next = &node23;
	node23.next = &node24;
	node24.next = &node25;

	node25.next = &node3;

	Node* head1 = &node1;
	Node* head2 = &node21;
	if (Is_Ring(head1))
	{
		cout<<"head1 is ring list"<<endl;
	}
	else
	{
		cout<<"head1 is not ring"<<endl;
	}

	if (Is_Ring(head2))
	{
		cout<<"head2 is ring list"<<endl;
	}
	else
	{
		cout<<"head2 is not ring"<<endl;
	}

	 Node* entry1 = EntryRing(head1);
	 Node* entry2 = EntryRing(head2);
	 
	 if (entry1 == entry2)
	 {
		cout<<"is meet"<<endl;
	 }
 
}

int main()
{
	//Test1(); //two list is  meet
	//Test2();  //two ringlist is not meet
	Test3(); //one list && one ringlist;  
	return 0;
}