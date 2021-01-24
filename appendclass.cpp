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

class SinglyLinkList
{
public:
       
       Node *head;

	SinglyLinkList(){

		head=NULL;
    }

	SinglyLinkList(Node *n){
          
          head=n;
	}

	Node *nodeExit(int k){
        Node *ptr=head;
        Node *temp=NULL;
        while(ptr!=NULL){
        	if(ptr->key==k)
        		temp=ptr;
        	ptr=ptr->next;

        }

        return temp;
    }

    void appendNode(Node *n){

    	Node *ptr=head;

    	if(nodeExit(n->key)!=NULL)
    		cout<<"\n This Node Is Already Exit = "<<n->key<<"Please Enter Another Node";
    	else{
    		if(head==NULL){
    			head=n;
    			cout<<"\n\n  Node Appendend"<<endl;
    		}
    		else{
    			while((ptr->next)!=NULL)
    				ptr=ptr->next;

    			ptr->next=n;
    			cout<<"\n\n  Node Appendend"<<endl;


    		}
    	}
    }

    void printList(){
    	if(head==NULL)
    		cout<<" No Node In Singly Link List"<<endl;
    	else{


             cout<<endl<<" Singly Linked Value : ";

    		Node *temp=head;
    		while(temp !=NULL){
    			cout<< "(" <<temp->key<<","<<temp->data<<") --> ";
    			temp=temp->next;
    		}
    	}

    }
};


int main(){
	SinglyLinkList s;

	int key1,data1,n;

	cout<<"\n No of Node you Want Make = ";
	cin>>n;


	for(int i=0;i<n;i++){

	Node *n1 = new Node();

	cout<<"\n Enter key = ";
	cin>>key1;
	cout<<"\n Enter data = ";
	cin>>data1;

    n1->key=key1;
	n1->data=data1;
	s.appendNode(n1);
	
}

  s.printList();
  cout<<endl;



}