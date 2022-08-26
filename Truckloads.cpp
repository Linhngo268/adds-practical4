#include "Truckloads.h"
int Truckloads::numTrucks(int numCreates,int loadSize){
if(numCreates<0||numCreates>10000||loadSize<0||loadSize>10000||numCreates<=loadSize){
return 1;
}
 
if(numCreates%2==0){
    return numTrucks(numCreates/2,loadSize)+numTrucks(numCreates/2,loadSize);

}
return numTrucks(numCreates/2,loadSize) + numTrucks((numCreates/2)+1,loadSize);
}