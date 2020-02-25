#include <iostream>
using namespace std;


int *eArray(const int *, int);

int main() {
    int size;
    cout << "Whats the size of the array?: ";
    cin >> size;
    int *fArray = new int[size];
    
    cout << "Please add in the elements of the array:\n";
    for(int x = 0; x < size; x++){
        cout << "Array position [" << x << "]:";
        cin >> fArray[x];
    }
    
    int *doubled = eArray(fArray,size);
    
    cout << "Elements in the new doubled array: [";
    for(int j = 0; j < size*2;j++){
        if(j == (size*2)-1){
            cout << *(doubled+j);
        } else {
            cout << *(doubled+j) << ", ";
        }
    }
    cout << "]";
    
    return 0;
}

int *eArray(const int *array, int size){
    int *doubledArray = new int[size*2];
    for(int x = 0;x < size*2;x++){
        if(x < size){
            doubledArray[x] = array[x];
        } else {
            doubledArray[x] = 0;
        }
    }
    return doubledArray;
}
