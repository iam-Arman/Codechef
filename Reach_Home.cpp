#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(5*a>=b)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
	return 0;
}

// problem link : https://www.codechef.com/START82C/problems/REACH_HOME
