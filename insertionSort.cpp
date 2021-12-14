#include<iostream>
using namespace std;

int main(){
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
	cout<<arr[i]<<endl;
	}
	return 0;
}

//explanation of code form 15 -33
// insertion sort is like taking out an elemnt and inserting at the appropiate place 
//5 4 3 2 1
//comparisons start form indedx 1 that is value 4 why ? because there is no element before zero to comapare it 
//or taking elemnt 0 as sorted array
//here 5 is a sorted arry and 4 3  2 1 is unsorted array
//in every iteration  first elemnnt of unsorted is taken out and does comparisons with sorted array and replaces in appropirate place
//close look ---->>> 
//step 1 unsorted array is 5 ::: sorted array is 4 3 2 1
//take out  unsorted array first elemt that is 4 then sorted array is 5 ::: unsorted array is __ 3 2 1  where blank space is outed elment
//and copares with the sorted array
//where 5 is compared with the 4 and it will jump by one index and occupy index 2
//in the same way it procedssss....


