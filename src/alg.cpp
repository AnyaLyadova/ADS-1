// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  bool flag = true;
  for (int i = 2; i <= value; ++i) {
    if (i == value) {
        continue;
    }
    if (value % i == 0) {
      flag = false;
      break;
    }
  }
  return flag;
}

uint64_t nPrime(uint64_t n) {
  int count = 0;
  int result = 0;
  for (int i=2; count < n; ++i) {
    if (checkPrime(i)) {
      ++count;
      result = i;
    }
  }
  return result;
}

uint64_t nextPrime(uint64_t value) {
  int result = 0;
  for (int i = value+1;; ++i) {
    if (checkPrime(i)) {
      result = i;
      break;
    }
  }
  return result;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t result = 0;
  for (uint64_t i = 2; i< hbound; ++i) {
    if (checkPrime(i)) {
      result+=i;
    }
  }
  return result;
}
