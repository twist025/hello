#include "catch.hpp"
int bar(a,b){
  return a*b;
}

TEST_CASE("foo work?","[foo]"){
  REQUIRE(foo(1,2)==2);
  REQUIRE(foo(2,4)==8);
  REQUIRE(foo(3,7)==21);
}
