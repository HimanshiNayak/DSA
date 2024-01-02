#include<iostream>
#define MAXSIZE 5
using namespace std;
class Stack{
	int s[MAXSIZE], top;
public:
	Stack()
	{
		top = -1;
	}
	void push(int i);
	int pop();
	bool isEmpty(); // java style fist small the capital
	bool isFull();
	int getTop();
	
};
void Stack::push(int x){
	if(top == MAXSIZE -1 ){
	   cout<<"Stack overflow..!"<<endl;
	}
	else{
		top ++;
		s[top] = x;  // s[++top] = x; , incr then store
		
	}
}
int Stack::pop(){
	int t = -1 ; // so that if the if loop is executed then t will be -1 and -1 will be returned // if (isEmpty(){cout<<underflow;}
	if(top == -1){
		cout<<"Stack Underflow..!"<<endl;
//	return -1;
	}
	else{
		t = s[top];   // int t = s[top--] , store then dec
		top--;
		0
//		return t ;
		
	}
	 return t;
}
bool Stack::isEmpty(){
	if(top == -1){
		return true;
	}
	else{
		return false;
	}
}
bool Stack::isFull(){
	if(top == MAXSIZE -1){
		return true;
	}
	else{
		return false;
	}
}
int Stack::getTop(){
		int t = -1 ; // so that if the if loop is executed then t will be -1 and -1 will be returned // if (isEmpty(){cout<<underflow;}
	if(top == -1){
		cout<<"Stack Underflow..!"<<endl;
//	return -1;
	}
	else{
		 t = s[top];   // int t = s[top--] , store then dec
	
//		return t ;
		
	}
	 return t;
}
int main(){
	Stack s;
	cout<<s.pop()<<endl; 		
//	s.push(5);
//	s.push(10);
//	s.push(9);
//	s.push(10);
//	s.push(66);
//	s.push(89);

for(int i = 0 ; i<7;i++){
	int t;
	cout<<"Enter the value to insert in stack: \n";
	cin>>t;
	s.push(t);		
}
cout<<s.isEmpty()<<endl; // will give 0 as it has values
cout<<s.isFull()<<endl;   // will give 1 as it is full

//for(int i = MAXSIZE -1  ; i >=0 ; i--){
//	cout<<s.pop();
//}
cout<<"The topmost element of the stack: "<<s.getTop()<<endl;
// to display elements
cout<<"Elements of the stack: "<<endl;
for(int i = 0 ; i<7;i++){
cout<<	s.pop()<<" ";		
}
 

}


