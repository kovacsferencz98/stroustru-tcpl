#include <iostream>

using namespace std;

int fact (int n){
int x=1,
	
if (n==0 || n==1)
	return 1;
else {
	for (int i=1; i<=n; i++)
	x=x*i;
	return x;
	}
}

int main(int argc, char* argv[]){
int n;
    
cout << "Number " << endl;
cin >> n;
cout << "Fact of " << n <<"is:" << fact(n) << endl;


return 0;

}

