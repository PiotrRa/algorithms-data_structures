namespace predicates {

class BasePredicate{

public:
  BasePredicate() {};
  virtual ~BasePredicate() {};
  virtual bool operator()(int* arr, const int& arrLength) = 0;

};

class IsBabyGin : public BasePredicate
{
public:
  IsBabyGin(){};
  ~IsBabyGin(){};
  bool operator()(int* arr, const int& arrLength);

private:

 bool isRun(int* arr);
 bool isTriplet(int* arr);


};
}
