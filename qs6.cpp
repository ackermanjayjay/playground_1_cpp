#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <cstring>

// squares-of-a-sorted-array
std::vector<int> solution(std::vector<int> num)
{
    std::vector<int> result;
    for (auto a : num)
        result.push_back(std::abs(std::pow(a, 2)));
    std::sort(result.begin(), result.end());
    return result;
}
int main()
{
    std::vector<int> num = {-4, -1, 0, 3, 10};
    std::vector<int> result = solution(num);
      for (int i : result)
        std::cout << i << " ";
    std::cout << std::endl;

  
    return 0;
}