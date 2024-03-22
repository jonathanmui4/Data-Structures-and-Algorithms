#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hrs = stoi(s.substr(0, 2));
    char amPm = s[8];
    if (amPm == 'P' && hrs != 12) {
        hrs += 12;
    }
    else if (amPm == 'A' && hrs == 12) {
        hrs = 0;
    }
    string convertedHr = (hrs < 10) ? "0" + to_string(hrs) : to_string(hrs);
    
    stringstream ss;
    ss << convertedHr << ":" << s.substr(3,2) << ":" << s.substr(6,2);
    return ss.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
