#include <iostream>
#define CUSTOM_MAX 100

using namespace std;

class Exception {
 private:
    int x;
};

typedef struct isPair {
    int x;
    string s;
}ispair;

enum NumSet {
    one, two, three
};

int main() {
    bool flag = false;
    unsigned long long x = 10;
    register int r;
    const int y = 100;
    while (x > 5) {
        if (flag != false)
            break;
        else
            dec(x);
    }
    ispair p;
    p.x = (int)x;
    p.s = "test";
    NumSet num;
    num = three;
    cout << "x = " << p.x << sizeof(x) << endl;
    std::cout << CUSTOM_MAX << endl;
    return 0;
}

static unsigned long long dec(unsigned long long x) {
    x--;
    return x;
}
