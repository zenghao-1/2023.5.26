#include <iostream>
#include <string>
using namespace std;
class STRING
{
public:
	STRING(char * s)
	{
		cout << "Construtor called." << endl;
		ptr = new char[strlen(s) + 1];
		strcpy(ptr, s);
	}
	~STRING()
	{
		cout << "Destrutor called.---" << ptr << endl;
		delete ptr;
	}
	STRING &operator=(const STRING &);
private:
	char * ptr;
};

STRING &STRING::operator=(const STRING &s)
{
	if (this == &s)return * this;
	delete ptr;
	ptr = new char[strlen(s.ptr) + 1];
	strcpy(ptr, s.ptr);
	return * this;
}

int main()
{
	STRING p1("book");
	STRING p2("jeep");
	return 0;

}