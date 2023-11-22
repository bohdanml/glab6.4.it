#include "pch.h"
#include "CppUnitTest.h"
#include "..\\lab6.4\lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountNegativeElements)
        {
            const int size = 5;
            double arr[size] = { -2.5, 2.0, -4.7, 4.2, -8.1 };

            int negativeCount = countNegativeElements(arr, size);

            Assert::AreEqual(3, negativeCount);
        }
    };
}