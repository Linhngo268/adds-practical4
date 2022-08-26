#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
 #include <ctype.h>

using namespace std;

int main(){
    Reverse rev1;
    Truckloads truck1;
    EfficientTruckloads truck2;
    
    int i;
    string s1;
    int numcrate;
    int loadsize1;
    
    cout<<"Please enter"<<endl;
    cin>>i>>s1>>numcrate>>loadsize1;
     
    
 

if(i<0)

               cout<<"ERROR"<<" ";
             
            

           else

               cout<<rev1.reverseDigit(i)<<" ";
               cout<<rev1.reverseString(s1)<<" ";
 

    
         if(numcrate <0)
             cout<<"ERROR"<<endl;
    else
        cout<<truck1.numTrucks(numcrate,loadsize1)<<"";
     cout<<truck2.numTrucks(numcrate,loadsize1)<<" ";
}
