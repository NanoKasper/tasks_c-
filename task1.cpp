// 1. Написать программу, которая считывает 2 числа: x и y. Выводит x^y (1 <= x <= 20, 1 <= y <= 10)

// вроде бы чтото получилось



#include <iostream>

/*
int main () {

    int x, y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    if(x >= 1 && x <= 20 && y >= 1 && y <= 10) {
        int result = 1;

        std::cout << " result = " << result << std::endl;

        for (int i = 0; i < y; i++) {
            result = result * x;
            std::cout << "i = " << i + 1 << " result = " << result << std::endl;
        }
          
        //std::cout << "result = " << result << std::endl;
        std::cout << x << "^" << y << " = " << result << std::endl;

    } else {
        std::cout << " mistake " << std::endl;
    }
    return 0;
}
*/


// 2. Вводится 2 числа n <= 10 и m <= 10. Вывести все пары чисел: (1,1), (1, 2) ..., (1, m), (2, 1), (2, 2), ..., (2, m)
/*
int main() {
    
    int n, m;
    std::cout << "n и m: ";
    std::cin >> n;
    std::cin >> m;

    if ( n <= 10 && m <= 10)
    {
        //std::cout << "n и m: ";
        
        for(int i = 1; i <= n; i++ )
            for(int j = 1; j <= m; j++ )
        std::cout << "(" << i << ", " << j << ")" << std::endl;
    }
    else
    {
        std::cout << " mistake " << std::endl;

    }
    return 0;
}
*/


// 3. Вводится число x <= 10^18. Вывести сумму и произведение цифр этого числа (Пример: x = 1234 -> 10 24)
/*
int main() {

    long long x;
    std::cout << " x = ";
    std::cin >> x;

    long long sum = 0;
    long long prod = 1;

    while(x>0) {
        int digit = x % 10;
        sum += digit;
        prod *= digit;
        x = x/10;
    }
    std::cout << "sum: " << sum << " " << std::endl;
    std::cout << "prod: " << prod << " " << std::endl;
}
*/