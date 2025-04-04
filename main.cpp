#include <iostream>
#include <cmath> // for sqrt()
using namespace std;

const int A = 4, B = 2;

int main()
{
    int a, b, c;
    cout << "Введите число от 2 до 255: ";
    cin >> a;
    if (a > 255 || a < 2)
    {
        cout << "Число должно быть от 2 до 255!\n";
        return 0; // exit if invalid
    }

    cout << "Введите число от 2 до 255: ";
    cin >> b;
    if (b > 255 || b < 2)
    {
        cout << "Число должно быть от 2 до 255!\n";
        return 0;
    }

    cout << "Введите число от 2 до 255: ";
    cin >> c;
    if (c > 255 || c < 2)
    {
        cout << "Число должно быть от 2 до 255!\n";
        return 0;
    }

    // Suppose we treat a, b, c as the standard coefficients of a quadratic equation:
    // ax^2 + bx + c = 0
    // Discriminant d = b^2 - 4ac
    int d = pow(b, b) - 4 * a * c;

    if (d < 0)
    {
        cout << "Корней нет (No real roots)\n";
    }
    else
    {
        double sqrt_d = sqrt(d);
        double x1 = (-b + sqrt_d) / (2 * a);
        double x2 = (-b - sqrt_d) / (2 * a);

        if (fabs(x1 - x2) < 1e-9)
        {
            // If x1 and x2 are essentially the same (floating point precision check)
            cout << "Корень один: x1 = x2 = " << x1 << "\n";
        }
        else
        {
            cout << "Два корня: x1 = " << x1 << ", x2 = " << x2 << "\n";
        }
    }

    return 0;
}