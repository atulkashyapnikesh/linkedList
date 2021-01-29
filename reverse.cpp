#include<bits/stdc++.h>
using namespace std;

class Node{

public:

	int key;
	int data;
	Node *next;

	Node(){
		key=0;
		data=0;
		next=NULL;
	}

	Node(int key,int data){
		this->key=key;
		this->data=data;
	}


};

class singlylinkedlist{

public:

	Node *head;

	singlylinkedlist(){

		head = NULL;
	}

	singlylinkedlist(Node *n){

		head = n;
	}

	Node *nodeExit(int k){

		Node *ptr = head;

		Node *temp = NULL;

		while(ptr!=NULL){

			if(ptr->key == k)
				temp=ptr;
			ptr=ptr->next;
		}

		
		return temp;
	}

	void appendNode(Node *n){

		Node *ptr =head;

		if(head == NULL){

			head = n;

			cout<<"\n\n Node is Appended To Head "<<endl;

		}

		else {

			if(nodeExit(n->key)!= NULL)
				cout<<"\n\n This Node Is Already Exit"<<endl;

			else{

				while(ptr->next!=NULL){
					ptr=ptr->next;
				}

				ptr->next = n;

				cout<<"\n\n Node Is Appended To The End"<<endl;
			}
		}
	}

	void printlist(){

		Node *ptr=head;
		

		if(head == NULL)
			cout<<"\n\n There Is No Any Node "<<endl;

		else{

			while(ptr!=NULL){
				cout<<"("<<ptr->key<<" , "<<ptr->data<< ")-->";

				ptr=ptr->next;

				

			}
		}

		
	}

	int lenght(){

		Node *ptr=head;

		int count =0;

		if(head == NULL)
			return 0;
		else{
			while(ptr!=NULL){
				ptr=ptr->next;

				count++;
			}

			return count;
		}


	}

	void reverse(){

		Node *p ,*q;

		int temp = 0;

		int len = lenght();

		int i=0;

		int j=len-1;

		p=q=head;

		int k=0;

		while(i<j){

			k=0;

			while(k<j){
				q= q->next;

				k++;
			}

			temp= p->data;
			p->data = q->data;
			q->data = temp;
			i++;
			j--;
			p=p->next;

			q=head;

		}
	}


};

 int main()
{

	singlylinkedlist s;

	int key1,data1,n;

	cout<<"\n\n The No Of Node You Want To Make = ";
	cin>>n;

	for(int i=0;i<n;i++){

		Node *n1=new Node();

		cout<<"\n\n Enter Key Value = ";
		cin>>key1;
		cout<<"\n\n Enter Data Value = ";
		cin>>data1;

		n1->key=key1;
		n1->data=data1;

		s.appendNode(n1);
	}
	cout<<endl;

	s.printlist();

	cout<<endl;

	s.reverse();

	cout<<"\n\n After Reversing"<<endl;

	s.printlist();


	cout<<endl;
	
	return 0;
}





