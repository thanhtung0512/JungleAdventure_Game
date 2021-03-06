#ifndef VECTOR2D_H
#define VECTOR2D_H

#include<iostream>

class Vector2D{
    public:
        float X,Y;
    public : 
        Vector2D (float x=0, float y=0){
            X=x;
            Y=y;
        };
        ~Vector2D(){

        }
    public :

    //addtion 
        inline Vector2D operator + ( const Vector2D& v2) const {
            return Vector2D (X+v2.X , Y+v2.Y);
        }

    //substraction 
        inline Vector2D operator - ( const Vector2D& v2) const {
            return Vector2D (X-v2.X , Y-v2.Y);
        }
    // multiplication 
        inline Vector2D operator - ( const float scalar) const {
            return Vector2D (X*scalar , Y*scalar);
        }
        void Log ( std::string v){
            std::cout<<v.c_str()<<":(X,Y)=("<<X<<","<<Y<<")";
        }

};

#endif