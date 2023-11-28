#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Єва\Desktop\lab3oipz\lab3oipz\lab3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(calculate_Tests)
	{
	public:
		
		TEST_METHOD(calculate_get4and6_41returned)
		{
			int n = 4;
			int x = 6;
			int expected = 41;

			int actual = calculate(n, x);

			Assert::AreEqual(expected, actual);
		}

	public:

		TEST_METHOD(calculate_get6andminus2_6379returned)
		{
			int n = 6;
			int x = -2;
			int expected = 6379;

			int actual = calculate(n, x);

			Assert::AreEqual(expected, actual);
		}
	};
	TEST_CLASS(checkValidParams_Tests)
	{
	public:

		TEST_METHOD(checkValidParams_get7_exeptionNotThrown)
		{
			int n = 7;
			try
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch(...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(checkValidParams_get1_exeptionThrown)
		{
			int n = 1;
			try
			{
				checkValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);;
			}
		}
	};
}
