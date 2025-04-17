#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    cin.ignore();

    set<string> files;
    string line, command, filename;

    while (N--) {
        getline(cin, line);

      
        int  spacePos = line.find(' ');

        if (spacePos != string::npos) {
            command = line.substr(0, spacePos);
            filename = line.substr(spacePos + 1);
        } else {
            command = line;
        }

        if (command == "touch") {
            files.insert(filename);
        } else if (command == "rm") {
            files.erase(filename);
        } else if (command == "ask") {
            cout << files.size() << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
