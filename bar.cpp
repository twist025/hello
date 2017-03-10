#include "catch.hpp"
int bar(a,b){
  return a*b;
}

TEST_CASE("bar work?","[foo]"){
  REQUIRE(bar(1,2)==2);
  REQUIRE(bar(2,4)==8);
  REQUIRE(bar(3,7)==21);
}
