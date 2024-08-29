#include <bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size ;
    //constructor 
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    //insertion 
    /*
    TC = O(logN)
    */
    void insertion(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++)//i=1 bcoz at 0 we have no element 
        {
            cout << arr[i] << " ";
        }
        cout << endl ;
    }

};

int main(){
    Heap h;
    h.insertion(50);
    h.insertion(55);
    h.insertion(53);
    h.insertion(52);
    h.insertion(54);
    h.print();


    return 0;
}