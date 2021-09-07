void removeAll(vector<string> &v, string str)
{
  vector<string>a;
  for(int i=0;i<v.size();i++)
  {
    if(v[i]!=str)
      a.push_back(v[i]);
  }
  v=a;
}
