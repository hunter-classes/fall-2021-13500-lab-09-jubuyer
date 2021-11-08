#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    int i = 0;

    while(true) {
        string *p;
        p = createAPoemDynamically();

        delete p;
        i++;
        if (i == 3) { //so that memory isn't constantly used
            break; //don't need to use ctrl+c to stop code
        }

    }

    return 0;
}
