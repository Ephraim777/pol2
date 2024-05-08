#include <iostream>
#include <string>
class shape {
protected:
    std::string name;
    int countsides;
    int a,b,c;
    int angle1,angle2,angle3;

public:
    shape() : countsides(0), name("null"), a(0), b(0), c(0){};
    std::string getname(){
        return this->name;
    }
    int countSides(){
        return this->countsides;
    }
    int ReturnA(){
        return a;

    };
    int Returnb(){
        return b;

    };
    int Returnc(){
        return c;

    };
    int Returnangle1(){
        return angle1;

    };
    int Returnangle2(){
        return angle2;

    };
    int Returnangle3(){
        return angle3;

    };

};
class triangle : public shape {
public:
triangle(int a,int b,int c,int A,int B,int C)  {
    if(a >0 && b > 0 && c > 0 && A> 0 && B > 0 && C > 0){
        this->countsides = 3;
        this->name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->angle1 = A;
        this->angle2 = B;
        this->angle3 = C;
    }else { std::cout << "Ошибка ввода\n";
    exit(1);
    };

}



};
class righttriangle : public shape {
public:
righttriangle(int a,int b,int c,int A,int B)  {
    this->countsides = 3;
    this->name = "Прямоугольный треугольник";
this->a = a;
this->b= b;
this->c = c;
this->angle1 = A;
this->angle2 = B;
this->angle3 = 90;

}
};
class isoscelestriangle : public shape {
public:
    isoscelestriangle(int a, int b, int A, int B){
        this->countsides = 3;
    this->name = "Равнобедренный треугольник";
    this->a = a;
    this->c = a;
    this->angle1 = A;
    this->angle3 = A;
    this->b =b;
    this->angle2 =B;
    }
};
class equilateraltriangle: public shape{
public:
    equilateraltriangle(int a){
        this->countsides = 3;
        this->name ="Равносторонний треугольник";
        this->a = a;
        this->b = a;
        this->c = a;
        this->angle2 = 60;
        this->angle3 = 60;
        this->angle1 = 60;
    }
};

class shape1{
protected:
    std::string name;
    int countsides;
    int a,b,c,d;
    int angle1,angle2,angle3,angle4;

public:
    shape1() : countsides(0), name("null"), a(0), b(0), c(0),d(0),angle1(0),angle2(0),angle3(0),angle4(0){};
    std::string getname(){
        return this->name;
    }
    int countSides(){
        return this->countsides;
    }
    int ReturnA(){
        return a;

    };
    int Returnb(){
        return b;

    };
    int Returnc(){
        return c;

    };
    int Returnd(){
        return d;

    };
    int Returnangle1(){
        return angle1;

    };
    int Returnangle2(){
        return angle2;

    };
    int Returnangle3(){
        return angle3;

    };
    int Returnangle4(){
        return angle4;

    };
};
class rectangle: public  shape1{
public:
    rectangle(int a, int b){
        this->name = "Прямоугольник";
        this->countsides =4;
        this->a = a;
        this->c = a;
        this->b = b;
        this->d = b;
        this->angle1 = 90;
        this->angle2 = 90;
        this->angle3 = 90;
        this->angle4 = 90;
    }

};
class rect: public  shape1{
public:
    rect(int num) {
        this->name = "Квадрат";
        this->countsides =4;
        this->b = num;
        this->a = num;
        this->c = num;
        this->d = num;
        this->angle4 = 90;
        this->angle1 = 90;
        this->angle2 = 90;
        this->angle3 = 90;
    }



};
class parallelogram: public shape1{
public:
   parallelogram(int a,int b, int A, int D){
       this->countsides = 4;
       this->a = a;
       this->c = a;
       this->b = b;
       this->d = b;
       this->angle1 = A;
       this->angle3 = A;
       this->angle2 = D;
       this->angle4 = D;
       this->name = "Параллелограмм";

   }
};
class rhombus: public shape1 {
public:
    rhombus(int a, int A, int B)
    {
        this->countsides = 4;
        this->name = "Ромб";
        this->a = a;
        this->c = a;
        this->b = a;
        this->d = a;
        this->angle1 = A;
        this->angle3 = A;
        this->angle2 = B;
        this->angle4 = B;
    }
};
void print_info(shape * ptr){
    std::cout  <<ptr->getname() << "\n";
    std::cout << "Количество сторон: "<<ptr->countSides() << "\n";
    std::cout << "Стороны: " << "a = " << ptr->ReturnA()
              << " b = " << ptr->Returnb() << " c = " << ptr->Returnc() << std::endl;
    std::cout <<"Углы: " << "A = " << ptr->Returnangle1() << " B = " << ptr->Returnangle2() << " C = " << ptr->Returnangle3() << std::endl;



}
void print_info(shape1 * ptr){
    std::cout  <<ptr->getname() << "\n";
    std::cout << "Количество сторон: "<<ptr->countSides() << "\n";
    std::cout << "Стороны: " << "a = " << ptr->ReturnA()
              << " b = " << ptr->Returnb() << " c = " << ptr->Returnc() << " d = " << ptr->Returnd() << std::endl;
    std::cout <<"Углы: " << "A = " << ptr->Returnangle1() << " B = " << ptr->Returnangle2() << " C = " << ptr->Returnangle3() << " D = " << ptr->Returnangle4()<< std::endl;



}
void treug(){
    shape* a = new shape();
    print_info(a);
    std::cout << std::endl;
    triangle* b= new triangle(10,20,30,50,60,70);
    print_info(b);
    std::cout << std::endl;
    righttriangle* c= new righttriangle(10,20,30,50,60);
    print_info(c);
    std::cout << std::endl;
    isoscelestriangle* d= new isoscelestriangle(10,15,40,50);
    print_info(d);
    std::cout << std::endl;
    equilateraltriangle* e= new  equilateraltriangle(10);
    print_info(e);
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
}

void qwadr(){
shape1 * a = new shape1;
    print_info(a);
    std::cout << std::endl;
    rectangle * b = new rectangle(30,20);
    print_info(b);
    std::cout << std::endl;
    rect * c = new rect(20);
    print_info(c);
    std::cout << std::endl;
    parallelogram * d = new parallelogram(10,30,15,40);
    print_info(d);
    std::cout << std::endl;
    rhombus * e = new rhombus(10,23,40);
    print_info(e);
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
}

int main() {
    treug();
    qwadr();
    return 0;
}
