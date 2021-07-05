class Solution
{
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  {
    vector<int> temp(nums), v;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < nums.size(); i++)
    {
      auto it = find(temp.begin(), temp.end(), nums[i]);
      v.push_back(it - temp.begin());
    }
    return v;
  }
};
