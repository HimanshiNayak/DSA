#include<iostream>
using namespace std;
class heap{
	public:
	int a[100];
	int n=0;
	heap(){
		a[0]=-1;
	}
	void insert(int x){
	n=n+1;
	int index= n;
	a[index]=x;
	while(index>1)	{
		int parent =index/2;
		//max heap
		if(a[parent]<a[index]){
			swap(a[parent],a[index]);
			index=parent;
		}
		else{
			return ;
		}
	}
	}
        void deleteroot(){
		if(n==0){
			cout<<"Nothing is there to be deleted.";
			return;
		}
	a[1]=a[n];
	n--;
	//take root to right position
	int i=1;
	while(i<=n){ // because size was decreased by one
	int left = 2*i;
	int right=2*i+1;
	if(left<=n && a[i]<a[left]){
		swap(a[left],a[i]);
		i=left;
	}	
	else if(right<=n && a[i]<a[right]){
		swap(a[right],a[i]);
		i=right;
	}
	else{
		return;
	}
	}
	}
	void print(){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
};
int main(){
	heap h;
	h.insert(50);
	h.insert(55);
	h.insert(53);
	h.insert(52);
	h.insert(54);
	h.print();
	h.deleteroot();
	h.print();
}
