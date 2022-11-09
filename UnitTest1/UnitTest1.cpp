#include "pch.h"
#include "CppUnitTest.h"
#include "../lab06.1(2)/lab06.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 23, -54, 45, 12, 98 };

			int sum = Sum(a, 5);

			Assert::AreEqual(45, sum);
		}
	};
}
