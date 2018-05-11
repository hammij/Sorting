#ifndef ALGORITHMS
#define ALGORITHMS
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Algorithms(){
public:
  Alogrithms(); //default
  Algorithms(int arraySize); //overloaded constructor
  ~Algorithms() //destructor

  void BubbleSort(double a[]);
  void insertionSort(double a[]);
  void quickSort(double a[], double left, double right)

  double myArray;
  int length;
  time_t startTime;
  time_t endTime;
};

Algorithms::Alogrithms(){
  myArray = new double[0];
  length = 0;
}

Algorithms::Algorithms(int arraySize){
  double myArray = new double[arraySize];
  length = arraySize;
}

Algorithms::~Alogrithms(){
  delete myArray;
}

void Algorithms::BubbleSort(double a[]){
  for(int i = 0; i < length; ++i){
    double temp = 0;
    for (int j = 0; j < length-1; ++j){
      if(a[j]>a[j+1]){
        temp = a[j+1]
        a[j+1] = a[j]
        a[j] = temp;
      }
    }
  }
}

void Algorithms::insertionSort(double a[]){
  int i, j;
  double temp;
  for (int i =1; i < length; ++i){
    j = i;
    while(j > 0 && a[j-1] >= a[j]){
      temp = a[j];
      a[j] = a[j-1];
      a[j-1] temp;
      --j;
    }
  }
}

void Algorithms::quickSort(double a[], double left, double right){
  double i = left;
  double j = right;
  double temp;
  double pivot = a[(left+right)/2];

  while(i<=j){
    while(a[i] < pivot){
      ++i;
    }
    while(a[j] > pivot){
      --j;
    }
    if(i <= j){
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      ++i;
      --j;
    }
  }
  if (left < j){
    quickSort(a, left, j);
  }
  if(i < right){
    quickSort(a, i, right);
  }
}

#endif
