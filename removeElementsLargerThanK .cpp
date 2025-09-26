#include <iostream>
#include <vector>
using namespace std;

void removeElements(vector<int> &vec, int k);

int main()
{
    vector<int> vec;
    int n, k;
    cout << "Enter Size of The Vector : \n";
    cin >> n;
    cout << "Enter Value Of K :\n";
    cin >> k;
    
    
//  input
    cout << "Enter Elements of the Vector : ";
    int input;
    for(int i = 0; i < n; i++){
        cin >> input;
        vec.push_back(input);
    }
    
    removeElements(vec, k);
//  print 
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << "  ";
    }
    
    return 0;
}

void removeElements(vector<int> &vec, int k){
    for(int i = 0; i < vec.size(); ){
        if(vec[i] > k){
            vec.erase(vec.begin() + i);
        } else {
            i++;
        }
    }
}