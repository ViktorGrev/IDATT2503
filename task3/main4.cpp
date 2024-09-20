//
// Created by vikto on 19.08.2024.
//

#include <iostream>

using namespace std;

int main() {
    //a
    string word1, word2, word3;
    cout << "Enter 3 strings: ";
    cin >> word1 >> word2 >> word3;

    //b
    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << "Sentence: " << sentence << endl;

    //c
    cout << "word1 length: " << word1.length() << endl;
    cout << "word2 length: " << word2.length() << endl;
    cout << "word3 length: " << word3.length() << endl;
    cout << "Sentence length: " << sentence.length() << endl;

    //d
    string sentence2 = sentence;

    //e
    if (sentence2.length() >= 12) {
        sentence2[9] = 'x';
        sentence2[10] = 'x';
        sentence2[11] = 'x';
    }
    cout << "Sentence2: " << sentence2 << endl;
    cout << "Sentence: " << sentence << endl;

    //f
    string sentence_start;
    if (sentence.length() >= 5) {
        sentence_start = sentence.substr(0, 5);
    } else {
        sentence_start = sentence;
    }
    cout << "Sentence start: " << sentence_start << endl;

    //g
    if (sentence.find("hallo") != string::npos) {
        cout << "Sentence contains hallo" << endl;
    } else {
        cout << "Sentence does not contain hallo" << endl;
    }

    //h
    int pos = sentence.find("er");
    while (pos != string::npos) {
        cout << "Found er at position " << pos << endl;
        pos = sentence.find("er", pos + 1);
    }
}
