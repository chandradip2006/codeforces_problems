#include<stdio.h>
#include<stdbool.h>
int fibonacci(int x){
    if(x == 1 || x == 2){
        return 1;
    }
    else return fibonacci(x - 1) + fibonacci(x - 2);
}
int factorial(int x){
    if(x == 0){
        return 1;
    }
    else return x*factorial(x-1);
}
int power(int x , int y){
    int z = 1;
    for(int i = 1 ; i <= y ; i++){
        z = z * x;
    }
    return z;
}
void prime(int x){
    int z ;
    for(int i = 2 ; i <= x ; i++){
        if(x % i == 0){
            z = i;
            break;
        }
        else continue;
    }
    if(z == x){
        printf("prime number");
    }
    else printf("composite number");
}
int gcd(int a , int b){
    int z;
    if (a > b){
        for(int i = 1 ; i <= b ; i++){
            if(a % i == 0 && b % i ==0){
                z = i;
            }
            else continue;
        }
    }
    else {
        for(int i = 1 ; i <= a ; i++){
            if(a % i == 0 && b % i ==0){
                z = i;
            }
            else continue;
        }
    }
    return z;
}
void swap (int x , int y){
    int temp;
    temp = x ;
    x = y ;
    y = temp;
    printf("%d %d" , x , y);
}
int sum(int x){
    int ld;
    int r = 0;
    int z = x;
    for(int i = 1 ; i <= z ; i++){
        if (x != 0){
            ld = x % 10;
            r += ld;
            x = x / 10;
        }
        else break;
    }
    return r;
}


int main(){
    // printf("hello world");
    // int a , b;
    // printf("enter the num1: ");
    // scanf("%d" , &a);
    // printf("enter the num2: ");
    // scanf("%d" , &b);
    // int sum = a + b;
    // printf("the sum is : %d" , sum);
    // int a , b;
    // scanf("%d" , &a);
    // scanf("%d" , &b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("%d %d" , a , b);

    // int n;
    // scanf("%d" , &n);
    // if(n % 2 == 0){
    //     printf("even number");
    // }
    // else printf("odd number");

    // int a , b , c;
    // scanf("%d" , &a);
    // scanf("%d" , &b);
    // scanf("%d" , &c);
    // if(a >= b){
    //     if (a >= c){
    //         printf("the largest is: %d" , a);
    //     }
    //     else printf("the largest is: %d" , c);
    // }
    // else {
    //     if(b >= c){
    //         printf("the largest is: %d" , b);
    //     }
    //     else printf("the largest is: %d" , c);
    // }

    // int n;
    // scanf("%d" , &n);
    // int p = 1;
    // for(int i = 1 ; i <= n ; i++){
    //     p = p * i;
    // }
    // printf("the factorial is: %d" , p);
    // int n;
    // printf("enter the no of terms of the series: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     printf("%d " , fibonacci(i));
    // }

    // int n;
    // scanf("%d" , &n);
    // int z ;
    // for(int i = 2 ; i <= n ; i++){
    //     if(n % i == 0){
    //         z = i;
    //         break;
    //     }
    //     else continue;
    // }
    // if (z == n){
    //     printf("prime number");
    // }
    // else printf("composite number");

    // int a , b;
    // printf("enter the num1: ");
    // scanf("%d" , &a);
    // printf("enter the num2: ");
    // scanf("%d" , &b);
    // int z;
    // if (a > b){
    //     for (int i = 1 ; i <= b ; i++){
    //         if(a % i == 0 && b % i == 0){
    //             z = i;
    //         }
    //         else continue;
    //     }
    // }
    // else {
    //     for (int i = 1 ; i <= a ; i++){
    //         if(a % i == 0 && b % i == 0){
    //             z = i;
    //         }
    //         else continue;
    //     }
    // }
    // printf("the GCD of %d & %d is: %d" , a , b , z);

    // int a , b;
    // printf("enter the num1: ");
    // scanf("%d" , &a);
    // printf("enter the num2: ");
    // scanf("%d" , &b);
    // int p = a * b;
    // int z;
    // for(int i = 1 ; i <= p ; i++){
    //     if(i % a == 0 && i % b == 0){
    //         z = i;
    //         break;
    //     }
    //     else continue;
    // }
    // printf("the LCM of %d & %d is: %d" , a , b, z);

    // int n;
    // printf("enter the no of elements: ");
    // scanf("%d" , &n);
    // int arr[n];
    // for(int i = 0; i < n ; i++){
    //     printf("enter the term%d: " , i+1);
    //     scanf("%d" , &arr[i]);
    // }
    // int sum = 0;
    // for(int i = 0 ; i < n ; i++){
    //     sum += arr[i];
    // }
    // printf("the sum of the elements: %d" , sum);

    // int n;
    // printf("enter the no of terms: ");
    // scanf("%d" , &n);
    // int arr[n];
    // for(int i = 0 ; i < n ; i++){
    //     printf("enter the term%d: " , i+1);
    //     scanf("%d" , &arr[i]);
    // }
    // for(int i = 0 ; i < n ; i++){
    //     printf("%d " , arr[i]);
    // }
    // printf("\n");
    // int z = n / 2;
    // for(int i = 0 ; i < z; i++){
    //     int temp = arr[i];
    //     arr[i]= arr[n - i - 1];
    //     arr[n - i - 1] = temp;
    // }
    // for(int i = 0 ; i < n ; i++){
    //     printf("%d " , arr[i]);
    // }

    // int n;
    // printf("enter the no of terms: ");
    // scanf("%d", &n);
    // int arr[n];
    // for(int i = 0 ; i < n ; i++){
    //     scanf("%d" , &arr[i]);
    // }
    // int z = arr[0];
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] > z){
    //         z = arr[i];
    //     }
    //     else continue;
    // }
    // int arr1[n];
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] != z){
    //         arr1[i] = arr[i] ;
    //     }
    //     else continue;
    // }
    // int z1 = arr1[0];
    // for(int i = 0 ; i < n - 1 ; i++){
    //     if(arr1[i] > z1){
    //         z1 = arr1[i];
    //     }
    //     else continue;
    // }
    // printf("the second largest term is: %d" , z1);

    // int n;
    // printf("enter the size of the square matrix: ");
    // scanf("%d" , &n);
    // int arr[n][n];
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         printf("enter thr term(%d , %d): " , i+1 , j+1);
    //         scanf("%d" , &arr[i][j]);
    //     }
    // }
    // int sum = 0;
    // for(int j = 0 ; j< n ; j++){
    //     sum = sum + arr[j][j];
    // }
    // printf("the sum of the diagonal elements of the matrix is: %d" , sum);

    // int n;
    // printf("enter the size of the square matrix: ");
    // scanf("%d" , &n);
    // int arr[n][n];
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         printf("enter the term(%d , %d): " , i+1 , j+1);
    //         scanf("%d" , &arr[i][j]);
    //     }
    // }
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         printf("%d " , arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // int arr1[n][n];
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         arr1[i][j] = arr[j][i];
    //     }
    // }
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         printf("%d " , arr1[i][j]);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter the length of the array: ");
    // scanf("%d" , &n);
    // int arr[n];
    // for(int i = 0 ; i < n ; i++){
    //     printf("enter the term%d: " , i+1);
    //     scanf("%d" , &arr[i]);
    // }
    // int r;
    // printf("user input: ");
    // scanf("%d" , &r);
    // bool flag = false;
    // for(int i = 0 ; i < n ; i++){
    //     if(r == arr[i]){
    //         flag = true;
    //         break;
    //     }
    //     else continue;
    // }
    // if(flag == true){
    //     printf("the element is present in the array");
    // }
    // else printf("the element is not present in the array");

    // char str[] = "chandradip karmakar";
    // int l = sizeof(str) / sizeof(str[0]);
    // printf("the size of the string is: %d" , l - 1);

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     printf("%d\n" , i);
    // }

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= 10 ; i++){
    //     printf("%d X %d: %d\n" , n , i , n*i);
    // }

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int ld;
    // int sum = 0;
    // int z = n;
    // for(int i = 1 ; i <= n ; i++){
    //     if(z != 0){
    //         ld = z % 10 ;
    //         sum += ld;
    //         z = z / 10;
    //     }
    //     else break;
    // }
    // printf("the sum of the digits of the number is: %d" , sum);

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int z = n;
    // int r = 0;
    // int ld;
    // for(int i = 1 ; i <= n ; i++){
    //     if(z != 0){
    //         ld = z % 10;
    //         r = r * 10 + ld;
    //         z = z / 10; 
    //     }
    //     else break;
    // }
    // printf("the number is: %d\n" , n);
    // printf("the reverse number is: %d" , r);

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int z = n;
    // int ld;
    // int a = 0;
    // for(int i = 1 ; i <= n ; i++){
    //     if(z != 0){
    //         ld = z % 10;
    //         a += ld*ld*ld;
    //         z = z / 10;
    //     }
    //     else break;
    // }
    // if(a == n){
    //     printf("armstrong number");
    // }
    // else printf("not armstrong number");

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // printf("the factorial of %d is: %d" , n , factorial(n));

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int sum = 0;
    // for(int i = 1 ; i <= n ; i++){
    //     if(i % 2 == 0){
    //         sum += i;
    //     }
    //     else continue;
    // }
    // printf("the sum of all even numbers is: %d" , sum);

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // int sum = 0;
    // for(int i = 1 ; i <= n ; i++){
    //     if(i % 2 != 0){
    //         sum += i;
    //     }
    //     else continue;
    // }
    // printf("the sum of all odd numbers is: %d" , sum);

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // for(int i = 2 ; i <= n ; i++){
    //     bool flag = false;
    //     for (int j = 2 ; j < i ; j++){
    //         if(i % j == 0){
    //             flag = true;
    //             break;
    //         }
    //         else continue;
    //     }
    //     if(flag == false){
    //             printf("%d\n" , i);
    //     }
    //     else continue;
    // }

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("enter a number: ");
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <=(n-i) ; j++){
    //         printf("  ");
    //     }
    //     for(int k = 1 ; k <= i ; k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    // int n;
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= (n - i) ; j++){
    //         printf(" ");
    //     }
    //     for(int k = 1 ; k <= 2 * i - 1 ; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i = 1 ; i <= (n - 1) ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         printf(" ");
    //     }
    //     for(int k = 1 ; k <= 2 *(n - i) - 1 ; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int n;
    // scanf("%d" , &n);
    // printf("the factorial of %d is: %d" , n , factorial(n));

    // int n;
    // scanf("%d" , &n);
    // for(int i = 1 ; i <= n ; i++){
    //     printf("%d\n" , fibonacci(i));
    // }

    // int a , b;
    // printf("enter the base: ");
    // scanf("%d" , &a);
    // printf("enter the power: ");
    // scanf("%d" , &b);
    // printf("%d raised to the power %d is: %d" , a , b , power(a , b));

    // int n;
    // scanf("%d" , &n);
    // prime(n);

    // int x , y;
    // scanf("%d" , &x);
    // scanf("%d" , &y);
    // printf("the GCD of %d and %d is : %d" , x , y , gcd(x , y));

    // int a , b;
    // scanf("%d" , &a);
    // scanf("%d" , &b);
    // swap (a , b);

    // int n;
    // scanf("%d" , &n);
    // printf("the sum of the digits of %d is: %d" , n , sum(n));




    return 0;
}