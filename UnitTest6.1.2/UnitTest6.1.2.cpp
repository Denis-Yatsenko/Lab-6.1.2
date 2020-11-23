#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b;
			const int n = 5;
			int t[n] = { 1,2,3,4,5 };
			b = Sum(t, n, 0, 0);
			Assert::AreEqual(b, 15);
		}
	};
}
