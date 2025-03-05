#include <iostream>
#include "counter.h"

Counter::Counter() { count = 1; }
Counter::Counter(int& num) { count = num; }

void Counter::setIncrease() { count++; }
void Counter::setDecrease() { count--; }
void Counter::getCurrent() const { std::cout << count << '\n'; }
