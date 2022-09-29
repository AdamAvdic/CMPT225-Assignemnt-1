#ifndef DEQUE_H
#define DEQUE_H
#include <math.h>
#include <iostream>
using namespace std;

template <typename Object>
class Deque 
{
  public:
    Deque()
      {  
         theCapacity = 8 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         front = -1 ;  //intitially set to 0 **************
         back = 0 ; 
      }
      
    ~Deque( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }
    void clear( ){
        // remove all contents and reset the capacity to it's initial value 
        // 
        // Implement this...
        //while()

    }

    void reserve( int newCapacity )
    {
        // change the capacity to newCapacity 
        // (provided it is larger than the current size)
        // 
        // Implement this...
      
      if(newCapacity > theCapacity){
                   Object *newArray = new Object[ newCapacity ];
           for( int k = 0; k < theSize; ++k ){
                 newArray[ k ] =  objects[ k ] ;
          }
           theCapacity = newCapacity;
           Object * temp = objects ; 
           objects = newArray ;
           delete [ ] temp ;

      }
    }

    // Operations 

    void enqueue( const Object & x )// Insert a new object at the back 
    {
   //     if( theSize == theCapacity ) reserve( 2 * theCapacity + 1 );
   //     objects[ back ] = x ; 
   //     back = (back+1) % theCapacity ;
    //    theSize++ ;
if( theSize == theCapacity ){ 
  reserve( 2 * theCapacity + 1 );}

if(front == -1){
  front = 0;
  back =0;
}
else if(back == theSize-1)
  back = 0;
else
 back = back+1;

objects[back] = x;

theSize++;

}
    
    void ddisplay() const 
    {
        cout << "capacity= " << theCapacity << ", size=" << theSize << std::endl;

        cout << "[ " ;
        for( int i = 0; i < theCapacity ; ++i ){ // MAYBE THE SIZE change to capacity 
           cout << i << "=" << objects[i] << ", " ;
        }
        cout << " ]" << endl;
    }
    void jump( const Object & x )// Insert a new object at the front 
    {
      if( theSize == theCapacity ){ 
        reserve( 2 * theCapacity + 1 );}

        if(front == -1){
          front =0;
          back =0;
        } 
        else if(front ==0){

          front =theSize-1;
        }else
        front = front-1;
        objects[front]=x;
    }

    Object dequeue( )// Remove and return the object at the front 
    {
        theSize--;
        Object temp = objects[front+1];
        front = (front+1) % theCapacity ;
        return temp ;
    }

    Object eject( )// Remove and return the object at the back 
    {
        // implement this
        --theSize;
        Object temp = objects[back-1];
        back = (back-1) % theCapacity;
        return temp;
    }

    void display() const // print out the contents of the deque
    {
       // Implement this.  The outpama193@asb9838nu-e08:~/sfuhome/CMPT_225/Assignment1/Assignment 1$ s, for debugging or verifying 
    // correctness. 
    
        cout << "size=" << theSize << endl;

        cout << "< " ;
        for( int i = 0; i < theSize ; ++i ){
           cout  << i << "=" << objects[i] << ", " ;
        }
        cout << " >" << endl ;
    }
  private:
    int theSize;
    int front;
    int back;
    int theCapacity;
    Object * objects;
};

#endif