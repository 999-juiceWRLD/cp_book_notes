#include <iostream>
#include <set>
#include <vector>
using namespace std;


void addOperation(set<char> *ptr);
void traverseVector(vector<int> *vec);

namespace CharSetOps {
    
    set<char> initialize() {
        set<char> someSet;
        return someSet;
    }

    void insertItem(set<char> &setPtr, char item) {
        setPtr.insert(item);
    }

    void traverseSet(set<char> *set) {
        for (char i: *set) {
            cout << i << " ";
        }
        cout << endl;
    }

    void iterateSet(set<char> &set) {
        std::set<char>::iterator it;

        for (it = set.begin(); it != set.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }

    // void clearSet(set<char> *set) {
    //     *set.clear();
    // }
}

int main() {
    set<char> letters = CharSetOps::initialize();
    set<char> *setPtr = &letters;
    addOperation(setPtr);

    
    // this all works
    // CharSetOps::insertItem(*setPtr, 'a');
    // CharSetOps::insertItem(*setPtr, 'b');
    // CharSetOps::insertItem(*setPtr, 'c');
    // CharSetOps::insertItem(*setPtr, 'd');
    // CharSetOps::insertItem(*setPtr, 'e');
    // CharSetOps::insertItem(*setPtr, 'f');
    // CharSetOps::insertItem(*setPtr, 'g');


    CharSetOps::traverseSet(setPtr);
    // CharSetOps::iterateSet(*setPtr); // same
    // CharSetOps::iterateSet(letters); // same 

    vector<int> vec = { 1, 3, 5, 7, 9, 8, 6 };
    vector<int> *vecPtr = &vec;
    vector<int>::iterator it;

    cout << "traverse through a vector with an iterator" << endl;
    traverseVector(vecPtr);
}

void addOperation(set<char> *ptr) {
    CharSetOps::insertItem(*ptr, 'a');
    CharSetOps::insertItem(*ptr, 'b');
    CharSetOps::insertItem(*ptr, 'c');
    CharSetOps::insertItem(*ptr, 'd');
    CharSetOps::insertItem(*ptr, 'e');
    CharSetOps::insertItem(*ptr, 'f');
    CharSetOps::insertItem(*ptr, 'g');
}

void traverseVector(vector<int> *vec) {
    vector<int>::iterator it;
    vector<int>mainVector = *vec;
    for (it = mainVector.begin(); it != mainVector.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
}
