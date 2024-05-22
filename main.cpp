#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//void cleanNumbers(vector<string> &vec) {
//    int size;
//    cin >> size;
//    vec.resize(size);
//    for (int i = 0; i < size; ++i) {
//        cin >> vec[i];
//    }
//    vector<string>::iterator it = vec.begin();
//    while (it != vec.end()) {
//        bool hasDigit = false;
//        for (char ch: *it) {
//            if (isdigit(ch)) {
//                hasDigit = true;
//                break;
//            }
//        }
//        if (hasDigit) {
//            it = vec.erase(it);
//        } else {
//            ++it;
//        }
//    }
//
//    for (const auto &ele: vec) {
//        cout << ele << " ";
//    }
//}


int main() {
    //Problem1
//    vector<double> vec;
//    vector<double>::iterator it;
//
//    vec.assign({1, 2, 3, 4, 5});
//    for (it = vec.begin(); it != vec.end(); it++) {
//        cout << *it << " ";
//
//    }
//    cout << endl;

    //Problem 2
//    vector<double> vec1;
//    int input;
//    int a = 0;
//    while (a < 7) {
//        cin >> input;
//        vec1.push_back(input);
//        a++;
//    }
//    if (!vec1.empty()) {
//        cout << vec1.front() << endl;
//        cout << vec1.back() << endl;
//    } else {
//        cout << "No elements were entered." << endl;
//    }
//Problem 3

//    vector<int> vec2;
//    vec2.assign({2, 34, 45, 56, 667, 65});
//    if (!vec2.empty()) {
//        vec2.erase(vec2.begin() + 3);
//        vec2.erase(vec2.begin(), vec2.begin() + 2);
//
//        for (auto key: vec2) {
//            cout << key << " ";
//        }
//
//    } else {
//        cout << "Vector is empty" << endl;
//    }

//Problem4
//    int n;
//    cin >> n;
//    vector<vector<double>> matrix(n, vector<double>(n, 0.0));
//    for (auto row_it = matrix.begin(); row_it != matrix.end(); ++row_it) {
//        for (auto col_it = row_it->begin(); col_it != row_it->end(); ++col_it) {
//            cin >> *col_it;
//        }
//    }
//    cout << "Output:" << endl;
//    for (const auto &row: matrix) {
//        for (const auto &element: row) {
//            cout << element << " ";
//        }
//        cout << endl;
//    }

//Problem 5
//    list<double> list1 = {3.3, 4.5, 6.7};
//    list<int> list2 = {1, 2, 3};
//    list<double> list3 = {8, 9.5, 10.3};
//    list<double> mergedList;
//    mergedList.insert(mergedList.end(), list3.begin(), list3.end());
//    mergedList.insert(mergedList.end(), list1.begin(), list1.end());
//    mergedList.insert(mergedList.end(), list2.begin(), list2.end());
//    cout << "Merged list:" << endl;
//    for (const auto &elem: mergedList) {
//        cout << elem << " ";
//    }
//    cout << endl;
//Problem 6
//    forward_list<int> forward = {1, 2, 4, 5, 7, 8, 9};
//    auto it = forward.begin();
//    forward.erase_after(it);
//
//    for (const auto &elem: forward) {
//        cout << elem << " ";
//    }
//    cout << endl;
//    forward.push_front(23);
//
//    for (const auto &elem: forward) {
//        cout << elem << " ";
//    }
//    cout << endl;
//    forward.emplace_front(45);
//
//    for (const auto &elem: forward) {
//        cout << elem << " ";
//    }
//    cout << endl;
//    forward.pop_front();
//
//    for (const auto &elem: forward) {
//        cout << elem << " ";
//    }
//    cout << endl;
//    it = forward.begin();
//    forward.insert_after(it, 3);
//
//    for (const auto &elem: forward) {
//        cout << elem << " ";
//    }
//    cout << endl;
//    it = forward.begin();
//    forward.emplace_after(it, 4);
//
//    for (const auto &elem: forward) {
//        cout << elem << " ";
//    }
//    cout << endl;

//Problem 7
//    deque<int> deck = {2, 3, 6, 98, 12};
//    deck.push_back(5);
//    deck.push_front(7);
//    deck.push_back(10);
//    deck.push_front(20);
//    for (auto &ele: deck) {
//        cout << ele << " ";
//    }
//    cout << endl;
//    cout << "Size of deque: " << deck.size() << endl;
//    cout << "Value at index 2: " << deck[2] << endl;
//    cout << "First element: " << deck.front() << endl;
//    cout << "Last element: " << deck.back() << endl;
//    deck.pop_front();
//    deck.pop_back();
//    for (auto &ele: deck) {
//        cout << ele << " ";
//    }
//    cout << endl;

//Problem8


//Problem 9



//Problem 10
//    vector<string> words;
//    cleanNumbers(words);

    return 0;
}
