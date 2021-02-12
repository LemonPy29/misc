#include "series.h"
#include "series.cpp"
#include <vector>
#include <string>
#include <iostream>
#include <python3.6/Python.h>

int main ()
{ 
    std::vector<std::string> data{"a", "e", "i"};
    Series<std::string> s (data);
    std::cout << s.sum() << std::endl;
    return 0;  
}
