// Remove Duplicates from Sorted Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int insertNum = 1;
        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i - 1] != nums[i])
            {
                nums[insertNum] = nums[i];
                insertNum++;
            }
           
        }
        return insertNum;

        for (int i = 0; i < nums.size(); i++) {
            std::cout << nums[i];
        }
    }
};

int main()
{
    std::vector<int> vec{ 0,0,0,1,1,2,2,3,3,4 };
    Solution a;
    std::cout << a.removeDuplicates(vec);
}
