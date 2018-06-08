#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int i, j, k, m, n, z;
    string s;
    stringstream ss;
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>s;
        cin>>n;
        for(j=0; j<n; j++)
        {
            for(k=0; k<s.length(); )
            {
                z=s.find_first_not_of(s[k], k+1);
                if(z==-1) z=s.length();
                ss<<z-k<<s[k];
                k=z;
            }
            ss>>s;
            ss.str("");
            ss.clear();
        }
        cout<<s<<endl;
    }
    return 0;
}
