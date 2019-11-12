#include <iostream>

void task2() {
    int sum = 2;
    const int FM = 4000000;
    int first = 1;
    int second = 2;
    int third = first + second;
    while (first < FM && second < FM && third < FM) {
        first = third + second;
        if (first < FM && first % 2 == 0) {
            sum += first;
        }
        second = first + third;
        if (second < FM && second % 2 == 0) {
            sum += second;
        }
        third = second + first;
        if (third < FM && third % 2 == 0) {
            sum += third;
        }
    }

    std::cout << "Sum is " << sum << std::endl;
}


void task1() {
    int sum = 0;

    for (int i = 0; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "Sum is " << sum << std::endl;
}

int main() {
    task2();
}
