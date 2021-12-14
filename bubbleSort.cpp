#include<iostream>
using namespace std;

int main(){
	int num,arr[num];
//   declaring num for number of elemnsts 
//   arr for storing the numbers 
	cout<<"enter the number of elements ";
//   taking inputs
	cin>>num;
	cout<<endl;
	cout<<"enter the numbers"<<endl;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	
	for(int i=num;i>=1;i--){
//     in every iteration one elemnt will pushed to last which is sorted
//     bubble sort is like comaparision of consecutive elmenst 
//     perfomance is n(n)==>n squared

		for(int j=0;j<i-1;j++){

			if(arr[j+1]<arr[j]){

				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;

				
		
			}
		}
	
	}
		for(int i=0;i<num;i++){
		cout<<arr[i]<<endl;
	}
	
	
	return 0;
}
// explanation

// 5 4 3  2  1
// 5 4 3 2 1||  where double slash think as separator of sorted and unsorted array

// over all loop starts with num 17 line that mean it will iterate over 5 times
// in every iteration it will compare consecutive elemnts 
// first iteration and highest j is equal to < i-1 where here i is 5 then j<4
// j=0
// if condition arr[j]>arr[j+1]
// swap both
// 4 5 3 2 1
// j=1
// 4 3 5 2 1
// j=2 
// 4 3 2 5 1 
// j=3 
// 4 3 2 1 ||5 ----->>here 5 is sorted

// 2 nd iterartion j=0 to i=4 j<3
// j=0 arr[j]=4 arr[j+1]=5
// if conditon arr[j]>arr[j+1] treu
// 3 4  2 1 ||5
// j=1
// if condition true
// 3 2 4 1 ||5
// j=2 if true
// 3 2 1 ||4 5
// in the same way it proceeds........
  
