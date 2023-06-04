#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool is_valid_password(string&);
void valid(string s);

int main()
{
//    string s;
//    geiline(cin, s);

    valid("Password19$#");   // "Strong"
    valid("Hello@$World19"); // "Strong"
    valid("LeTme!n");        // "Weak"

    return 0;
}

bool is_valid_password(string& s)
{
    int cnt_letter = 0, cnt_number = 0, cnt_spec = 0;
    for (char c : s) {
        if (isalpha(c)) cnt_letter++;
        else if (isdigit(c)) cnt_number++;
        else if (ispunct(c)) cnt_spec++;
    }

    return !(cnt_letter < 7 || cnt_number < 2 || cnt_spec < 2);
}

void valid(string s) {
    if (is_valid_password(s)) {
        cout << "Strong" << endl;
    } else {
        cout << "Weak" << endl;
    }
}