#include<iostream>
using namespace std;

//hash function here using modolo 

class hash{
  public :	
	int key;
	int value;
	hash(int k,int v){
		this->key=k;
		this->value=v;
	}
	
};
class hashTable{
	private :
		hash **t;
	public :
	  hashTable(){
		t=new hash*[20];
		for(int i=0;i<20;i++){
			t[i]=NULL;
		}
	}
		int hashFun(int k){
			return k%20;
		}
		void insert(int k,int v){
			int key=hashFun(k);
			 while (t[key] != NULL && t[key]->key != k) {
            key = hashFun(key + 1);
         }
         if (t[key] != NULL)
            delete t[key];
         t[key] = new hash(k, v);
		}
		 int SearchKey(int k) {
         int h = hashFun(k);
         while (t[h] != NULL && t[h]->key != k) {
            h = hashFun(h + 1);
         }
         if (t[h] == NULL)
            return -1;
         else
            return t[h]->value;
      }

	
};

int main(){
	hashTable h;
	h.insert(1,23);
	h.insert(10,25);
	h.insert(1,4);
	h.insert(89,133);
	h.insert(100,232);
	h.insert(14,202);
	if(h.SeachKey(100)==-1){
		cout<<"not fond "<<endl;
	}else {
	
	cout<<"found at "<<h.SearchKey(100)<<endl;
}
	return 0;
}
