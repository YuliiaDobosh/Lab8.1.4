#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab8.1.4\Lab8.1.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const char* str = "test while_while_";
			int count = Count(str, "while");
			Assert::AreEqual(2, count);
		}
	};
}
