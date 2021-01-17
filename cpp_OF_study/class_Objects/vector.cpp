#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Vectors

{
	public:
		Vectors();

		~Vectors();

		int vectorPrint();

	protected:
	private:
		double Vector1[3][1];
		double Vector2[3][1];


};


int main()

{
	Vectors vec;
	vec.vectorPrint();

	return 0;
};

Vectors::Vectors()
{
	cout << "Initialise the vectors :" << endl;
	for (int i = 0; i < 3; i++)
	{
		Vector1[i][0] = 0;
		Vector2[i][0] = 0;
	}
}

Vectors::~Vectors()
{
	cout << "end of the object, destructor running ... " << endl;
}

int Vectors::vectorPrint()
{
	cout << "The Vectors are printed as follows :" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "The Vector1 's row " << i << " column 0 " << "is "  << Vector1[i][0] << endl;
	}
	return 0;
}
