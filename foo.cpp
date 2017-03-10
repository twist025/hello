#include <catch.cpp>
int foo(a,b){
  return a+b;
}

TEST_CASE("foo work?","[foo]"){
  REQUIRED(foo(1,2)==3);
  REQUIRED(foo(2,4)==6);
  REQUIRED(foo(1,2)==3);
}
