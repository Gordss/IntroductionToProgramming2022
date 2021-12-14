#include <iostream>

// pass by value
void incrementCount(int count)
{
    count = count + 1;
}

// pass by reference
void incrementCount2(int& count)
{
    count = count + 1;
}

// pass by reference
void incrementCount3(int* count)
{
    *count = *(count) + 1;
}

void swapNumbers(int first, int second)
{
    int temp = first;
    first = second;
    second = temp;

    std::cout << "swap: " << first << ' ' << second << '\n';
}

void swapNumbers2(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int pow(int num)
{
    num = num * num; // num = 7 * 7
    // num = 49

    return num * num; // 49 * 49
}

int pow2(int& num)
{
    num = num * num; // num = 7 * 7
    return num * num; // 49 * 49
}

int main() {

    // example 1
    
    int count = 0;
    // incrementCount(count);

    // what will be the output ?
    // std::cout << count << '\n';

    // example 2
    // incrementCount2(count);

    // what will be the output ?
    // std::cout << count << '\n';

    // example 3
    // incrementCount3(&count);

    // what will be the output ?
    // std::cout << count << '\n';

    // example 4
    int a = 7, b = 5;
    // swapNumbers(a, b);

    // what will be the output ?
    // std::cout << a << ' ' << b << '\n';

    // example 5
    // swapNumbers2(a, b);

    // what will be the output ?
    // std::cout << a << ' ' << b << '\n';

    // example 6
    // pow(a);
    
    // what will be the ouput ?
    // std::cout << a << '\n';

    // example 7
    // pow2(&a);

    // what will be the output ?
    // std::cout << a << '\n';

    // example 8
    // int result = pow2(4);

    // what will be the output ?
    // std::cout << result << '\n';

    // example 9
    // int result2 = pow(4);

    // what will be the output ?
    // std::cout << result2 << '\n';

    int number = 12;
    int* ptr = &number;
    int& ps = number;
    ps = a;

    std::cout << &number << '\n';
    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';
    std::cout << &ptr << '\n';
    std::cout << *(&ptr) << '\n';
    std::cout << sizeof(ptr) << '\n';    // int -> 4 bytes , int* -> 8 bytes
    std::cout << sizeof(number) << '\n';

    std::cout << ps << '\n';
    std::cout << &ps << '\n';


    return 0;
}