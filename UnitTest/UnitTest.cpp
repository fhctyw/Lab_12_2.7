#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_2.7\LongLong.cpp"
#include "..\Lab_12_2.7\Cursor.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor cur{ {100, 100} };
			cur.move(3, 2);
			Assert::IsTrue(cur.getPosition().getHigh() == 103 && cur.getPosition().getLow() == 102);
		}
	};
}
