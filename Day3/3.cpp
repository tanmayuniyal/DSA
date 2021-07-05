class Solution
{
public:
  string restoreString(string s, vector<int> &indices)
  {
    string str = "";
    for (int i = 0; i < indices.size(); i++)
    {
      auto itr = find(indices.begin(), indices.end(), i);
      str += s[itr - indices.begin()];
    }
    return str;
  }
};
