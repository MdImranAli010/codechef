                                                                        // Author: Md. Imran Ali



// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    char A[n];
 
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    bool Lapindrome = true;
    unordered_map<char, int> freq;

    for (int i = 0; i < n / 2; i++) {
        freq[A[i]]++;
    }

    int start = (n % 2 == 0) ? n / 2 : n / 2 + 1;
    for (int i = start; i < n; i++) {
        freq[A[i]]--;
    }

    for (auto& it : freq) {
        if (it.second != 0) {
            Lapindrome = false;
            break;
        }
    }

    if (Lapindrome) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
 
    return 0;
}
