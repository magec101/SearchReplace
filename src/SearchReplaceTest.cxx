/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SearchReplaceTest_init = false;
#include "/var/www/html/codeit/workspace/SearchReplace/src/SearchReplaceTest.h"

static SearchReplaceTest suite_SearchReplaceTest;

static CxxTest::List Tests_SearchReplaceTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SearchReplaceTest( "/var/www/html/codeit/workspace/SearchReplace/src/SearchReplaceTest.h", 6, "SearchReplaceTest", suite_SearchReplaceTest, Tests_SearchReplaceTest );

static class TestDescription_suite_SearchReplaceTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SearchReplaceTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_SearchReplaceTest, suiteDescription_SearchReplaceTest, 16, "test_Unit_Test_1" ) {}
 void runTest() { suite_SearchReplaceTest.test_Unit_Test_1(); }
} testDescription_suite_SearchReplaceTest_test_Unit_Test_1;

static class TestDescription_suite_SearchReplaceTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SearchReplaceTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_SearchReplaceTest, suiteDescription_SearchReplaceTest, 20, "test_Unit_Test_2" ) {}
 void runTest() { suite_SearchReplaceTest.test_Unit_Test_2(); }
} testDescription_suite_SearchReplaceTest_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
