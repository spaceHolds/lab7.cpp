﻿#sdinclude <iostream>

using namespace std;

void dz2_6() {
    int main() {
        int c0, steps = 0;
        std::cout << "Введіть натуральне число: ";
        std::cin >> c0;

        if (c0 <= 0) {
            std::cout << "Будь ласка, введіть додатнє натуральне число." << std::endl;
            return 1;
        }

        while (c0 != 1) {
            if (c0 % 2 == 0) {

                c0 /= 2;
            }
            else {

                c0 = 3 * c0 + 1;
            }
            steps++;
            std::cout << "Крок " << steps << ": " << c0 << std::endl;
        }
        std::cout << "Для досягнення 1 знадобилося " << steps << " кроків." << std::endl;
    }
}

void dz2_7() {
        double sum = 0.0;
        for (int i = 10; i <= 20; i++) {
            double sqrt_i = sqrt(i);
            sum += sqrt_i;
        }
        std::cout << "The sum from 10 till 20 is:" << sum << std::endl;
    }
}

void dz2_10() {
        double a, b, h;
        std::cout << "Enter a start meaning a:";
        std::cin >> a;
        std::cout << "Enter an end meaning b:";
        std::cin >> b;
        std::cout << "Enter a step h:";
        std::cin >> h;

        if (h <= 0) {
            std::cout << "h must be positive, pls change a meaning of h.";
            return 1;
        }
        if (a > b) {
            std::cout << "a must be less then b, pls change the meaning of a.";
        }
        std::cout << "--------------------" << std::endl;
        std::cout << ": X : Y :" << std::endl;
        std::cout << "--------------------" << std::endl;

        for (double x = a; x <= b; x += h) {

            if (x<a && x>b) {
                std::cout << "Error, enter another meaning of x.";
            }
            else {
                double y = (8 + (sqrt(x - 7) / (x + 5)));
                std::cout << ":" << std::setw(5) << x << ":" << std::setw(5) << y << ":" << std::endl;
            }
        }
        std::cout << "--------------------";
    }

int main()
{
    dz2_6();
    dz2_7();
    dz2_10();
    return 0;
}