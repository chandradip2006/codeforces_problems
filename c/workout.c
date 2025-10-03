#include<stdio.h>
#include<stdbool.h>
#include<string.h>
// int factorial(int x){
//     int z = 1;
//         if (x == 0) return 1;
//         else{
//             for(int i = 1 ; i <= x ; i++){
//                 z *= i;
//             }
//             return z;
//         }
//     }
int main(){
    // printf("hello pw\n");
    // printf("hello cw\n");

    // float r;
    // printf("enter the radius of the circle: ");
    // scanf("%f" , &r);
    // float a = (3.1415) * r * r;
    // printf("the area of the circle is: %f" , a);

    // float p , r , t ;
    // printf("enter the principal: ");
    // scanf("%f" , &p);
    // printf("enter the rate of interest: ");
    // scanf("%f" , &r);
    // printf("enter the time(year): ");
    // scanf("%f" , &t);
    // float si = p * r * t /100;
    // printf("the simple interest is: %f" , si);

    // float r;
    // printf("enter the radius of the sphere: ");
    // scanf("%f" , &r);
    // float v = (4.0 / 3.0) * (3.1415) * r * r * r;
    // printf("the volume is: %f" , v);

    // int x;
    // printf("enter an integer: ");
    // scanf("%d" , &x);
    // float y = (float) x;
    // printf("the half of the number is: %f", y / 2);

    // float x;
    // printf("enter a float: ");
    // scanf("%f" , &x);
    // int y = (int) x;
    // if (y == x){
    //     printf("the float is an integer");
    // }
    // else printf("the float is not an integer");

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // if (n % 2 == 0) printf("this is an even number");
    // else printf("this is an odd number");

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // if (n % 5 == 0) printf("the number is divisible by 5");
    // else printf("the number is not divisible by 5");

    // int n;
    // printf("enter an integer: ");
    // scanf("%d" , &n);
    // if (n >= 0) printf("the absolute value is: %d" , n);
    // else printf("the absolute value is: %d" , n * (-1));

    // int cp;
    // printf("enter the cost price: ");
    // scanf("%d" , &cp);
    // int sp;
    // printf("enter the selling price: ");
    // scanf("%d" , &sp);
    // if (cp > sp) printf("loss: %d" , cp - sp);
    // else if (cp < sp) printf("profit: %d" , sp - cp);
    // else printf("no profit no loss");

    // int l , b;
    // printf("enter the length of the rectangle: ");
    // scanf("%d" , &l);
    // printf("enter the breadth of the rectangle: ");
    // scanf("%d" , &b);
    // int p = 2 * (l + b);
    // int a = l * b;
    // if (a > p) printf("the area is greater than its perimeter");
    // else if (a < p) printf("the area is less than its perimeter");
    // else printf("the area is equal to its perimeter");

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // if (n >= 100 && n <= 999) printf("this is a three digit number");
    // else printf("this is not a three digit number");

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // if (n % 5 == 0 && n % 3 == 0) printf("the number is divisible by both 3 and 5");
    // else printf("the number is not divisible by both 3 and 5");

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // if (n % 5 == 0 || n % 3 == 0) printf("the number is divisible by 3 or 5");
    // else printf("the number is divisible by neither 3 nor 5");

    // float l1 , l2 , l3;
    // printf("enter the length of side1: ");
    // scanf("%f" , &l1);
    // printf("enter the length of side2: ");
    // scanf("%f" , &l2);
    // printf("enter the length of side3: ");
    // scanf("%f" , &l3);
    // if (l1 + l2 > l3 && l3 + l2 > l1 && l1 + l3 > l2) printf("the sides form a triangle");
    // else printf("the sides do not form a triangle");

    // int a , b , c;
    // printf("enter the number1: ");
    // scanf("%d" , &a);
    // printf("enter the number2: ");
    // scanf("%d" , &b);
    // printf("enter the number3: ");
    // scanf("%d" , &c);
    // if (a >= b && a >= c) printf("the greatest number is: %d" , a);
    // else if (b >= a && b >= c) printf("the greatest number is: %d" , b);
    // else printf("the greatest number is: %d" , c);

    // int a , b , c;
    // printf("enter the number1: ");
    // scanf("%d" , &a);
    // printf("enter the number2: ");
    // scanf("%d" , &b);
    // printf("enter the number3: ");
    // scanf("%d" , &c);
    // if (a >= b) {
    //     if (a >= c) printf("the greatest number is: %d" , a);
    //     else printf("the greatest number is: %d" , c);
    // }
    // else {
    //     if (b >= c) printf("the greatest number is: %d" , b);
    //     else printf("the greatest number is: %d" , c);
    // }

    // int a , b , c;
    // printf("enter the number1: ");
    // scanf("%d" , &a);
    // printf("enter the number2: ");
    // scanf("%d" , &b);
    // printf("enter the number3: ");
    // scanf("%d" , &c);
    // if (a <= b && a <= c) printf("the least number is: %d" , a);
    // else if (b <= a && b <= c) printf("the least number is: %d" , b);
    // else printf("the least number is: %d" , c);

    // int t;
    // printf("enter a year: ");
    // scanf("%d" , &t);
    // if ((t % 100 != 0 && t % 4 == 0) || (t % 400 == 0)) printf("this is a leap year");
    // else printf("this is not a leap year");

    // int n;
    // printf("enter an integer: ");
    // scanf("%d" , &n);
    // if (n % 5 == 0 || n % 3 == 0){
    //     if (n % 15 == 0) printf("the number is divisible by 5 or 3 and divisible by 15");
    //     else printf("the number is divisible by 5 or 3 but not divisible by 15"); 
    // }
    // else printf("the number is divisible by neither 5 nor 3");

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // if (n % 5 == 0){
    //     if (n % 3 == 0) printf("the number is divisible by both 3 and 5");
    //     else printf("the number is not divisible by both 3 and 5");
    // }
    // else printf("the number is not divisible by both 3 and 5");

    // int ram , shyam , ajay;
    // printf("enter the age of ram: ");
    // scanf("%d" , &ram);
    // printf("enter the age of shyam: ");
    // scanf("%d" , &shyam);
    // printf("enter the age of ajay: ");
    // scanf("%d" , &ajay);
    // if (ram < shyam){
    //     if (ram < ajay) printf("the youngest of the three is ram");
    //     else printf("the youngest of the three is ajay");
    // }
    // else {
    //     if (shyam < ajay) printf("the youngest of the three is shyam");
    //     else printf("the youngest of the three is ajay");
    // }

    // float p;
    // printf("enter your percentage: ");
    // scanf("%f" , &p);
    // if (100 >= p && p > 80) printf("very good");
    // else if (80 >= p && p > 60) printf("good");
    // else if (60 >= p && p > 40) printf("average");
    // else printf("fail");

    // float x , y;
    // printf("enter the X coordinate: ");
    // scanf("%f" , &x);
    // printf("enter the Y coordinate: ");
    // scanf("%f" , &y);
    // if (x > 0 && y > 0) printf("the point lies in 1st quadrant");
    // else if (x < 0 && y > 0) printf("the point lies in 2nd quadrant");
    // else if (x < 0 && y < 0) printf("the point lies in 3rd quadrant");
    // else if (x > 0 && y < 0) printf("the point lies in 4th quadrant");
    // else if (x == 0 && y != 0) printf("the point lies on Y axis");
    // else if (x != 0 && y == 0) printf("the point lies in X axis");
    // else printf("the point lies at the origin");

    // float a , b , r , x , y;
    // printf("enter the X coordinate of the centre of the circle: ");
    // scanf("%f" , &a);
    // printf("enter the Y coordinate of the centre of the circle: ");
    // scanf("%f" , &b);
    // printf("enter the radius of the circle: ");
    // scanf("%f" , &r);
    // printf("enter the X coordinate of a random point: ");
    // scanf("%f" , &x);
    // printf("enter the Y coordinate of a random point: ");
    // scanf("%f" , &y);
    // if ((x - a) * (x - a) + (y - b) * (y - b) > r * r) printf("the point lies outside the circle");
    // else if ((x - a) * (x - a) + (y - b) * (y - b) < r * r) printf("the point lies inside the circle");
    // else printf("the point lies on the circle");

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // (n % 2 == 0) ? printf("this is an even number") : printf("this is an odd number");

    // int n;
    // printf("enter a natural number from 1 to 7: ");
    // scanf("%d" , &n);
    // switch(n){
    //     case 1:
    //         printf("monday");
    //         break;
    //     case 2:
    //         printf("tuesday");
    //         break;
    //     case 3:
    //         printf("wednesday");
    //         break;
    //     case 4:
    //         printf("thrusday");
    //         break;
    //     case 5:
    //         printf("friday");
    //         break;
    //     case 6:
    //         printf("saturday");
    //         break;
    //     case 7:
    //         printf("sunday");
    //         break;
    //     default:
    //         printf("invalid");
    // }

    // char ch;
    // printf("enter an operator: ");
    // scanf("%c" , &ch);
    // float a , b;
    // printf("enter the number1: ");
    // scanf("%f" , &a);
    // printf("enter the number2: ");
    // scanf("%f" , &b);
    // switch (ch){
    //     case '+':
    //         printf("the sum is: %f" , a + b);
    //         break;
    //     case '-':
    //         printf("the difference is: %f" , a - b);
    //         break;
    //     case '*':
    //         printf("the product is: %f" , a * b);
    //         break;
    //     case '/':
    //         printf("the division is: %f" , a / b);
    //         break;
    //     default:
    //         printf("syntax error");
    // }

    // int n;
    // printf("enter the number of times to be printed: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     printf("hello world\n");
    // }

    // int n;
    // printf("enter a natural number upto which the numbers are printed: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     printf("%d\n" , i);
    // }

    // int n;
    // printf("enter a natural number upto which the even numbers are printed: ");
    // scanf("%d" , &n);
    // for (int i = 2 ; i <= n ; i += 2){
    //     printf("%d\n" , i);
    // }
    // int n;
    // printf("enter a natural number upto which the even numbers are printed: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     if (i % 2 == 0) printf("%d\n" , i);
    //     else continue;
    // }

    // int n;
    // printf("enter a natural number upto which the odd numbers are printed: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     if (i % 2 != 0) printf("%d\n" , i);
    //     else continue;
    // }

    // int n;
    // printf("enter a natural number upto which the odd numbers are printed: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i = i + 2){
    //     printf("%d\n" , i);
    // }

    // int n;
    // printf("enter the number of which the table to be printed: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= 10 ; i++){
    //     printf("%d : %d" , i , n * i);
    //     printf("\n");
    // }

    // int a ,n , d;
    // printf("enter the no of terms of the series: ");
    // scanf("%d" , &n);
    // printf("enter the first term: ");
    // scanf("%d" , &a);
    // printf("enter the common difference: ");
    // scanf("%d" , &d);
    // for (int i = 0 ; i < n ; i++){
    //     printf("%d\n" , a + i * d);
    // }

    // int a ,n , d;
    // printf("enter the no of terms of the series: ");
    // scanf("%d" , &n);
    // printf("enter the first term: ");
    // scanf("%d" , &a);
    // printf("enter the common difference: ");
    // scanf("%d" , &d);
    // int z = a - d ;
    // for (int i = 1 ; i <= n ; i++){
    //     z += d;
    //     printf("%d\n" , z);
    // }

    // int a ,n , d;
    // printf("enter the no of terms of the series: ");
    // scanf("%d" , &n);
    // printf("enter the first term: ");
    // scanf("%d" , &a);
    // printf("enter the common difference: ");
    // scanf("%d" , &d);
    // for(int i = 1 ; i <= n ; i++){
    //     printf("%d\n" , a);
    //     a += d;
    // }

    // int a ,n , r;
    // printf("enter the no of terms of the series: ");
    // scanf("%d" , &n);
    // printf("enter the first term: ");
    // scanf("%d" , &a);
    // printf("enter the common ratio: ");
    // scanf("%d" , &r);
    // for (int i = 1 ; i <= n ; i++){
    //     printf("%d\n" , a);
    //     a *= r;
    // }

    // int n;
    // printf("enter an integer: ");
    // scanf("%d" , &n);
    // for (int i = n - 1 ; i > 1 ; i--){
    //     if(n % i == 0) {
    //         printf("the greatest integer of %d except %d is: %d" , n , n , i);
    //         break;
    //     }
    // else continue;
    // }

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // int z;
    // if (n == 1) printf("neither prime nor composite");
    // else{
    //     for (int i = n - 1 ; i >= 1 ; i--){
    //         if (n % i == 0) {
    //             z = i;
    //             break;
    //         }
    //         else continue;
    //     }
    // }
    // if (z == 1) printf("prime number");
    // else if (z != 0) printf("composite number");

    // int n;
    // printf("enter the natural number: ");
    // scanf("%d" , &n);
    // int i = 1;
    // while(i <= n){
    //     printf("%d\n" , i);
    //     i++;
    // }

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // int count = 0;
    // while(n != 0){
    //     n = n / 10;
    //     count++;
    // }
    // printf("the no of digits is: %d" , count);

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // int z = 0;
    // int r;
    // while(n > 0){
    //     r = n % 10;
    //     n = n / 10;
    //     z += r;
    // }
    // printf("the sum of the digits is: %d" , z);

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // int z = 0;
    // int r;
    // while(n > 0){
    //     r = n % 10;
    //     n = n / 10;
    //     if(r % 2 == 0){
    //         z += r;
    //         continue;
    //     }
    //     else continue;
    // }
    // printf("the sum of the digits is: %d" , z);

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // int r = 0;
    // while(n != 0){
    //     int ld = n % 10;
    //     n = n / 10;
    //     r = r * 10;
    //     r = r + ld;
    // }
    // printf("the reverse of the number is: %d" , r);

    // int n;
    // printf("enter a positive integer: ");
    // scanf("%d" , &n);
    // int z = n;
    // int r = 0;
    // while(z != 0){
    //     int ld = z % 10;
    //     z = z / 10;
    //     r = r * 10;
    //     r = r + ld;
    // }
    // printf("the sum of the number and its reverse is: %d" , r + n);

    // int n;
    // printf("enter an integer: ");
    // scanf("%d" , &n);
    // int z = 1;
    // if (n == 0) printf("the factorial is: 1");
    // else {
    //     for (int i = 1 ; i <= n ; i++){
    //         z *= i;
    //     }
    //     printf("the factorial is: %d" , z);
    // }

    // int n;
    // printf("enter a natural number: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     printf("%d\n" , factorial(i));
    // }

    // for (int i = 0 ; i < 26 ; i++){
    //     printf("%d : %c\n" , 65 + i , 65 + i);
    // }

    // int r;
    // printf("enter the no of rows: ");
    // scanf("%d" , &r);
    // int c;
    // printf("enter the no of columns: ");
    // scanf("%d" , &c);
    // for(int i = 1 ; i <= r ; i++){
    //     for (int j = 1 ; j <= c ; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int l;
    // printf("enter the side length of the number square: ");
    // scanf("%d" , &l);
    // for(int i = 1 ; i <= l ; i++){
    //     for(int j = 1 ; j <= l ; j++){
    //         printf("%d " , j);
    //     }
    //     printf("\n");
    // }

    // int l;
    // printf("enter the side length of the number square: ");
    // scanf("%d" , &l);
    // for(int i = 1 ; i <= l ; i++){
    //     for(int j = 1 ; j <= l ; j++){
    //         printf("%d " , i);
    //     }
    //     printf("\n");
    // }

    // int l;
    // printf("enter the length of the alphabet square: ");
    // scanf("%d" , &l);
    // for(int i = 1 ; i <= l ; i++){
    //     for(int j = 0 ; j < l ; j++){
    //         printf("%c " , 65 + j);
    //     }
    //     printf("\n");
    // }

    // int l;
    // printf("enter the length of the alphabet square: ");
    // scanf("%d" , &l);
    // for(int i = 0 ; i < l ; i++){
    //     for(int j = 0 ; j < l ; j++){
    //         printf("%c " , 65 + i);
    //     }
    //     printf("\n");
    // }

    // int r;
    // printf("enter the no of rows: ");
    // scanf("%d" , &r);
    // for(int i = 1 ; i <= r ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int r;
    // printf("enter the no of rows: ");
    // scanf("%d" , &r);
    // for(int i = 1 ; i <= r ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         printf("%d " , j);
    //     }
    //     printf("\n");
    // }

    // int r;
    // printf("enter the no of rows: ");
    // scanf("%d" , &r);
    // for(int i = 1 ; i <= r ; i++){
    //     for (int j = 0 ; j < i ; j++){
    //         printf("%c " , 65 + j);
    //     }
    //     printf("\n");
    // }

    // int r;
    // printf("enter the no of rows: ");
    // scanf("%d" , &r);
    // for(int i = 1 ; i <= r ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         printf("%d " , i);
    //     }
    //     printf("\n");
    // }
    
    // int r;
    // printf("enter the no of rows: ");
    // scanf("%d" , &r);
    // for(int i = 0 ; i < r ; i++){
    //     for (int j = 0 ; j < i + 1 ; j++){
    //         printf("%c " , 65 + i);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("%d " , j);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("%d " , i + 1);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     for(int j = 0 ; j <= n - i ; j++){
    //         printf("%c " , 65 + j);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 0 ; i < n ; i++){
    //     for(int j = 1 ; j <= n - i ; j++){
    //         printf("%c " , 65 + i);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the side length of the number square: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for (int j = 1 ; j <= n ; j++){
    //         printf("%d " , 2 * j - 1);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // int z = 1;
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         printf("%d " , z);
    //         z++;
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     for (int j = 1 ; j <= i ; j++){
    //         printf("%d " , 2 * j - 1);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 0 ; i < n ; i++){
    //     for (int j = 1 ; j <= n - i ; j++){
    //         printf("%d " , 2 * j - 1);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     for (int j = 1 ; j <= i ; j++){
    //         printf("%d " , 2 * j);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 0 ; i < n ; i++){
    //     for (int j = 1 ; j <= n - i ; j++){
    //         printf("%d " , 2 * j);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the side length of the number square: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= n ; j++){
    //         printf("%d " , 2 * j);
    //     }
    //     printf("\n");
    // }

    // int x = printf("hello");
    // printf("%d" , x);

    // int r;
    // printf("enter the no of rows: ");
    // scanf("%d" , &r);
    // for (int i = 1 ; i <= r ; i++){
    //     for (int j = 1 ; j <= i ; j++){
    //         if((i + j) % 2 == 0) printf("1 ");
    //         else printf("0 ");
    //     }
    //     printf("\n");
    //}
    
    // int r;
    // printf("enter the odd no of rows: ");
    // scanf("%d" , &r);
    // int mid = r / 2 + 1;
    // for (int i = 1 ; i <= r ; i++){
    //     for(int j = 1 ; j <= r ; j++){
    //         if (i == mid || j == mid) printf("* ");
    //         else printf("  ");
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("ënter the number of rows: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 1 ; k <= i ; k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for (int i = 1 ; i <= n ; i++){
    //     for (int j = 1 ; j <= n ; j++){
    //         if(i + j >= n + 1) printf("* ");
    //         else printf("  ");
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 1 ; k <= i ; k++){
    //         printf("%d " , k);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 0 ; j <= (n - i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 0 ; k < i ; k++){
    //         printf("%c " , 65 + k);
    //     }
    //     printf("\n");
    // }

    // int l;
    // printf("enter the length of rhombus: ");
    // scanf("%d" , &l);
    // for(int i = 1 ; i <= l ; i++){
    //     for(int j = 1 ; j <= (l - i) ; j++){
    //         printf(" ");
    //     }
    //     for(int k = 1 ; k <= l ; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of row: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf(" ");
    //     }
    //     for(int k = 1 ; k <= (2 * i - 1) ; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of row: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 1 ; k <= (2 * i - 1) ; k++){
    //         printf("%d " , k);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 0 ; k < 2*i - 1 ; k++){
    //         printf("%c " , 65 + k);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the no of rows: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 1 ; k <= i ; k++){
    //         printf("%d " , k);
    //     }
    //     for(int r = i - 1 ; r >= 1 ; r--){
    //         printf("%d " , r);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 1 ; k <= 2 * i - 1 ; k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // int r = n - 1;
    // for(int i = 1 ; i <= r ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         printf("  ");
    //     }
    //     for(int j = 1 ; j <= (2 * (r - i) + 1) ; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    
    
    


    return 0;
}