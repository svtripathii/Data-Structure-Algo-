#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr={1,2,3,12,15};
    
    //Push_Back
    arr.push_back(16);

    //Print all the element 
    for(int i=0; i<arr.size(); i++) {
        cout<< arr[i] << endl;
    }

    //Size of the vector
    cout<<arr.size()<<endl;

    //Capacity of the vector
    cout<<arr.capacity()<<endl;
}