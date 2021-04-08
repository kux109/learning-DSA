#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node * next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

int getMiddle(Node *head)
{
   int n=0;
   Node * temp = head;
   while(temp!=NULL)
   {
       n++;
       temp=temp->next;
   }
   int i=0;
   while(i<n/2)
   {
       head=head->next;
       i++;
   }
   return head->data;
}

int main()
{
	Node * head = new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
	head->next->next->next=new Node(4);
	head->next->next->next->next=new Node(5);

	int mid = getMiddle(head);
	cout<<mid<<endl;

	return 0;
}
