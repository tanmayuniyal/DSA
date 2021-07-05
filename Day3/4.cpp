class Solution
{
public:
  vector<int> decode(vector<int> &encoded, int first)
  {
    vector<int> v;
    v.push_back(first);
    for (int i = 0; i < encoded.size(); i++)
    {
      first ^= encoded[i];
      v.push_back(first);
    }
    return v;
  }
};
