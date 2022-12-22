// @Copyright SolviganatWalker
// Date: 12.22.20222
// Free use of library with GNU licence 3.0
// Documentations https://github.com/SolivagantWalker/Mathlib#readme

#include <math.h>
#include <string>

namespace mathlib
{

    struct Vector2D
    {
        //Variables
        float x;
        float y;
        
        //Constructs
        Vector2D() =default;
        Vector2D(float x=0,float y=0):x(x),y(y){};
        ~Vector2D()=default;

        //Operatios
        Vector2D operator+(Vector2D vec2){
            return Vector2D(vec2.x+this->x,this->y+vec2.y);
        }

        Vector2D operator-(Vector2D vec2){
            return Vector2D(vec2.x-this->x,this->y-vec2.y);
        }
        
        Vector2D operator*(int multiplier){
            return Vector2D(this->x*multiplier,this->y*multiplier);
        }

        Vector2D operator/(int multiplier){
            return Vector2D(this->x/multiplier,this->y/multiplier);
        }

        bool operator==(Vector2D vec2){
            if(this->x == vec2.x && this->y==vec2.y)
            {
                return true;
            }else
                return false;
        }


        //Functions
        int Magnitude() const {
            return sqrt(x*x+y*y);
        }
        
        std::string ToString() const {
            return " x: " + std::to_string(x) + " y: " + std::to_string(y);
        }

    };
}
