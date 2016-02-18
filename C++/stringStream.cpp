#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
//ADDED A EDIT from WEB
vector<int> parseInts(string str) {
   // Complete this function
    stringstream ss;
    ss.str(str);
    int k;
    char ch;
    vector<int> result;
    while(ss>>k)
    {
        result.push_back(k);
        ss>>ch;
    }
    return result;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

