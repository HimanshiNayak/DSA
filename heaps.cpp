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
}
