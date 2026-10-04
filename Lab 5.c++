/* Write a program to print numbers from 1 to 10, but skip 5 using continue.........................1*/
#include <iostream>
using namespace std;
int main() {
  for (int i=1; i< 10; i++) {
    if (i==5)
    continue;
  cout << i << "";
}
return 0;
}

/* Write a program to print numbers from 1 to 10, but stop at 7 using break ........................2*/
#include <iostream>
using namespace std;
int main() {
for (int i=1; i<=10;i++) {
break;
if (i==7)
cout << i << "***";
}
return 0;
}

/* Write a program to search for a number in a sequence; stop searching if found (break) ...........................3*/
#include <iostream>
using namespace std;
int main() {
int numbers[]={4,8,12,15,20};
int key;
cin >> key;
for (int i=0; i<5; i++) {
if (numbers[i] == key) {
cout << "Number found";
break;
}
}
return 0;
}

/* Write a program to display even numbers between 1 and 20, skipping multiples of 4 (continue) ........................4*/
#include <iostream>
using namespace std;
int main() {
for (int i=1; i<=20; i++) {
if (i%2 != 0 || i%4 == 0)
continue;
cout << i << " ";
}
return 0;
}

/* Write a program to simulate a menu-driven calculator with default in switch ..................5*/
#include <iostream>
using namespace std;
int main() {
double a, b;
int choice;
cin >> a >> b >> choice;
switch (choice) {
case 1:
cout << "Sum = " << a + b;
break;
case 2:
cout << "Difference = " << a - b;
break;
case 3:
cout << "Product = " << a * b;
break;
case 4:
if (b == 0)
cout << "Cannot divide by zero";
else
cout << "Division = " << a / b;
break;
default:
cout << "Invalid choice";
}
return 0;
}

/* Write a program to check if a number is prime, terminate loop early using break .........................6*/
#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
bool isPrime = (n >= 2);
for (int i = 2; i < n; i++) {
if (n % i == 0) {
isPrime = false;
break;
}
}
if (isPrime)
cout << "Prime number";
else
cout << "Not a prime number";
return 0;
}
/* Write a program to read numbers until -1 is entered, skip negative numbers using continue ....................7*/
#include <iostream>
using namespace std;
int main() {
int number;
while (true) {
cin >> number;
if (number == -1)
break;
if (number < 0)
continue;
cout << number << " ";
}
return 0;
}

/* Write a program to print multiplication table for a given number, but stop when the product exceeds 50 .......................8*/
#include <iostream>
using namespace std;
int main() {
int number;
cin >> number;
for (int i = 1; ; i++) {
int product = number * i;
if (product > 50)
break;
cout << number << " * " << i << " = " << product << endl;
}
return 0;
}
/* Write a program to demonstrate default case when no matching switch case exists ..........................9*/
#include <iostream>
using namespace std;
int main() {
int choice;
cin >> choice;
switch (choice) {
case 1:
cout << "You selected One";
break;
case 2:
cout << "You selected Two";
break;
default:
cout << "No matching case";
}
return 0;
}

/* Write a program to count positive numbers entered by the user until 0 is entered (break) .....................10*/
#include <iostream>
using namespace std;
int main() {
int number;
int positiveCount = 0;
while (true) {
cin >> number;
if (number == 0)
break;
if (number > 0)
positiveCount++;
}
cout << "Positive numbers = " << positiveCount;
return 0;
}

/* Write a program to calculate factorial of a number using while loop ......................11*/
#include <iostream>
using namespace std;
int main() {
int n, factorial = 1, i = 1;
cin >> n;
while (i <= n) {
factorial *= i;
i++;
}
cout << "Factorial = " << factorial;
return 0;
}

/* Write a program to generate Fibonacci series using while loop ...................12*/
#include <iostream>
using namespace std;
int main() {
int n, first = 0, second = 1, i = 0;
cin >> n;
while (i < n) {
cout << first << " ";
int next = first + second;
first = second;
second = next;
i++;
}
return 0;
}

/* Write a program to find and print all prime numbers between 1 and N ............................13*/
#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
for (int number = 2; number <= n; number++) {
bool isPrime = true;
for (int divisor = 2; divisor < number; divisor++) {
if (number % divisor == 0) {
isPrime = false;
break;
}
}
if (isPrime)
cout << number << " ";
}
return 0;
}

/* Write a program to check whether a given number is Armstrong or not ..................14*/
include <iostream>
using namespace std;
int main() {
int number, temp, sum = 0, digits = 0;
cin >> number;
temp = number;
if (temp == 0)
digits = 1;
while (temp > 0) {
digits++;
temp /= 10;
}
temp = number;
while (temp > 0) {
int digit = temp % 10;
int power = 1;
for (int i = 0; i < digits; i++)
power *= digit;
sum += power;
temp /= 10;
}
if (sum == number)
cout << "Armstrong number";
else
cout << "Not an Armstrong number";
return 0;
}

/* Write a program to display Armstrong numbers between 1 and 500 ..................15*/
#include <iostream>
using namespace std;
int main() {
for (int number = 1; number < 500; number++) {
int temp = number, sum = 0, digits = 0;
while (temp > 0) {
digits++;
temp /= 10;
}
temp = number;
while (temp > 0) {
int digit = temp % 10;
int power = 1;
for (int i = 0; i < digits; i++)
power *= digit;
sum += power;
temp /= 10;
}
if (sum == number)
cout << number << " ";
}
return 0;
}

/* Write a program to check whether a number is perfect number ....................16*/
#include <iostream>
using namespace std;
int main() {
int number, sum = 0;
cin >> number;
for (int divisor = 1; divisor < number; divisor++) {
if (number % divisor == 0)
sum += divisor;
}
if (sum == number)
cout << "Perfect number";
else
cout << "Not a perfect number";
return 0;
}

/* Write a program to display all perfect numbers between 1 and 1000 ......................17*/
#include <iostream>
using namespace std;
int main() {
for (int number = 1; number < 1000; number++) {
int sum = 0;
for (int divisor = 1; divisor < number; divisor++) {
if (number % divisor == 0)
sum += divisor;
}
if (sum == number)
cout << number << " ";
}
return 0;
}

/* Write a program to check whether a number is strong number ................18*/
#include <iostream>
using namespace std;
int main() {
int number, temp, sum = 0;
cin >> number;
temp = number;
while (temp > 0) {
int digit = temp % 10;
int factorial = 1;
for (int i = 1; i <= digit; i++)
factorial *= i;
sum += factorial;
temp /= 10;
}
if (sum == number)
cout << "Strong number";
else
cout << "Not a strong number";
return 0;
}

/* Write a program to display all strong numbers between 1 and 500 ...............19*/
#include <iostream>
using namespace std;
int main() {
for (int number = 1; number < 500; number++) {
int temp = number, sum = 0;
while (temp > 0) {
int digit = temp % 10;
int factorial = 1;
for (int i = 1; i <= digit; i++)
factorial *= i;
sum += factorial;
temp /= 10;
}
if (sum == number)
cout << number << " ";
}
return 0;
}

/*Write a program to print reverse of a number and check if it's palindrome ...................20*/
#include <iostream>
using namespace std;
int main() {
int number, temp, reverse = 0;
cin >> number;
temp = number;
while (temp > 0) {
reverse = reverse * 10 + temp % 10;
temp /= 10;
}
cout << "Reverse = " << reverse << endl;
if (reverse == number)
cout << "Palindrome";
else
cout << "Not a palindrome";
return 0;
}

/* Write a program to find the sum of all even and odd digits in a given number ..................21*/
#include <iostream>
using namespace std;
int main() {
int number, temp, evenSum = 0, oddSum = 0;
cin >> number;
temp = number;
while (temp > 0) {
int digit = temp % 10;
if (digit % 2 == 0)
evenSum += digit;
else
oddSum += digit;
temp /= 10;
}
cout << "Sum of even digits = " << evenSum << endl;
cout << "Sum of odd digits = " << oddSum;
return 0;
}

/* Write a program to check whether a given number is Harshad number ...................22*/
#include <iostream>
using namespace std;
int main() {
int number, temp, digitSum = 0;
cin >> number;
temp = number;
while (temp > 0) {
digitSum += temp % 10;
temp /= 10;
}
if (digitSum != 0 && number % digitSum == 0)
cout << "Harshad number";
else
cout << "Not a Harshad number";
return 0;
}

/* Write a program to display all Harshad numbers between 1 and 100 ..........................23*/
#include <iostream>
using namespace std;
int main() {
for (int number = 1; number <= 100; number++) {
int temp = number, digitSum = 0;
while (temp > 0) {
digitSum += temp % 10;
temp /= 10;
}
if (digitSum != 0 && number % digitSum == 0)
cout << number << " ";
}
return 0;
}

/* Write a program to display the multiplication tables from 1 to 10 ................24*/
#include <iostream>
using namespace std;
int main() {
for (int number = 1; number <= 10; number++) {
cout << "\nTable of " << number << endl;
for (int multiplier = 1; multiplier <= 10; multiplier++) {
cout << number << " x " << multiplier << " = " << number * multiplier << endl;
}
}
return 0;
}

/* Write a program to print prime factors of a given number ....................25*/
#include <iostream>
using namespace std;
int main() {
int number;
cin >> number;
cout << "Prime factors: ";
for (int divisor = 2; divisor <= number; divisor++) {
while (number % divisor == 0) {
cout << divisor << " ";
number /= divisor;
}
}
return 0;
}

/* Write a program to find LCM of two numbers using loops ......................26*/
#include <iostream>
using namespace std;
int main() {
int first, second;
cin >> first >> second;
int lcm = (first > second) ? first : second;
while (lcm % first != 0 || lcm % second != 0) {
lcm++;
}
cout << "LCM = " << lcm;
return 0;
}

/* Write a program to find GCD of two numbers using loops ....................27*/
#include <iostream>
using namespace std;
int main() {
int first, second;
cin >> first >> second;
int gcd = (first < second) ? first : second;
while (first % gcd != 0 || second % gcd != 0) {
gcd--;
}
cout << "GCD = " << gcd;
return 0;
}

/* Write a program to display the sum of series: $1+2+3+...+N$ ...........................28*/
#include <iostream>
using namespace std;
int main() {
int n, sum = 0;
cin >> n;
for (int i = 1; i <= n; i++)
sum += i;
cout << "Sum = " << sum;
return 0;
}

/* Write a program to display the sum of series: $1^{2}+2^{2}+3^{2}+...+N^{2}$ ......................29*/
#include <iostream>
using namespace std;
int main() {
int n;
long long sum = 0;
cin >> n;
for (int i = 1; i <= n; i++)
sum += (long long)i * i;
cout << "Sum of squares = " << sum;
return 0;
}

/* Write a program to display the sum of series: $1^{3}+2^{3}+3^{3}+...+N^{3} .....................30*/
#include <iostream>
using namespace std;
int main() {
int n;
long long sum = 0;
cin >> n;
for (int i = 1; i <= n; i++)
sum += (long long)i * i * i;
cout << "Sum of cubes = " << sum;
return 0;
}
```[cite: 12]
