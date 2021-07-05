class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int i = 0;
    int k = nums.size() - 1;
    while (i <= k)
    {
      if (nums[i] == val)
      {
        nums[i] = nums[k];
        k -= 1;
      }
      else
        i += 1;
    }
    return k + 1;
  }
};