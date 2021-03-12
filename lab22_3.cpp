#include<iostream>

using namespace std;

int count(int *data,int n)
{
    set<int> myset;
    for(int i=0;i<n;i++)
    {   
        myset.insert(data[i]);
    }
  return myset.size();

}

