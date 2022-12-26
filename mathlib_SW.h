// @Copyright SolviganatWalker
// Date: 12.22.20222
// Free use of library with GNU licence 3.0
// Documentations https://github.com/SolivagantWalker/Mathlib#readme

#ifndef math_h 
#define math_h
#include <math.h>
#endif


#include <string>

namespace mathlib_SW
{

#pragma region Vectors
    //Define for conversion function
    struct Vector3D;
    
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

        //Copy constructor
        Vector2D(const Vector2D& vec2)
        {
            this->x=vec2.x;
            this->y=vec2.y;
        }

        //Destructor
        ~Vector2D()=default; 

        //Operatios "Copy elision C++17"
        Vector2D operator+(Vector2D vec2){
            return Vector2D(vec2.x+this->x,this->y+vec2.y);
        }

        Vector2D operator-(Vector2D vec2){
            return Vector2D(vec2.x-this->x,this->y-vec2.y);
        }
        
        Vector2D operator*(const int k){
            return Vector2D(this->x*k,this->y*k);
        }

        Vector2D operator/(const int k){
            return Vector2D(this->x/k,this->y/k);
        }

        Vector2D operator=(Vector2D vec2)const{
            return Vector2D(vec2.x,vec2.y);
        }

        operator Vector3D() const;

        bool operator==(Vector2D vec2){
            if(this->x == vec2.x && this->y==vec2.y)
            {
                return true;
            }else
                return false;
        }
        
        //Functions
        float Magnitude() const {
            return sqrt(x*x+y*y);
        }
        

        //Scalar product 
        float DotProduct(const Vector2D vec2)
        {
            return this->x*vec2.x + this->y*vec2.y;
        }
        
        //Vector product not possible change to Vector3 first!
        Vector2D CrossProduct(const Vector2D vec2)
        {
        //    throw std::exception("Error!");
            return Vector2D(0,0);
        };


        //Angle Between vectors (in radinas)
        float Angle(const Vector2D vec2)
        {
            return acos(this->DotProduct(vec2)/(this->Magnitude()*vec2.Magnitude()));
        }

        //Static properties

        const static Vector2D Down(){ return Vector2D(0,-1);}
        
        const static Vector2D Up(){ return Vector2D(0,1);}
        
        const static Vector2D Left() { return Vector2D(-1,0);}
        
        const static Vector2D Right(){ return Vector2D(1,0);}

        const static Vector2D One(){ return Vector2D(1,1);}
        
        const static Vector2D Zero() { return Vector2D(0,0);}

        std::string ToString() const {
            return " x: " + std::to_string(x) + " y: " + std::to_string(y);
        }
    };


    struct Vector3D
    {
        float x;
        float y;
        float z;

        explicit Vector3D():x(0),y(0),z(0){};
        explicit Vector3D(float x,float y,float z):x(x),y(y),z(z){};
        ~Vector3D()=default;

        operator Vector2D() const;

        std::string ToString() const {
            return " x: " + std::to_string(x) + " y: " + std::to_string(y) + " z: " + std::to_string(z);
        }

        static const Vector3D Zero(){
            return Vector3D(0,0,0);
        }
         static const Vector3D One(){
            return Vector3D(1,1,1);
        }

    };


    //Conversion
    Vector2D::operator Vector3D() const
    {
        return Vector3D(this->x,this->y,0.f);
    };

     Vector3D::operator Vector2D() const
    {
        return Vector2D(this->x,this->y);
    };

#pragma endregion
//to be defined
    struct Quaterinon{};

//to be defined
    struct Matrix3x3{};
    struct Matrix4x4{};
//Projections

namespace Projections
{


}
}
