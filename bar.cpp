#include <catch.cpp>
int bar(a,b){
  return a*b;
}

TEST_CASE("foo work?","[foo]"){
  REQUIRED(foo(1,2)==2);
  REQUIRED(foo(2,4)==8);
  REQUIRED(foo(3,7)==21);
}
