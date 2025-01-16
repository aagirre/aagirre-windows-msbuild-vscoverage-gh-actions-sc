#include "CppUnitTest.h"
#include "..\src\lib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {

  int id(int) { return 0; }

  TEST_CLASS(tests) {
  public:

    TEST_METHOD(TestMyFun) {
      myfun(true, &id);
    }

    TEST_METHOD(TestSumar) {
      int result = sumar(3, 5);
      Assert::AreEqual(8, result, L"sumar(3, 5) should return 8");
    }

  };
}
