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

class Singlylinkedlist{
public:
	Node *head;
	Singlylinkedlist(){
		head=NULL;
    }
    Singlylinkedlist(Node *n){
          head=n;
    }
    Node *nodeExit(int k){
    	Node *temp=NULL;
    	Node *ptr=head;

    	while(ptr!=NULL){
    		if(ptr->key == k)
    			temp=ptr;
    		ptr=ptr->next;
    	}

    	return temp;
    }

    void insertbetween(Node *n, int k1){
    	Node *ptr=nodeExit(k1);

    	if(ptr == NULL){
    		cout<<"\n This Key Node is Not Exit"<<endl;
    	}

    	if (head == NULL)
    	{
    		head = n;
    		cout<<"\n Node Insert In To The Head"<<endl;
    	}
    	else if(head->key == k1){
    		if(nodeExit(n->key)!=NULL){
    			cout<<"\n This Node Key Value Is Already Exit Insert Another Node"<<endl;
    		}
    		else{
                 n->next=head->next;
                 head->next=n;
                 cout<<"\n Node Attached to After Head Node"<<endl ;
             }
    	}
    	else{
    		if(nodeExit(n->key)!=NULL){
    			cout<<"\n This Node is Exit Please Insert Another key Value"<<endl;

    		}
    		else{
    			n->next=ptr->next;
    			ptr->next=n;
    			cout<<"\n Node is Inserted"<<endl;
    		}
    	}
    }

    void printList(){
    	Node *ptr=head;

    	if(head==NULL)
    		cout<<"\n NO Node Is Present"<<endl;
    	else{
    		while(ptr!=NULL){
    			cout<< "("<<ptr->key<<" , "<<ptr->data<< " ) -->";
    			ptr=ptr->next;
    		}
    	}
    }
     
     
};

int main(){
	Singlylinkedlist s;
	int key1,data1,k,n;

	cout<<"\n Enter Node You Want = ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		Node *n1=new Node();

		cout<<"\n Enter Key Value = ";
		cin>>key1;
		cout<<"\n Enter Data Value = ";
		cin>>data1;

		n1->key=key1;
		n1->data=data1;

		cout<<"\n Insert Key Value You Have To Insert After";
		cin>>k;

		s.insertbetween(n1,k);
	}
	s.printList();
}