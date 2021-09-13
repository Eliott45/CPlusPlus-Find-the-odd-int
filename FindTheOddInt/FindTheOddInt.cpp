#include <iostream>
#include <vector>

using namespace std;

int findOdd(const vector<int>& numbers) {
    for (auto e : numbers) {
        if (count(numbers.begin(), numbers.end(), e) % 2 != 0) return e;
    }
}

int main()
{
    cout << findOdd({ 20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}) << endl; // 5
    cout << findOdd({ 1,1,2,-2,5,2,4,4,-1,-2,5 }) << endl; // -1
    cout << findOdd({ 20,1,1,2,2,3,3,5,5,4,20,4,5 }) << endl; // 5
    cout << findOdd({ 10 }) << endl; // 10
    cout << findOdd({ 1,1,1,1,1,1,10,1,1,1,1 }) << endl; // 10
}

