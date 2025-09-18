#include <iostream>
#include <vector>

using namespace std;

auto main() {
    vector<char> Arraynumber = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < Arraynumber.size(); i++) {
        cout << Arraynumber[i] << std::endl;
    }
    return 0;
}