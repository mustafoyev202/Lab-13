#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Problem1
//    vector<double> vec;
//    vec.assign({1, 2, 3, 4, 5});
//    for (auto i = vec.begin(); i != vec.end(); i++) {
//        cout << *i << " ";
//
//    }
//    cout << endl;

    //Problem 2
    vector<double> vec;
    int input;
    while (cin >> input) {
        vec.push_back(input);
    }
    if (!vec.empty()) {
        cout << vec.front() << endl;
        cout << vec.back() << endl;
    } else {
        cout << "No elements were entered." << endl;
    }


    return 0;
}
