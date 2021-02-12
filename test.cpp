#include <iostream>
#include <string>
#include <vector>

template<typename dtype>
dtype sum(const std::vector<dtype> &data)
{
    dtype sum = data[0];
    for(int i=1; i<data.size(); i++) sum += data[i];
    return sum;
}

int main()
{
    std::vector<std::string> data{"a", "e", "i"};
    auto result = sum(data);
    std::cout << result << std::endl;
    return 0;
}
