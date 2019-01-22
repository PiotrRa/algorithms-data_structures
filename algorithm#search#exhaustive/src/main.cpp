#include "main.h"
#include <iostream>
#include "utils.h"

const int ARR_LENGTH = 6;

int main (int argc, char* argv[])
{
  int arr[ARR_LENGTH];	
  std::cout << "Input 6 numbers" << std:: endl;	
  
  for(int i=0; i<ARR_LENGTH; i++)
  {
    std::cin >> arr[i];
  }	  

  predicates::BasePredicate* test = new predicates::IsBabyGin;
  utils::testPermutations(arr, 0, ARR_LENGTH, test);
  return 0;
}
