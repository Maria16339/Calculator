#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char c;
    while (true) 
    {
        cout << "To solve your math problem you can use this syntex: number(+, -, / or *)number=" << endl;
        cout << "you can use as many number as you want." << endl << endl;

        int n, ans;
        char oper;

        cin >> n;
        ans = n;
        cin >> oper;

        while (oper != '=')
        {

            cin >> n;

            if (oper == '+') 
            {
                ans = ans + n;
            }
            if (oper == '-')
            {
                ans = ans - n;
            }
            if (oper == '/') 
            {
                ans = ans / n;
            }
            if (oper == '*')
            {
                ans = ans * n;
            }
            cin >> oper;
        }
        cout << "answer: " << ans << endl << endl;
    }
    return 0;
}

