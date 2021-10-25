# Задачи

## Tипове в C++ (продължение)
> 1. Да се напише програма, която:
- създава целочислената променлива age с подходяща стойност и я извежда на конзолата

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
unsigned int age = 23;
std::cout << "My age is: " << age;
```

</details>

- въвежда две неотрицателни цели числа (a, b) и извежда на различни редове на конзолата:
    - тяхната сума;
    - абсолютната стойност на тяхната разлика;
    - остатъка при деление на първото с второто число;
    - цялата част на частното на двете числа;
    - частното на а със b;
    - частното на a със b, закръглено надолу; (*)
    - частното на a със b, закръглено нагоре;
    - а, повдигнато на степен корен квадратен от b;
    - логаритъм от числото, получено в (*), при основа 2. Изведеното число да бъде с точност до петия знак след десетичната запетая.

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
...

#include <cmath>
#include <iomanip>

...

int main() {
    unsigned int first_number;
    unsigned int second_number;

	std::cin >> first_number >> second_number;

	std::cout << "сума: " << first_number + second_number << std::endl;
	std::cout << "абс. стойност: "<< abs(first_number - second_number) << std::endl;
	std::cout << "остатък: " << first_number % second_number << std::endl;
	std::cout << "цяла част: " << first_number / second_number << std::endl;

	std::cout << "частно: " << (double)first_number / second_number << std::endl;
	/*cout << "частно: " << a / (double)b << endl; 
	cout << "частно: " << (double)a / (double)b << endl;*/

	std::cout << "долна скоба: " << floor(first_number / second_number) << std::endl;
	std::cout << "горна скоба: " << ceil((double)first_number / (double)second_number) << std::endl;
	std::cout << "степенуване: " << pow(first_number, sqrt(second_number)) << std::endl;

	std::cout << "логаритмуване: "<< std::setprecision(5) << log(floor(first_number/second_number)) / log(2);
	
	return 0;
}
```

</details>

- въвежда радиуса на окръжност и извежда дължината ѝ и лицето на кръга, който описва.

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
	double radius;
	std::cin >> radius;

	const double pi = 3.14; // добра практика е да се изнасят константи, за да няма "магически числа" в кода

	double C = 2 * radius * pi;
	std::cout << "Дължина: " << C << std::endl;

	double S = pi * pow(radius, 2);
	std::cout << "Лице на кръг: " << S << std::endl;
```

</details>

- въвежда две десетични променливи (a,b) и разменя стойностите им:
    - чрез трета променлива;
    - чрез аритметични операции.

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
	double first_number;
	double second_number;

	std::cin >> first_number >> second_number;

	//с помощна променлива
	double c = first_number;
	first_number = second_number;
	second_number = c;
	std::cout << "a=" << first_number << " b=" << second_number << std::endl;

	//с аритметични операции
	first_number = first_number + second_number;
	second_number = first_number - second_number;
	first_number = first_number - second_number;
	std::cout << "a=" << first_number << " b=" << second_number << std::endl;
```

</details>

- въвежда едно положително трицифрено число и извежда цифрите му в обратен ред, разделени със символа "-". Не използвайте цикли.

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
	unsigned int number;
	std::cin >> number;

	int last_digit = number % 10;
	int second_digit = number / 10 % 10;
	int first_digit = number / 100 % 10;

	std::cout << last_digit << "-" << second_digit << "-" << first_digit;
```

</details>

- въвежда две цели числа (a,b) и извежда true, ако:
    - поне едно от двете е нечетно;
    - точка с координати (a,b) лежи във вътрешността на кръг с радиус 5 и център (0,1);

и false - иначе. За тази задача използвайте само логическите оператори && и || (без if, for и броячи). 

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
	int a;
	int b;
	std::cin >> a >> b;

	std::cout << std::boolalpha << ((a % 2 == 1) || (b % 2 == 1)) << std::endl;

	std::cout << std::boolalpha << ((a - 0) * (a - 0) + (b - 1) * (b - 1) <= 5 * 5);
```

</details>

- въвежда едно неотрицателно цяло число x, за което се знае, че е просто и че е по-малко или равно на 23. Програмата да извежда число, чиято стойност показва кое по ред просто число е x. Не използвайте if, switch, ternary, цикли и логически операции.

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
	int number;
	std::cin >> number;

	std::cout << (number >= 2) + (number >= 3) + (number >= 5) + (number >= 7) + (number >= 11) + (number >= 13) + (number >= 17) + (number >= 19) + (number >= 23);
    
```

</details>

- въвежда едно трицифрено число x и извежда true, ако цифрата 7 се съдържа четен брой пъти в х, и false - иначе. Не използвайте if, switch, ternary, цикли и логически операции.

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
	int number;
	std::cin >> number;

	std::cout << std::boolalpha << (((number % 10 == 7) + (number / 10 % 10 == 7) + (number / 100 % 10 == 7)) % 2 == 0);

```

</details>


## Видове оператори в C++

|Operator|Type|
|:--:|:--:|
|++, --|Unary operator|
|+, -, *, /, %|Arithmetic operator|
|<, <=, >, >=, ==, !=|Arithmetic operator|
|&&, \|\|, !|Logical operator|
|&, \|, <<, >>, ~, ^|Bitwise operator|
|?:|Conditional operator or a.k.a Ternary operator|

> Ще се фокусираме на побитовите оператори (bitwise operators)

- & (bitwise AND) - връща 1 ако и двата бита са 1

|a|b|a & b|
|:--:|:--:|:--:|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

- | (bitwise OR) - връща 1 ако поне 1 от битовете е 1

|a|b|a \| b|
|:--:|:--:|:--:|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

- ^ (bitwise XOR) - връща 1 ако битовете са различни

|a|b|a ^ b|
|:--:|:--:|:--:|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

- \<\< (left shift) - взима 2 числа, първото е това, на което ще се местят (shift) битовете, второто посочва с колко позиции **наляво**

<details>
<summary>
<b>Пример</b>
</summary>
5 << 3

0000 0101 << 3

0010 1000

40
</details>


- \>\> (right shift) - взима 2 числа, първото е това, на което ще се местят (shift) битовете, второто посочва с колко позиции **надясно**

<details>
<summary>
<b>Пример</b>
</summary>
5 >> 2

0101 >> 2

0001

1
</details>

- ~ (bitwise NOT) - взима число и му обръща битовете. За целочислено число N, операцията ни дава -(N + 1).

<details>
<summary>
<b>Пример</b>
</summary>

~ 35

~ 0010 0011 // обръщаме го в двоично

1101 1100 // след обръщане на битовете се получава 220, но това е и -36 също така

<b>Как се изчислява допълнението на N? (-N)</b>

36 = 0010 0100

1-во допълнение

1101 1011

2-ро допълнение

1101 1011 + 1 = 1101 1100 = -36

</details>

> Въпрос: Как лесно може да разделим или умножим с 2 едно число, ползвайки побитови операции?

<details>
<summary>
<b>Отговор</b>
</summary>

* умножение:
    x << 1 - връща x * 2

* деление:
    x >> 1 - връща x / 2

</details>

## Примери за употреба на побитови операции в реални проекти

- **bit fields(flags) флагове** - най-добрия метод за представяне на състояние с няколко булеви стойности. Да кажем, че в дадено приложение един потребител може да има 4 привилегии (писане, четене, изпълнение и привилегия за промяна на други потребители). С битовете това ще се запамети в 1 байт, вместо 4. В повечето езици, такива настройки се представят като enum типове (изброен тип, които ще разгледаме по-нататък).

- **Компресиране и криптиране** - има доста алгоритми, които работят с побитови операции. Пример: [Deflate algorithm](https://en.wikipedia.org/wiki/Deflate)

- **Крайни автомати** - може да се изразяват с битови операции (ще ги учите в курса по ЕАИ)

- **Backup на сървъри (RAID Drive Backups) / CheckSum (Network Security)** - една идея за backup на сървъри е да се държи на друго HDD `XOR`-ната информацията сървърите. **Някой може ли да обясни идеята? И защо точно `XOR`?**

## Условен оператор if 
> 1. Да се напише програма, която въвежда три цели числа и извежда най-голямото от тях.
<details>
<summary>
<b>Отговор</b>
</summary>

```c++
int firstNumber, secondNumber, thirdNumber;
std::cin >> firstNumber >> secondNumber >> thirdNumber;
if(firstNumber >= secondNumber && firstNumber >= thirdNumber) {
    std::cout << firstNumber;
} else if (secondNumber >= firstNumber && secondNumber >= thirdNumber) {
    std::cout << secondNumber;
} else {
    std::cout << thirdNumber;
}
```

</details>

> 2. Да се напише програма, която въвежда две положителни числа n и m(n е трицифрено, а m е едноцифрено). Да се изведе на конзолата true, ако m се съдържа в n и false в противен случай.
<details>
<summary>
<b>Отговор</b>
</summary>

```c++
unsigned firstNumber, secondNumber;
std::cin >> firstNumber >> secondNumber;
unsigned short firstDigit = firstNumber / 100;
unsigned short secondDigit = firstNumber / 10 % 10;
unsigned short thirdDigit = firstNumber % 10;
if(firstDigit == secondNumber || secondDigit == secondNumber || thirdDigit == secondNumber) {
    std::cout << "true";
} else {
    std::cout << "false";
}
```

</details>

> 3. Да се напише програма, която проверява дали положително трицифрено число има повтарящи се цифри или не и извежда подходящо съобщение.
<details>
<summary>
<b>Отговор</b>
</summary>

```c++
unsigned firstNumber;
std::cin >> firstNumber;
unsigned short firstDigit = firstNumber / 100;
unsigned short secondDigit = firstNumber / 10 % 10;
unsigned short thirdDigit = firstNumber % 10;
if(firstDigit == secondDigit || firstDigit == thirdDigit || secondDigit == thirdDigit) {
    std::cout << "Number has repeating digits";
} else {
    std::cout << "Number does not have repeating digits";
}
```

</details>

> 4. Да се напише програма, която извежда true, ако цифрите на положително трицифрено число са подредени във възходящ ред и false – в противен случай.
<details>
<summary>
<b>Отговор</b>
</summary>

```c++
unsigned firstNumber;
std::cin >> firstNumber;
unsigned short firstDigit = firstNumber / 100;
unsigned short secondDigit = firstNumber / 10 % 10;
unsigned short thirdDigit = firstNumber % 10;
if(firstDigit <= secondDigit && secondDigit <= thirdDigit) {
    std::cout << "Number has ascending digits";
} else {
    std::cout << "Number does not have ascending digits";
}
```

</details>

> 5. Да се напише програма, която въвежда четирицифрено положително число. Да се намерят и отпечатат цифрите му и да се намери тяхната сумата.
<details>
<summary>
<b>Отговор</b>
</summary>

```c++
unsigned number;
std::cin >> number;
unsigned short firstDigit = number / 1000;
unsigned short secondDigit = number / 100 % 10;
unsigned short thirdDigit = number / 10 % 10;
unsigned short lastDigit = number % 10;
std::cout << "First digit is: " << firstDigit << std::endl;
std::cout << "Second digit is: " << secondDigit << std::endl;
std::cout << "Third digit is: " << thirdDigit << std::endl;
std::cout << "Last digit is: " << lastDigit << std::endl;
unsigned short sum = firstDigit + secondDigit + thirdDigit + lastDigit;
std::cout << "Sum of digits is: " << sum << std::endl;

```

</details>

> 6. Да се напише програма, която въвежда две страни на правоъгълник. Да се провери дали е квадрат и ако е квадрат да се изпише като съобщение на конзолата. След това да се намерят и отпечатат периметърът и лицето на въведеният правоъгълник/квадрат.
<details>
<summary>
<b>Отговор</b>
</summary>

```c++
unsigned firstNumber, secondNumber;
std::cin >> firstNumber >> secondNumber;
if(firstNumber == secondNumber) {
    std::cout << "The rectangle is square \n";
} else {
    std::cout << "The rectangle is ordinary \n";
}
unsigned area, perimeter;
area = firstNumber * secondNumber;
std::cout << "Area is: " << area << std::endl;
perimeter = 2 * (firstNumber + secondNumber);
std::cout << "Perimeter is: " << perimeter << std::endl;
```

</details>

## Още задачи

> 1. Да се напише булев израз, който да има стойност истина, ако посоченото условие е вярно и лъжа - в противен случай:

- цялото число p се дали на 4 или на 7

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
p % 4 == 0 || p % 7 == 0
```

</details>

- уравнението ax^2 + bx + c = 0 (a != 0) няма реални корени

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
b * b - 4 * a * c < 0 
```

</details>

- точка с координати (a, b) лежи извън кръга с център (c, d) и радиус f

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
sqrt((a - c) ^ 2 + (b - d) ^ 2) > f
```

</details>

- точка с координати (x, y) принадлежи на венеца с център (0, 0) и радиуси 5 и 10

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
sqrt(x ^ 2 + y ^ 2) > 5 &&
sqrt(x ^ 2 + y ^ 2) < 10
```

</details>

- x принадлежи на отсечка/интервал [0, 1]

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
x >= 0 && x <= 1
```

</details>

- x e равно на max { a, b, c }

<details>
<summary>
<b>Отговор</b>
</summary>

```c++
x == a && a > b && a > c ||
x == b && b > a && b > c ||
x == c && c > a && c > b
```

</details>


## По-сложни задачки

1) [Футболна задача](./Условие.pdf)
2) Запознайте се с [решето на Ератостен](https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif). Напишете програма, която имитира този алгоритъм с **едномерен статичен масив**.