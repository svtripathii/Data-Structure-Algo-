#include <iostream>
#include <vector>;
using namespace std;

class Vector {
    int *arr;
    int cs;
    int ms;

public :
    Vector(int max_size) {
        cs=0;
        ms=max_size;
        arr=new int[ms];
    }

    void push_back(int d) {
        if(cs==mx) {
            int *oldArr=arr;
            ms=2*ms;
            arr=new int[ms];
        }
        //Copy the Element 
        for(int i=0; i<cs; i++) {
            arr[i]=oldArr[i];
        }
        delete[] oldArr;
    }      

    arr[cs]=d;
    cs++;
}

void pop_back() {
    if(cs>=0) {
        cs--;
    }
}

bool isEmpty() {
    return cs==0;
}

int front() {
    return arr[0];
}

int back() {
    return arr[cs-1];
}

int at(int i) {
    return arr[i];
}

int size() {
    return cs;
}

int capacity() {
    return ms;
}

};

int main() {
    Vector v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0; i<v.size(); i++) {
        cout<<v.at(i)<<",";
    }
}