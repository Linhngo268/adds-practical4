 
#include "Reverse.h"
#include <string>
 

std::string Reverse::reverseString(std::string letters)//reverse string recursion

       {

       size_t number_characters= letters.size();

     

       if(number_characters== 1)

       return letters;

       else

       {
return letters[number_characters-1]+ reverseString(letters.substr(0, number_characters- 1));

       }

       }





 int Reverse::reverseDigit(int value)

       {

           if(value<10){
               return value;
               }

       int len=0;

       for (int i=value; i; i/=10){
           len++;
           }

     

       return value%10*(int)pow(10, len-1) + reverseDigit(value/10);

       }

