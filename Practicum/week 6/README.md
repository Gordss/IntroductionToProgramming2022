# Задачи

## Масиви
### От предния път:

1. Въвеждат се n реални числа в масив. Да се намерят и изкарат в конзолата най-малко и най-голямото от тях.

2. Въвеждат се n цели  в масив. Да се намерят и отпечатат всички числа, чийто сбор на цифрите се дели на 3, както и техния брой.
 
3. Въвеждат се n реални числа (n <= 1000). Да се изкарат в обратен ред с помощта на помощен масив.

4. Въвеждат се n реални числа. Да се запишат  в масив и после този масив да си обърне елементите ( първото число се разменя с последно, второто с предпоследното и така нататък ).

5. Въвеждат се n (n >= 3) цели числа в масив. Да се провери дали те образуват аритметична или геометрична прогресия.

6. Въвеждат се n цели числа в масив. Да се отпечата да конзолата броят на простите числа, както и самите те.

7. Да се напише програма, която въвежда 2 масива. Изведете елементите, които са срещат:

- и в двата масива

<details>
<summary>
<b>Пример</b>
</summary>


```
1 2 3 4 5
2 7 8 5 1 10

Резултат:
1 2 5
```

</details>

- само в първия и не се делят на 3

<details>
<summary>
<b>Пример</b>
</summary>


```
17 9 6 7 13
10 1 7 18 22

Резултат:
17 13
```

</details>

- нека първоначалните масиви са сортирани, да се изведе сортиран 3ти масив от елементите на началните

<details>
<summary>
<b>Пример</b>
</summary>


```
1 2 5 10 11 24 52 66 101
-5 2 3 7 21 30 77

Резултат:
-5 1 2 2 3 5 7 10 11 21 24 30 52 66 77 101
```

</details>


### За тези, които са ги решили:


8. Въвеждат се n на брой цели числа, както и даден затворен интервал от числа, зададен с двата си края. Да се провери дали всички числа от дадения интервал се срещат измежду въведените n.

<details>
<summary>
<b>Пример</b>
</summary>


```
10 4 12 5 8 4 1 9 6 7 11 10 12

Резултат:
true
```

</details>

9. Две числови редици си приличат, ако съвпадат множествата от числата, които ги съставят. Да се напише програма, която проверява дали числовите редици а0, а1, ..., аn-1 и b0, b1, ..., bn-1, 1 <= n <= 100, си приличат.

10. Да се преобразува масива a0,1,...,an по следния начин:
- ако am<m, am се повдига на квадрат;
- ако am=m, взима се am със знак минус;
- ако am>m, am се заменя с am−1.

11. Да се напише програма, която намира скаларното произведение два вектора.

12. Да се напише програма, която изтрива от дадена редица от цели числа а0, ...,
аn-1, n Е [1;100] всички елементи, които са по-малки и от двата си съседа.

13. Да се напише програма, която за дадена числова редица a0, a1, ..., an-1
намира дължината на най-дългата ѝ ненамаляваща подредица ( ai <= ai+1 <= ... <=
ai+k).

## Функции
<b> Забележка. </b> Решенията на задачите за функции ще бъдат публикувани в седмица 7.
1. Да се напише функция, която проверява дали дадено число е просто.

2. Да се напише функция, която намира броя на четните числа в интервала [a,
b].

3. Да се напише функция, която проверява дали даден символ е малка латинска
буква или голяма латинска буква.

4. Да се напише програма, която проверява дали всички числа от даден масив са
палиндроми. Да се използва помощна фунцкия.

5. Да се напише програма, която по даден масив извежда броя на малките
латински букви и броя на големите латински букви в масива.

6. Да се напише булева функция, която проверява дали сумата от цифрите на дадено като параметър положително цяло число е кратна на 3.

7. Да се напише булева функция, която проверява дали дата, зададена в следния формат: dd.mm.yyyy е коректна дата от грегорианския календар.

## Интересна задачка със сортировка

Дадена е редица от M дробни числа с две цифри след десетичната точка, които представляват стойности в лева на телефонни сметки и друга редица от N дробни числа с две цифри след десетичната точка, които са взети от фактури за извършени плащания по някои телефонни сметки от първата редица, 1 < N < M <= 1 000 000. Напишете програма, която да определя телефонните сметки, които още не са платени.

**Вход**

Първо се въвеждат числата M и N, после M-те суми за плащане и накрая N плащания. Всяка от телефонните сметки не надвишава 400 лева.

**Изход**

Програмата трябва да изведе на един ред сумите, коите не са разплатени, с два знака след десетичната точка, сортирани в намаляващ ред и отделени с по един интервал.

<details>
<summary>
<b>Пример</b>
</summary>

```
Вход
7 4

0.13 22.78 33.00 323.12 22.78 27.38 27.38
27.38 0.13 323.12 33.00

Изход
27.38 22.78 22.78
```

</details>