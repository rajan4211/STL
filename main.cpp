#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;
    for(int i=0;i<10;i++){
        arr.push_back(i);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}
