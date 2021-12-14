#include <iostream>
using namespace std;

int main(){
	int num,arr[num];
	cout<<"enter the number of elemnts "<<endl;
	cin>>num;
	cout<<"enter the elments ";
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int search;
	cout<<"enter the number to search "<<endl;
	cin>>search;
	
	for(int i=0;i<num;i++){
		
		if(arr[i]==search){
			cout<<"number found at "<<i<<endl;
			break;
		}
	}
	return 0;
}
//insertion searc or linear search classical way of searching
