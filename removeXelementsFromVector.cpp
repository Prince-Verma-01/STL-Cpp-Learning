#include <iostream>
#include <vector>
using namespace std;


void removeOccurance(vector<int> &vec, int x);
int main()
{
    vector<int> vec;
    int n, x;
    cout << "Enter Size of The Vector : \n";
    cin >> n;
    cout << "Enter Value Of X :\n";
    cin >> x;
    
// input
    cout << "Enter Elements of the Vector : ";
    int input;
    for(int i = 0; i < n; i++){
        cin >> input;
        vec.push_back(input);
    }
    
    removeOccurance(vec, x);
// print 
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << "  ";
    }
    

    return 0;
}

void removeOccurance(vector<int> &vec, int x){
    for(int i = 0; i < vec.size(); ){
        if(vec[i] == x){
            vec.erase(vec.begin() + i);
        } else {
            i++;
        }
    }
}


