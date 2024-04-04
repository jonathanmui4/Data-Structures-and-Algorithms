#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int queries;
    cin >> queries;
    vector<string> prevStates;
    string s = "";
    for (int i = 0; i < queries; i++) {
        int operation;
        cin >> operation;
        cin.ignore();
        if (operation == 1) {
            string w;
            cin >> w;
            prevStates.push_back(s);
            s.append(w);
        }
        else if (operation == 2) {
            int toDel;
            cin >> toDel;
            int strLength = s.length();
            prevStates.push_back(s);
            s.erase(strLength - toDel);
        }
        else if (operation == 3) {
            int toPrint;
            cin >> toPrint;
            cout << s[toPrint - 1] << endl;
        }
        else if (operation == 4) {
            s = prevStates.back();
            prevStates.pop_back();
        }
        else {
            cout << "Invalid fn\n";
        }
        // cout << "New String: " << s << endl;
    }
    return 0;
}
