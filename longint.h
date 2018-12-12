#ifndef LONGINT_H
#define LONGINT_H
#include <iostream>

class LongInt
{
private:
public:
    std::string digits;
    LongInt(std::string digits){
        this->digits = digits;
    }
    void print()
    {
        std::cout << this->digits;
    }
    bool isSmaller(LongInt * num)
    {
        if(this->digits.length() < num->digits.length())
            return true;
        if(this->digits.length() > num->digits.length())
            return false;
        for(int i = 0;i < num->digits.length();i++)
        {
            if(this->digits.at(i) < num->digits.at(i))
                return true;
            if(this->digits.at(i) > num->digits.at(i))
                return false;
            return false;
        }
    }
    bool equals(LongInt * num){
        if(this->digits.length() != num->digits.length())
            return false;
        for(int i =0;i < num->digits.length(); i++){
            if(this->digits.at(i) != num->digits.at(i))
                return false;
        }
    }
    LongInt * subtract(LongInt * num){

    }
    LongInt * divideBy(LongInt * dilnik)
    {

    }
};

#endif // LONGINT_H
