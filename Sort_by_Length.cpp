#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// দৈর্ঘ্য অনুযায়ী তুলনা করার জন্য কাস্টম ফাংশন
bool compareSize(const string& a, const string& b) {
    return a.length() > b.length(); // বড় থেকে ছোট (Descending order)
}

int main() {
    int n;
    cin >> n;
    string line;
    getline(cin, line); // প্রথম লাইনের পর বাফার ক্লিয়ার করতে

    while (n--) {
        getline(cin, line);
        stringstream ss(line);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        // মূল অর্ডার বজায় রাখতে stable_sort ব্যবহার করা জরুরি
        stable_sort(words.begin(), words.end(), compareSize);

        for (int i = 0; i < words.size(); i++) {
            cout << words[i] << (i == words.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}