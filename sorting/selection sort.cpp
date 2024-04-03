//chosethe min element and just keep it in the begining
//time com: O(n2)
// unstable : as the order gets ..
//application:max swaps is O(n) , but in bi=ubble , it is on2
#include<iostream>
#define MAXSIZE 100
using namespace std;
int n;
int a[MAXSIZE];
void create_array()
{
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++)
	
	cin>>a[i] ;
	
}
void selection(int a[], int n){
	for (int i = 0; i<n-1;i++){
		int minindex = i;
		for(int j = i+1; j<n;j++){
			if(a[j]>a[j+1]){
				minindex=j;
			}
		}
		if(minindex != i)
		    swap(a[i],a[minindex]);
	}
}
void display(int a[] , int n){
	for(int i =0 ;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	create_array();
	selection(a,n);
	display(a,n);
}
