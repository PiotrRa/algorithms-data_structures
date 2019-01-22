#include "utils.h"
#include <iostream>

void 
utils::testPermutations(int* arr, int startIndex, const int& arrLength, predicates::BasePredicate* test)
{
 
  int i;	
  if(startIndex==arrLength-1) 
  {
    print(arr, arrLength);

    if((*test)(arr, arrLength)) { std::cout << "Baby Gin!!!" << std::endl;};
  }
  else
  {
    for(i=startIndex; i < arrLength; i++)
    {	    
      utils::swap(arr+startIndex, arr+i);
      testPermutations(arr, startIndex+1, arrLength, test);
      utils::swap(arr+startIndex, arr+i);
    }
  }  
}
void 
utils::swap(int* x, int* y) 
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}
void
utils::print(const int* arr, const int& arrLength)
{
  for (int i =0; i<arrLength; i++)
  {
    std::cout << arr[i] << " "; 
  }
  std::cout <<std::endl;
}

