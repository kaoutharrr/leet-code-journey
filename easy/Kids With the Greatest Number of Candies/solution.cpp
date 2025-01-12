



#include <vector>  
#include <algorithm>  

class Solution {  
public:  
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {  
        int maxCandies = *std::max_element(candies.begin(), candies.end()); 
        std::vector<bool> res(candies.size());   
  
        for (size_t i = 0; i < candies.size(); ++i) {  
            res[i] = (candies[i] + extraCandies >= maxCandies);  
        }  

        return res;  
    }  
};