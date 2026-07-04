#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Workshop{
string name;
int start,finish;
};

bool compareFinish(Workshop a,Workshop b)
{
    return a.finish<b.finish;
}

vector<Workshop> ActivitySelection(vector<Workshop> workshops)
{

    sort(workshops.begin(),workshops.end(), compareFinish);
    vector<Workshop> selected;
    selected.push_back(workshops[0]);
    int lastFinish=workshops[0].finish;

    for(int i=1; i<workshops.size();i++)
    {
        if(workshops[i].start>=lastFinish)
        {
            selected.push_back(workshops[i]);
            lastFinish=workshops[i].finish;
        }
    }
    return selected;
}


int main()
{
    int n;
    cin>>n;
    vector<Workshop>workshops;
    for(int i=0;i<n;i++)
    {
        Workshop w;
        cin>>w.name >> w.start>> w.finish;
        workshops.push_back(w);
    }
    vector<Workshop> selected=ActivitySelection(workshops);

    cout<<"Maximum Workshops="<<selected.size()<<endl;

    cout<<"Selected:";

    for(int i=0;i<selected.size();i++)
    {
      cout<<selected[i].name;
      if(i!=selected.size()-1)
      {
          cout<<",";
      }
    }
    cout<<endl;
}



