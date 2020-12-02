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

int func2(int N) {
    int p = 0;
    int pp = 1;
    if (N == 0) return p;
    else if (N == 1) return pp;
    else 
    {
        int t;
        for (int i = 2; i <= N; i++)
        {
            t = p + pp;
            p = pp;
            pp = t;
        }
        return t;
    }
}

int main()
{
    int N;
    cin >> N;

  
    cout << func(N) << endl;
    cout << func2(N) << endl;
  
}
