#include <iostream>
using namespace std;

int main() {
    cout << "Hello, CS102!\n\n";

    int students = 15;
    double GPA;
    GPA = 4.5;
    const double VAT = 0.12;

    cout << "Students: " << students << endl;
    cout << "GPA: " << GPA << endl;
    cout << "VAT: " << VAT << "\n\n";

    char c = 'A';
    cout << c << endl;
    cout << c + 1 << endl;
    cout << char(c +1) << endl;
    cout << false << " " << true << endl;

    int age;
    double height;
    cout << "Age and height: ";
    cin >> age >> height;
    cout << "Age " << age << ", height " << height << " m" << endl;
    cout << "\tTab\nNew line" << endl;

    int n = 4827;
    int units = n % 10;
    int tens = n / 10 % 10;
    int hund = n / 100 % 10;
    int thou = n / 1000;

    cout << "\nThe given number is " << n << endl;
    cout << "The number's units is " << units << endl;
    cout << "The number's tens is " << tens << endl;
    cout << "The number's hundreds is " << hund << "\n";
    cout << "The number's thousands is " << thou << endl;

    int m = 5;
    int k = m++ + 2;
    int l = ++m * 2;

    cout << "The other given number is " << m << endl;
    cout << "Then we make some changes and get " << k << endl;
    cout << "Then we make some more changes and get " << l << "\n\n";

    double h1, h2, h3;
    cout << "In the next line, you need to enter three numbers.\n";
    cin >> h1 >> h2 >> h3;
    double sum = h1 + h2 + h3;
    double average = sum / 3;
    cout << "The average is " << average << endl;


    return 0;
}