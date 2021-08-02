#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;
		Node(int n){
			data=n;
			prev=NULL;
		}
};

void multiply(Node *tail, int n){
	Node *prev=tail;
	Node *temp=tail;
	int carry=0;
	while(temp!=NULL){
		int data=temp->data*n+carry;
		temp->data=data%10;
		carry=data/10;
		prev=temp;
		temp=temp->prev;
	}
	while(carry!=0){
		prev->prev=new Node((int)carry%10);
		carry=carry/10;
		prev=prev->prev;
	}
}
void print(Node *tail){
	if(tail==NULL){
		return;
	}
	print(tail->prev);
	cout<<tail->data;
}

int main(){
	int i,n;
	cin>>n;
	Node tail(1);
	for(i=2;i<=n;i++){
		multiply(&tail,i);
	}
	print(&tail);
	return 0;
}
