#include <iostream>
//testing
#include "mathlib_SW.h"

using namespace mathlib;

int main(int argc , char*argv)
{

    Vector2D vec1(1,1);
    Vector2D vec2(1,1);
    Vector2D vec3(2,1);
    std::cout<<(vec1==vec2)?true:false;
    std::cout<<(vec2==vec3)?true:false;
    return 0;
}