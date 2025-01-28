#include <bits/stdc++.h>
using namespace std;
vector<char> s;
void moni(int n) {
    int w=0,l=0;
    for(int i=0;s[i]!='E';i++) {
        if(s[i]=='W') {
            w++;
        }
        if(s[i]=='L') {
            l++;
        }
        if((w>=n||l>=n)&&abs(w-l)>=2) {
            cout<<w<<':'<<l<<endl;
            w=0;
            l=0;
        }
    }
    cout<<w<<':'<<l<<endl;
}
int main() {
    char c;
    cin>>c;
    while(c!='E') {
        s.push_back(c);
        cin>>c;
    }
    s.push_back('E');
    moni(11);
    cout<<endl;
    moni(21);
    return 0;
}