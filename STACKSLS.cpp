#include <iostream>
using namespace std;

struct Node{
	int value;
	struct Node* next;
	
};
class Stack{
  public:
	struct Node* top;
	void push(int value){
		struct Node* temp;
		temp=new Node();
		if(!temp){
			cout<<"overflow"<<endl;
		}else {
			temp->value=value;
			temp->next=top;
			top=temp;
		}
		
	}
	void pop(){
		if(top==NULL){
			cout<<"ubnderflow  "<<endl;
		}else {
			top=top->next;
		}
	}
	void peek(){
		cout<<"peek is "<<top->value<<endl;
	}
	void display(){
		struct Node* current=top;
		while(current!=NULL){
			cout<<current->value<<endl;
			current=current->next;
		}
	}
};

int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.display();
	s.pop();
	s.push(30);
	s.display();
	
	return 0;
}
