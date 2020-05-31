
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("for tests") {
    for(int i=0; i<=100; i++){
    string text = "For test";
    CHECK(find(text, "for") == string("For"));
    CHECK(find(text, "test") == string("test"));

}
}