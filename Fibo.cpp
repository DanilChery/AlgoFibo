#include <iostream>

using namespace std;

int func(int N) {
    if (N == 0 ) {
        return 0;
    }
    else if (N == 1) {
        return 1;
    }
    else {
        return func(N - 1) + func(N - 2);
    }
}

int main()
{
    int N;
    cin >> N;
    N = func(N);
    cout << N;

}
