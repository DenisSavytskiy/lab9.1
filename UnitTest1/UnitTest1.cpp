#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№9.1/AP_Lab№9.1.cpp"
#include "../AP_Lab№9.1/dod.h"
#include "../AP_Lab№9.1/dod.cpp"
#include "../AP_Lab№9.1/var.h"
#include "../AP_Lab№9.1/var.cpp"
#include "../AP_Lab№9.1/sum.h"
#include "../AP_Lab№9.1/sum.cpp"
#include <math.h>
#define M_PI 3.14159265358979323846
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsSum;
using namespace nsDod;
namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestArcctgCalculation)
        {
            x = 0.5;
            n = 1;
            a = -x;

            double expected = a * -(x * x) * (2 * n - 1) / (2 * n + 1);

            dod();

            Assert::AreEqual(expected, a, 0.0001);
        }
    };
}