// 1. Basic structure
Public class JavaBasics{
    public class void main (string args[]){

        System.out.println("Hello World! * 3");
    }
}
// Datatypes
int a= 9;
double d=10.1;
char c= "A";
boolean m = true;

// Typecasting
Double x= 10.5;
// int y= (int)x; ----explicit
int p=10;
// double p=q;-----implicit

// Control statements
1. if/else
if(a>5){
    System.out.println("Greater");
}else{
    System.out.println("Smaller");
}

// Switch
switch(day){
    case1: System.out.println("Mon"); 
    break;
    default: System.out.println("Invalid");
}

// Loops
for(int i=0; i>5; i++){}

while(i>5){}

do{
    i++;
}while(i<5);

// strings
String s = "hello";
String s2 = "World";

s.length();
s.charAt(0);
s.substring(1,3);
s.equals(s2);
s.toUpperCase();

// arrays
int[]arr ={1,2,3};
for (int i=0; i<arr.length; i++){}

// 2D Array
int [][] mat= new int[2][3];

// Methods
static int add(int a , int b){
    return a+b;
}

// oop concepts---class & objects
class Car{
    String name;
    void drive(){
        System.out.println("Driving");
    }
}
Car c= new Car();
c.name= "Range Rover";
c.drive();

// Encapsulation
class Person{
    private int age;

    publiv void setAge(int age){
        this.age=age;
    }
    public int getAge(){
        return age;
    }
}

// Inheritance
class Animal{
    void sound(){}
}
class Dog extends Animal{
    void sound(){
        System.out.println("Bark");
    }
}

// Polymorphism
1. method overloading
int add(int a ,int b)
{return a+b};
double add(double a, double b)
{return a+b};

2. method overriding
@override
void sound(){
    System.out.println("Dog barks");
}

// Abstraction 
abstract class shape{
    abstract void draw();
}
class Circle extends shape{
    void draw(){
        System.out.println("Circle")
    }
}


// Interface
interface Animal{
    void sound();
}
class cat implements Animal{
    public void sound(){
        System.out.println("Meow")
    }
}

// Exception Handling
try{
    int x =10 /0;
}catch (exception e){
    System.out.println(e);
}finally {
    System.out.println("Done");
}

// Java Collections Framework
1. lists--ordered, allows duplicates

import java.util.*;
list<Integer> list = new ArrayList<>();
list.add(10);
list.add(20);
list.get(0);
list.remove(1);

2. Linkedlist
List<Integer> List = new LinkedList<>();
list.add(1);
list.addFirst(0);

