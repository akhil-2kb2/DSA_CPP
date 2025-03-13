#include<iostream>
using namespace std;
int main()
    {
	float PI {3.14f};
	int age {25};
	//double b {(double)age};
	double b {static_cast<double>(age)};
	char grade {'A'};
	cout << "Hi All\n" << "I'm AKHILESH\n" << "      YADAV\n" << "AGE = " << age <<"\n" << "Grade = " << grade<< "\n"<< "PI = " << PI << "\n"<< b << endl;
	return 0;
    }
