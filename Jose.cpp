#include <iostream>
#include <vector>
using namespace std;
vector<int> calculaP(vector<int> v1, bool x)
{
    vector<int> v2;
    if (v1.size() == 1)
    {
        return v1;
    }
    if (x)
    {
        //impar
        for (int i = 0; i < v1.size(); i++)
        {
            if ((i+1)%2==0)
            {
                v2.push_back(v1[i]);
            }
            
        }
        x=v2[v2.size()-1]==v1[v1.size()-1];
    }
    else
    {
        //par
        for (int i = 0; i < v1.size(); i++)
        {
            if ((i+1)%2==1)
            {
                v2.push_back(v1[i]);
            }
            
        }
        x=v2[v2.size()-1]==v1[v1.size()-1];
        
        
        
    }
    return calculaP(v2,x);
}

int main()
{
    int n;
    vector<int> vec;
    cout<<"Ingresa un numero"<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(i + 1);
    }
    vector<int> res = calculaP(vec, false);
    cout<<res[0];
    return 0;
}
