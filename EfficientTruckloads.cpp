#include "EfficientTruckloads.h"
using namespace std;
int numCratesArray[10000];


int EfficientTruckloads::numTrucks(int numCrates,int loadSize){
     if(numCrates <= loadSize){
return 1;
}

// if ncks(numCrates,loadSize) has already been computed
// we do not do further recursive calls
// and hence reduce the number of repeated
// work
if(numCratesArray[numCrates] != 0){
return numCratesArray[numCrates];
}else{

// store the computed value of numTrucks(numCrates, loadSize)
// in an array numCratesArray at index numCrates to
// so that it does not needs to be
// precomputed again
if(numCrates%2 == 0){
numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
return numCratesArray[numCrates];
}else{
numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks((numCrates/2)+1,loadSize);
return numCratesArray[numCrates];
}
}
}
