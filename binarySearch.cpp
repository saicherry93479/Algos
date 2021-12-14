#include<iostream>
using namespace std;
//in binary search array should be sorted
//i am here using isertion sort for sorting
bool binarySearch(int arr[],int start,int end,int search){
	if(start <end){
			int mid=(end-start)/2;
	if(arr[mid]==search ){
		return true;
	} else if(search<arr[mid]){
		return binarySearch(arr,start,mid,search);
	} else {
		return  binarySearch(arr,mid+1,end,search);
	}
	} else {
		return false;
	}

	
	
}
int main(){
//	insertion sort 
//	intializing the array and number of elments
	int num,arr[num];
	cout<<"enter the number of elements "<<endl;
	cin>>num;
//	taking input
	cout<<"enter the elements "<<endl;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}

	for(int i=1;i<num;i++){
	
		int temp=arr[i];
		int j=i-1;
        while(j>=0){
        
        	
        	if(arr[j]>temp){
        		arr[j+1]=arr[j];
        		j--;
			}else {
				break;
			}
		}
	
		arr[j+1]=temp;
		
		
	}
	for(int i=0;i<num;i++){
	cout<<arr[i]<<" ";
	}
	cout<<endl;
	int search;
	cout<<"enter search num "<<endl;
	cin>>search;
	if(binarySearch(arr,0,num,search)==1){
		cout<<"found sucessfully"<<endl;
		
	}else {
		cout<<"not found";
	}
	return 0;
}
