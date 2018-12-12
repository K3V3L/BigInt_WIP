#include <iostream>
#include <string>
#include "longint.h"
#include <bits/stdc++.h>
void swap(LongInt * num1, LongInt * num2)
{
    LongInt * temp = num1;
    num1 = num2;
    num2 = temp;
}
LongInt * FindDiff(LongInt num1, LongInt num2)
{
    if(num1.isSmaller(&num2))
        swap(&num1, &num2);
    LongInt * result = new LongInt("");
    int n1 = (int)(num1.digits.length()),n2 = (int)(num2.digits.length());
    std::reverse(num1.digits.begin(), num1.digits.end());
    std::reverse(num2.digits.begin(), num2.digits.end());
    int carry = 0;
    for(int i =0; i < n2; i++)
    {
        int sub = ((num1.digits.at(i) - '0') - (num2.digits.at(i) - '0') - carry);
                if(sub < 0){
                sub += 10;
                carry = 1;
    }
                else
                carry=0;
        result->digits.push_back(sub + '0');
    }
    for(int i =n2;i < n1;i++)
    {
        int sub = ((num1.digits.at(i)-'0') - carry);
        if(sub < 0)
        {
            sub +=10;
            carry = 1;
        }
        else
        {
            carry = 0;
            result->digits.push_back(sub + '0');
        }
        return result;
    }
}
int main()
{
    std::cout << "Enter first integer: ";
    std::string * temp;std::cin >> *temp;
    LongInt * dilnik = new LongInt(temp);
    std::cout << "Enter second integer: ";
    return 0;
}
