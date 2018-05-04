#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

int a[6]={1,5,8,9,4,0};
int b[5]={5,9,3,7,10};
vector<int> v1 (a, a+6);
vector<int> v2 (b, b+5); 

class Halmaz
{
 
public:
	Halmaz()
	{
		int i;
		sort (v1.begin(), v1.end(), myobject); 
		sort (v2.begin(), v2.end(), myobject);
		cout<<"'A' halmaz: ";
		for (i=0; i<v1.size(); i++)
			cout<<v1[i]<<" ";
		cout << endl;
    
		cout<<"'B' halmaz: ";
		for (i=0; i<v2.size(); i++)
			cout<<v2[i]<<" ";
		cout << endl;
	}
	
    vector<int> intersection (vector<int> v1, vector<int> v2 )
	{
		int i=0, j=0;
		vector<int> in;

		sort (v1.begin(), v1.end(), myobject); 
		sort (v2.begin(), v2.end(), myobject); 
		for (i=0; i<v1.size(); i++)
		{
			for (j=0; j<v2.size(); j++)
			{
				if (v1[i]==v2[j])
				{
					in.push_back(v1[i]);
					goto next;
				}
			}
			next:;
		}
		return in;
	};
	
    vector<int> unio (vector<int> v1, vector<int> v2 )
	{
		int i=0, j=0;
		vector<int> un;
		sort (v1.begin(), v1.end(), myobject); 
		sort (v2.begin(), v2.end(), myobject); 
		while(i<v1.size() && j<v2.size())
		{
			if (v1[i]==v2[j])
			{
				un.push_back(v1[i]);
				i++;
				j++;
				continue;
			}
			if (v1[i]>v2[j])
			{
				un.push_back(v2[j]);
				j++;
				continue;
			}
			if (v1[i]<v2[j])
			{
				un.push_back(v1[i]);
				i++;
				continue;
			}
		}
		while(i<v1.size()) 
		{
			un.push_back(v1[i]);
			i++;
		}
		while(j<v2.size()) 
		{
			un.push_back(v2[j]);
			j++;
		}
		return un;
	};
	
    vector<int> symdif (vector<int> v1, vector<int> v2 )
	{
		int i=0, j=0;
		vector<int> sd;
		sort (v1.begin(), v1.end(), myobject); 
		sort (v2.begin(), v2.end(), myobject); 
		while(i<v1.size() && j<v2.size())
		{
			if (v1[i]==v2[j])
			{
				i++;
				j++;
				continue;
			}
			if (v1[i]>v2[j])
			{
				sd.push_back(v2[j]);
				j++;
				continue;
			}
			if (v1[i]<v2[j])
			{
				sd.push_back(v1[i]);
				i++;
				continue;
			}
		}
		while(i<v1.size()) 
		{
			sd.push_back(v1[i]);
			i++;
		}
		while(j<v2.size()) 
		{
			sd.push_back(v2[j]);
			j++;
		}
		return sd;
	};

};

int main()
{	
	int i;
	Halmaz x;
	
	x.intersection(v1, v2);
	cout<<"Metszet: ";
	for (i=0; i<x.intersection(v1, v2).size(); i++)
		cout<<x.intersection(v1, v2)[i]<<" ";
	cout<<endl;
	
	x.unio(v1, v2);
	cout<<"Unio: ";
	for (i=0; i<x.unio(v1, v2).size(); i++)
		cout<<x.unio(v1, v2)[i]<<" ";
	cout<<endl;
	
	x.symdif(v1, v2);
	cout<<"Szimmetrikus differencia: ";
	for (i=0; i<x.symdif(v1, v2).size(); i++)
		cout<<x.symdif(v1, v2)[i]<<" ";
	cout<<endl;
}

