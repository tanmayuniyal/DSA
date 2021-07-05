class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    map<int, int> mp;

    vector<int> v;
    for (int i = 0; i < nums1.size(); i++)
    {
      mp.insert({nums1[i], 1});
    }
    for (int i = 0; i < nums2.size(); i++)
    {
      auto itr = mp.find(nums2[i]);
      itr->second += 1;
    }
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
      if (itr->second > 1)
        v.push_back(itr->first);
    }
    return v;
  }
};