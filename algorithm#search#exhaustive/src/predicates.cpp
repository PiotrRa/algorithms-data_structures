#include "predicates.h"


using namespace predicates;

bool
IsBabyGin::operator()(int* arr, const int& arrLength)
{
  int arrLo[3] = {arr[0], arr[1], arr[2]};
  int arrHi[3] = {arr[3], arr[4], arr[5]};
  
  return isRun(arrLo) && isTriplet(arrHi);

}
bool
IsBabyGin::isRun(int* arr)
{
  return (arr[0] == arr[1] - 1) && (arr[1] == arr[2] - 1); 
}
bool
IsBabyGin::isTriplet(int* arr)
{
  return (arr[0] == arr[1]) && (arr[1] == arr[2]);
}
