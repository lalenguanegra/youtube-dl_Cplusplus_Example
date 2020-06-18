#include <iostream>
using namespace std;
string url;


int main() {
    cout << "ENTER A URL" << endl;
    cin >> url;
    system(("youtube-dl " "-x " "--audio-format " "mp3 "+ url).c_str());
    return 0;
}
