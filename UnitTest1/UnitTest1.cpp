#include "pch.h"
#include "CppUnitTest.h"
#include "cmath"
#include "../Lab6.4.rek/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		double Sum(double mas[], int l = 5, int i = 0, double sum = 0) {
			if (i == l) {
				return sum;
			}
			sum += mas[i];
			return Sum(mas, l, i + 1, sum);
		}

		TEST_METHOD(TestMethod1)
		{
			double mas[] = { 3, 6, 3, 1, 6 };
			double result = Sum(mas);  
			Assert::AreEqual(result, 19.0);  
		}
	};
}
