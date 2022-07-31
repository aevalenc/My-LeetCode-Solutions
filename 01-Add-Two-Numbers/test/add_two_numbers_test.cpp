/*
 * Author : Alejandro Valencia
 * Project: Backwards Substitution - main unit tests
 */

#include <gtest/gtest.h>

namespace
{

class AddTwoNumbersTestBaseFixture : public ::testing::Test
{
  public:
    // You can remove any or all of the following functions if their bodies
    // would be empty.

    AddTwoNumbersTestBaseFixture()
    {
        // You can do set-up work for each test here.
    }

    // ~AddTwoNumbersTestBaseFixture()
    // {
    //     // You can do clean-up work that doesn't throw exceptions here.
    // }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    // Class members declared here can be used by all tests in the test suite
    // for Foo.
};

class AddTwoNumbersTest : public AddTwoNumbersTestBaseFixture
{
};

}  // namespace