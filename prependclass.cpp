#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int key;
	int data;
	Node *next;
	Node(){
		key=0;
		data=0;
		next=NULL;
	}
	Node(int k,int d){
		key=k;
		data=d;
	}

};
class SinglyLinkedList{
	
public:
	Node *head;
	SinglyLinkedList(){
		head=NULL;
	}
	SinglyLinkedList(Node *n){

		head=n;
	}

	Node * nodeExit(int k){

		Node *temp=NULL;

		Node *ptr=head;
		

		while(ptr!=NULL){
			if(ptr->key==k)
				temp=ptr;
			ptr=ptr->next;
		}
		return temp;
	}

	void prependNode(Node *n){
		

		
			if(nodeExit(n->key)!=NULL){
				cout<<"\n This key Node Is Exit Please Try With Another Key Value"<<endl;

			}
			else{

				n->next=head;
				head=n;
				cout<<"\n Node Attached To The Beginning"<<endl;
            }
            
		}
	

	void printList(){
		Node *ptr=head;

		if(head == NULL)
			cout<<"\n No Node Present In This List"<<endl;
		else{
			while(ptr!=NULL){
				cout<< "("<<ptr->key<<" , "<<ptr->data<< ") -->";
				ptr=ptr->next;
			}
		}

		cout<<endl;
	}

};



int main(){

	SinglyLinkedList s;

	int key1,data1,n;

	cout<<"\n Enter No of Node you want to Make List = ";
	cin>>n;

	for(int i=0;i<n;i++){

		Node *n1=new Node();
		cout<<"\n Enter Key Value = ";
		cin>>key1;
		cout<<"\n Enter Data Value = ";
		cin>>data1;

		n1->key=key1;
		n1->data=data1;

		s.prependNode(n1);
	}

	s.printList();



}