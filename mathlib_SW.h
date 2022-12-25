// @Copyright SolviganatWalker
// Date: 12.22.20222
// Free use of library with GNU licence 3.0
// Documentations https://github.com/SolivagantWalker/Mathlib#readme

#include <math.h>
#include <string>

namespace mathlib_SW
{
    struct Vector2D
    {
        //Variables
        float x;
        float y;
        
        //Default Constructor
        Vector2D() =default;
        //Parameters Constructor 
        explicit Vector2D(float x,float y):x(x),y(y){};
        explicit Vector2D(float x):x(x),y(0){};
       // explicit Vector2D(float y):x(0),y(y){};

        //Copy constructor
        Vector2D(const Vector2D& vec2)
        {
            this->x=vec2.x;
            this->y=vec2.y;
        }


        //Move consstructor 

        //Destructor
        ~Vector2D()=default;

        //Operatios "Copy elision C++17"
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

        Vector2D operator=(Vector2D vec2){
            return Vector2D(vec2.x,vec2.y);
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


        //Static properties

        const static Vector2D Down(){ return Vector2D(0,-1);}
        
        const static Vector2D Up(){ return Vector2D(0,1);}
        
        const static Vector2D Left() { return Vector2D(-1,0);}
        
        const static Vector2D Right(){ return Vector2D(1,0);}

        const static Vector2D One(){ return Vector2D(1,1);}
        
        const static Vector2D Zero() { return Vector2D(0,0);}

        
        
    };
}
