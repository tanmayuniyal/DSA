class Solution
{
public:
  int numIdenticalPairs(vector<int> &nums)
  {

    int sum = 0;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      auto itr = mp.find(nums[i]);
      if (itr == mp.end())
      {
        mp.insert({nums[i], 1});
      }
      else
      {
        itr->second += 1;
      }
    }
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
      if (itr->second >= 2)
        sum += (itr->second * (itr->second - 1)) / 2;
    }
    return sum;
  }
};
