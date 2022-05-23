#include "entropy.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    if (argc > 1) {
        ifstream file(argv[1]);
        ostringstream content;
        content << file.rdbuf();
        cout << entropy(reinterpret_cast<const unsigned char *>(content.str().c_str()), content.str().size()) << endl;
    }
    return 0;
}
