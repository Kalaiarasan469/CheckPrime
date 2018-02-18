#include <iostream>
using namespace std;
class Prime
{
int n,s,i=0,j=0,ar[5];
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	}
bool chck()
{
    	cout<<"OUTPUT"<<endl;
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        return false;
        }
    }
    return true;
}
};
int main()
{
Prime n;
n.get();
if(n.chck())
{
    cout<<"yes";
    }
    else
    {cout<<"no";
    }
return 0;
}