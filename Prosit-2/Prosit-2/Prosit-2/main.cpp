#include <string>

#include "File.h"

using namespace std;

int main() {
    File a;
    a.open("test.txt", 0);
    a.encrypt(0);
    a.open("test.txt.XorEncrypted", 0);
    a.encrypt(0);
}