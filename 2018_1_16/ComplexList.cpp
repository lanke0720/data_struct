#include <iostream>

using namespace std;

typedef struct ComplexNode{ 

	int _data ; // 数据 

	struct ComplexNode * _next; // 指向下一个节点的指针 

	struct ComplexNode * _random; // 指向随机节点（可以是链表中的任意节点 or 空） 
	ComplexNode(int x = int())
		:_data(x)
		,_next(NULL)
		,_random(NULL)
	{}
}Node;

void CopyList(Node* head)
{
	//1
	Node* curnode = head;
	while (curnode)
	{
		int tmp = curnode->_data;
		Node* newnode = new Node(tmp);
		newnode->_next = curnode->_next;
		curnode->_next = newnode;
		curnode = curnode->_next->_next;
	}
	while (head)
	{
		cout<<head->_data<<' ';
		head = head->_next;
	}
}

void ConnectRNodes(Node* pHead)  
{  
    Node* pNode = pHead;  
    while(pNode != NULL)                
    {  
        Node *pCloned = pNode->_next;  
        if(pNode->_random != NULL)  
        {  
            pCloned->_random = pNode->_random->_next;      
        }  
        pNode = pCloned->_next;  
    }  
}

Node* ReconnectNodes(Node* pHead)  
{  
    Node* pNode = pHead;  
    Node* pClonedHead = NULL;  
    Node* pClonedNode = NULL;  
    if(pNode != NULL)  
    {  
        pClonedHead = pClonedNode = pNode->_next;  
        pNode->_next = pClonedNode->_next;  
        pNode = pNode->_next;  
    }  
    while(pNode != NULL)  
    {  
        pClonedNode->_next = pNode->_next;   
        pClonedNode = pClonedNode->_next;  
        pNode->_next = pClonedNode->_next;  
        pNode = pNode->_next;  
    }  
    return pClonedHead;  
}

int main()
{

	Node node1(1);
	Node node2(2);
	Node node3(3);
	Node node4(4);
	Node node5(5);
	Node node6(6);

	node1._next = &node2;
	node2._next = &node3;
	node3._next = &node4;
	node4._next = &node5;
	node5._next = &node6;

	node1._random = NULL;
	node2._random = &node4;
	node3._random = &node2;
	node4._random = &node3;
	node5._random = &node1;
	node6._random = NULL;

	Node* head = &node1;
	CopyList(head);
	 ConnectRNodes(head);
	 Node* ReconnectNodes(head);
	return 0;
}