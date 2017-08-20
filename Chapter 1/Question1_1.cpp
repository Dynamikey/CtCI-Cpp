// Q: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

bool IsStringUnique(const string& str) {
    unordered_set<char> st;
    for(char c : str) {
        if(!st.count(c)) {
            st.insert(c);
        } else {
            return false;
        }
    }
    return true;
}


// Driver Program
int main() {
    string str = "input";
    string res = IsStringUnique(str) ? "True" : "False";
    cout<<res<<endl;
}
