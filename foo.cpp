#include "catch.hpp"

int foo(int a,int b){
  return a+b;
}

TEST_CASE("foo work?","[foo]"){
  REQUIRE(foo(1,2)==3);
  REQUIRE(foo(2,4)==6);
  REQUIRE(foo(3,7)==10);
}
