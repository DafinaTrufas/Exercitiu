#include <iostream>
using namespace std;

void f()
{
	cout << "Modificare";
}

int f(int x, int y) {
    return x + y;
}

int main() {
    f();
    int x, y;
    cin >> x >> y;
    cout << f(x, y);
    return 0;
}
