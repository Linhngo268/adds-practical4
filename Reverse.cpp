//
//  Reverse.cpp
//  
//
//  Created by Ngo Linh on 4/4/22.
//

#include "Reverse.h"
#include <string>
using namespace std;


std::string Reverse::reverseString(std::string str1)//reverse string recursion

       {

       size_t number_characters= str1.size();

     

       if(number_characters== 1)

       return str1;

       else

       {
return str1[number_characters-1]+
           reverseString(str1.substr(0, number_characters- 1));

       }

       }





 int Reverse::reverse_Digit(int val)

       {

           if(val<10){
               return val;
               }

       int len=0;

       for (int i=val; i; i/=10){
           len++;
           }

     

       return val%10*(int)pow(10, len-1) + reverse_Digit(val/10);

       }

