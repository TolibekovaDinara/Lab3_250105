/* Part 1
#include <iostream>
#include <string>
#include <iomanip>
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
}*/

/*
    Part 2: Practice
    A) 1. OK
    2. Must not start with digit
    3. Ok
    4. Must not be a keyword
    5. Must be with no space
    6. OK
    7. Can't contain the "-"
    8. OK
    9. OK
    10. Must not be a keyword

    B)
    1. Number of students in the group: int students = 15;
    2. A student’s GPA: double GPA = 4.5;
    3. First letter of your surname: char first_letter = 'T';
    4. Is the library open? bool isOpen = true;
    5. Temperature in Tashkent,◦C: float temp = 30.5;
    6. Seconds in a (non-leap) year: int secondsInYear = 31536000;
    7. The value of 𝜋, never changing: const double pi = 3.14;
    8. World population, about 8.1 billion: long long population = 8100000000;

    C) 1. 3
    2. 2
    3. 17
    4. 3.4
    5. -3
    6. -2
    7. 13
    8. -2
    9. 3
    10. 0
    11. 2
    12. 7 7 14

    D) 1. a = 10, b = 3, working: a = 7+3
    2. a = 10, b = 7, working: b = 10-3;
    3. a = 3, b = 7, working a=10-7;
    4. a = 3, b = 14, working: b=7*2
    5. a = 5, b = 14, working: a=14 % 3 + 3
    6. a = 5, b = -2, working: b=14/4-5

    What did lines 1–3 do to the original values 7 and 3? They swapped the values of a and b.

    E) a) Syntax error. cout << "Result: " << 42 << endl;
    b) Logic error: double avg = (a + b + c) / 3.0;
    c) Syntax error: char grade = 'A';
    d) Syntax error: cin >> age;

    F) 1. T
    2. F. C++ is case-sensitive, so Total and total are distinct identifiers
    3. F. Both operators are integers, so 7 / 2 = 3
    4. T
    5. F. cin >> stops reading at whitespace
    6. F. '5' is a character, whereas 5 is an integer
    7. T

    G) 1. a  2. c  3. c  4. b  5. b  6. b  7. d

    H)
    #include <iostream>
    #include <string>
    #include <iomanip>
    using namespace std;

    int main() {
        string name;
        int age;
        float height;
        char group;
        bool isFullTime;

        cout << "Enter your first name, age, height, group letter, full-time (0/1): ";
        cin >> name >> age >> height >> group >> isFullTime;

        cout << "--- Student card ---\n";
        cout << left << setw(10) << "Name:" << right << setw(10) << name << endl;
        cout << left << setw(10) << "Age:" << right << setw(10) << age << endl;
        cout << left << setw(10) << "Height:" << right << setw(10) << height << " m\n";
        cout << left << setw(10) << "Group:" << right << setw(10) << group << endl;
        cout << left << setw(10) << "Full-time:" << right << setw(10) << isFullTime << endl;
        cout << left << setw(10) << "Age in months:" << right << setw(10) << (age *12) << endl;
        cout << "Bytes: int " << sizeof(age) << ", float " << sizeof(height) << ", char " << sizeof(group) << ", bool " << sizeof(isFullTime) << endl;
        return 0;
    }

    I)
    #include <iostream>
    using namespace std;

    int main() {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Sum: " << a + b << endl;
        cout << "Difference: " << a - b << endl;
        cout << "Product: " << (a * b) << endl;
        cout << "Quotient: " << (a / b) << endl;
        cout << "Remainder: " << (a % b) << endl;
        cout << "Exact: " << (double)a / b << endl;
        return 0;
    }
    Now run it with -17 5. Quotient: -3, Remainder: -2, Exact: -3.4

    J)
    #include <iostream>
    using namespace std;

    int main() {
        int totalSeconds;
        cout << "Enter seconds: ";
        cin >> totalSeconds;
        int days = totalSeconds / 86400;
        int remAfterDays = totalSeconds % 86400;
        int hours = remAfterDays / 3600;
        int remAfterHours = remAfterDays % 3600;
        int minutes = remAfterHours / 60;
        int seconds = remAfterHours % 60;
        cout << totalSeconds << " s = " << days << " d " << hours << " h " << minutes << " min " << seconds << " s" << endl;
        return 0;
    }
    result: 200000 -> 200000 s = 2 d 7 h 33 min 20 s

    K)
    #include <iostream>
    using namespace std;

    int main() {
        const int NOTEBOOK = 8000, PEN = 2500, CALC = 95000;
        const int VAT_PERCENT = 12;
        int qNotebook, qPen, qCalc;
        cout << "Enter three quantities: ";
        cin >> qNotebook >> qPen >> qCalc;
        int totalNotebook = qNotebook * NOTEBOOK;
        int totalPen = qPen * PEN;
        int totalCalc = qCalc * CALC;
        int subtotal = totalNotebook + totalPen + totalCalc;
        int VAT = subtotal * VAT_PERCENT / 100;
        int total = subtotal + VAT;
        cout << "Notebook x " << qNotebook << " = " << totalNotebook << endl;
        cout << "Pen x " << qPen << " = " << totalPen << endl;
        cout << "Calculator x " << qCalc << " = " << totalCalc << endl;
        cout << "Subtotal: " << subtotal << " so'm" << endl;
        cout << "VAT " << VAT_PERCENT << "%: " << VAT << " so'm" << endl;
        cout << "TOTAL: " << total << " so'm" << endl;
        int paid;
        cout << "Paid: ";
        cin >> paid;
        cout << "Change: " << paid - total << " so'm" << endl;
        return 0;

    }
    With input 2 3 2 and 250000: TOTAL: 239120 Change: 10880
    A classmate writes the VAT as subtotal * (VAT_PERCENT / 100): VAT_PERCENT and 100 are both integers and writing (VAT_PERCENT / 100) forces the integer division first, which evaluates (12 / 100) to 0. Multiplying subtotal * 0 gives 0.

    L)
    1. what does it give for c = 25: 57 (Becuase both 9 and 5 are integers, 9/5=1)
    what should it give: 77 ((9/5)*25 +32 = 77)
    what is the one-character fix: double f = 9.0 / 5 * c +32;

    2.
    #include <iostream>
    using namespace std;
    int main() {
        int n;
        cout << "Enter a 4 digit integer: ";
        cin >> n;
        int thou = n / 1000;
        int hund = n / 100 % 10;
        int tens = n / 10 % 10;
        int units = n % 10;
        int sum = thou + hund + tens + units;
        cout << "Digit sum: " << sum << endl;
        return 0;
    }

    3.
    #include <iostream>
    using namespace std;
    int main() {
        int amount;
        cout << "Enter amount in so'm: ";
        cin >> amount;
        int notes100k = amount / 100000;
        amount %= 100000;
        int notes10k = amount / 10000;
        amount %= 10000;
        int notes1k = amount / 1000;
        int remainder = amount % 1000;
        cout << notes100k << " x100000, " << notes10k << " x10000, " << notes1k << "x1000, remainder " << remainder << ".";
        return 0;
    }
*/


