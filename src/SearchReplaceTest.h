#include <cxxtest/TestSuite.h>


void searchReplaceMain(int argc, const char** argv, char result[]);

class SearchReplaceTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
	void test_Unit_Test_2(){
	    
	    const char *largv[] = {"1", "CONCATENATE", "CAT", "DOG" };
	    char result[100];

	    searchReplaceMain(4, largv, result);
		
	
		TS_ASSERT_EQUALS("CONDOGENATE", result);


	}
	
}; 