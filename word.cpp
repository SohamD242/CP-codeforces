#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int uppercase_count = 0;
    for (char c : s) {
        if (isupper(c)) {
            uppercase_count++;
        }
    }
    int lowercase_count = s.length() - uppercase_count;
    if (uppercase_count > lowercase_count) {
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        for (char &c : s) {
            c = tolower(c);
        }
    }
    std::cout << s << std::endl;
    return 0;
}
