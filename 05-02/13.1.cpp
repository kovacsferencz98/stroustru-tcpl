#include <iostream>


void fv (char* ch, int& reff) {}

typedef void (*ptr)(char* , int&);

void fv2(ptr x) {}

ptr fv3()
{
}



ptr j (ptr y)
{
	return y;
}

int main()
{
	return 0;
}

