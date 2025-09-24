#include <iostream>
#include <vector>
using namespace std;

void insertNumber(vector<int> &vec);

int main()
{
    vector<int> vec;
    int n;
    cout << "Enter Size of The Vector : \n";
    cin >> n;
    
    
//  input
    cout << "Enter Elements of the Vector : ";
    int input;
    for(int i = 0; i < n; i++){
        cin >> input;
        vec.push_back(input);
    }
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    
    insertNumber(vec);
//  print 
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << "  ";
    }
    
    cout << endl << endl;
    
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    

    return 0;
}

void insertNumber(vector<int> &vec){
    for(int i = 0; i < vec.size(); ){
        if(vec[i] % 2 == 0){
            vec.insert(vec.begin() + i + 1, -1);
            i += 2;
        } else {
            i++;
        }
    }
}