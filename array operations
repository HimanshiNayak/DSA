#include<iostream>
#define MAXSIZE 100
using namespace std;
int x[MAXSIZE];
int n;
///****traversing*****////
void create_array();
void trav_forward();
void trav_forward();
////*******insertion*******//////
void insert_last(int );
void insert_begin(int );
void insert_at_given_position(int);
///********deletion********///////
void deletion_last(); // as delete is a keyword
void deletion_begin();
void deletion_at_given_position();

///////****searching****//////
int search_element();

void create_array()
{
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++)
	
	cin>>x[i];
	
}

void trav_forward()
{
	cout<<"\nThe array element in forward order:"<<endl;
	for(int i=0;i<n;i++)
	cout<<x[i]<<endl;
	
}

void trav_backward()
{
	cout<<"\nThe array element in backward order:"<<endl;
	for(int i=n-1;i>=0;i--)
	cout<<x[i]<<endl;
}
void insert_last(int a)   // just add and increase size 
{
	x[n] = a;
	n++;
}

void insert_begin(int b)
{
	for( int i = n-1; i>=0;i--)
	    x[i+1] = x[i];
	x[0] = b;
	n++;
}

void insert_at_given_position(int c){
	int p , d;
	cout<<"Enter position: ";
	cin>>p;
	cout<<"Enter element: ";
	cin>>d;
	if (p>n ||p<0){
		cout<<"Invalid Position";
	}
	else
	{
	  for (int i = n-1;i>=p;i--){
	  	x[i+1] = x[i];
	  	x[p] = d;
	  	n++;
	  }	
	}
}

void deletion_last(){   //to delete something just make it zero ...no loop used as we just have to delete the last element
	x[n-1] = 0;
	n--;
}

void deletion_begin(){
	for(int i=0;i<n;i++){
	     x[i] = x[i+1]	;
	}
	x[n-1] =0;
	n--;
}

void deletion_at_given_position(){
	int p;
	cout<<"Enter the postion of the element to be deleted: ";
	cin>>p;
	if (p>n||p<0){
		cout<<"Invaild Position";
	}
	else{
		for (int i=p;i<n;i++){
			x[i]= x[i+1];
		}
		x[n-1] = 0;
		n--;
	}
}

int  search_element(){
 	int t ; 
 	cout<<"Enter the element to be found: ";
 	cin>>t;
 	for(int i= 0;i<n;i++){
 		if (t == x[i]){
 			return i;
		 }
		    
	 }
	       return -1;  // will be out of the loop to check all the conditions .. if it is not found exits the loop
 }



int main()
{    int b;
//	int x[5];
//	for(int i=0;i<5;i++)
//	cin>>x[i];
//	cout<<"The array is"<<endl;
//	for(int i=0;i<5;i++)
//	cout<<x[i]<<endl;
	create_array();
	trav_forward();	
	trav_backward();
	insert_last(7);
	trav_forward();
	cout<<"Enter an ele to insert at begining: ";
	cin>>b;
	insert_begin(b);
	trav_forward();
	 deletion_last();
     trav_forward();
     deletion_begin();
	trav_forward();
	deletion_at_given_position();
	trav_forward();	
	int j;
	j = search_element();
	if (j == -1)
	    cout<<"Element not found";
	    
    else
        cout<<"Element at position : "<<j;
	return 0;
 }
