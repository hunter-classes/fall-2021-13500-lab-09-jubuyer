#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
Coord3D pointP = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};
Coord3D pointR = {124, 164, -42};
Coord3D pointS = {20, -12, 312};

Coord3D vel_1 = {1, -5, 0.2};
Coord3D vel_2 = {5, -3, 1};

TEST_CASE("Test for length [TASK A]") {
  CHECK(length(&pointP) == doctest::Approx(37.4166).epsilon(.05));
  CHECK(length(&pointQ) == doctest::Approx(36.4005).epsilon(.05));
  CHECK(length(&pointR) == doctest::Approx(209.8476).epsilon(.05));
  CHECK(length(&pointS) == doctest::Approx(312.8706).epsilon(.05));
}

TEST_CASE("Test for fartherFromOrigin [TASK B]") {
  CHECK(fartherFromOrigin(&pointP,&pointQ) == &pointP);
  CHECK(fartherFromOrigin(&pointP,&pointR) == &pointR);
  CHECK(fartherFromOrigin(&pointQ,&pointS) == &pointS);

  SUBCASE("EXCEPTION?") {
    CHECK(fartherFromOrigin(&pointS,&pointS) == &pointS);
  }
}

TEST_CASE("Tests for move [TASK C]") {
  move(&pointP,&vel_1,2.0);
  move(&pointQ,&vel_2,3.1);
  move(&pointR,&vel_1,10.0);
  
  CHECK(pointP.x == 12.0);
  CHECK(pointQ.x == -4.5);
  CHECK(pointR.x == 134.0);

  CHECK(pointP.y == 10.0);
  CHECK(pointQ.y == 11.7);
  CHECK(pointR.y == 114.0);

  CHECK(pointP.z == 30.4);
  CHECK(pointQ.z == -18.9);
  CHECK(pointR.z == -40);
}

TEST_CASE("Tests for createCoord3D/deleteCoord3D [TASK E]") {

}
