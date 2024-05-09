
#include <iostream>
#include <string>
class shape {
protected:
    std::string name;
    int countsides;

public:
    shape() : countsides(0), name("null"){};
    virtual void print_info(){
        std::cout<< name;
        std::cout<< countsides;
    }



};
class triangle : public shape {
protected:
    int a,b,c;
    int angle1,angle2,angle3;
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
        }

    }std::string getname(){
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

    }
    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout <<std::endl;
    }




};
class righttriangle : public shape {
protected:
    int a,b,c;
    int angle1,angle2,angle3;
public:
    righttriangle(int a,int b,int c,int A,int B)  {
        if(a >0 && b > 0 && c > 0 && A> 0 && B > 0 ){
            this->countsides = 3;
            this->name = "Прямоугольный треугольник";
            this->a = a;
            this->b= b;
            this->c = c;
            this->angle1 = A;
            this->angle2 = B;
            this->angle3 = 90;}
        else{
            std::cout<< "Ошибка ввода\n";
            exit(1);
        }



    }
    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout <<std::endl;
    }

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

    }
};
class isoscelestriangle : public shape {
protected:
    int a,b,c;
    int angle1,angle2,angle3;
public:

    isoscelestriangle(int a, int b, int A, int B){
        if (a >0 && b > 0  && A> 0 && B > 0){
            this->countsides = 3;
            this->name = "Равнобедренный треугольник";
            this->a = a;
            this->c = a;
            this->angle1 = A;
            this->angle3 = A;
            this->b =b;
            this->angle2 =B;
        } else{
            std::cout<<"Ошибка ввода\n";
            exit(1);
        }}
    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout <<std::endl;
    }

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


    }
    int Returnangle1(){
        return angle1;

    };
    int Returnangle2(){
        return angle2;

    };
    int Returnangle3(){
        return angle3;

    }

};
class equilateraltriangle: public shape{
protected:
    int a, b, c;
    int angle1,angle2,angle3;
public:
    equilateraltriangle(int a){
        if(a >0 ){
            this->countsides = 3;
            this->name ="Равносторонний треугольник";
            this->a = a;
            this->b = a;
            this->c = a;
            this->angle2 = 60;
            this->angle3 = 60;
            this->angle1 = 60;
        } else
        {std::cout<< "Ошибка ввода\n";
            exit(1);

        }}
    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout <<std::endl;
    }

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

    }

};


class rectangle: public  shape{
protected:
    int a,b,c,d;
    int angle1,angle2,angle3,angle4;
public:
    rectangle(int a, int b){
        if(a>0&& b>0){
            this->name = "Прямоугольник";
            this->countsides =4;
            this->a = a;
            this->c = a;
            this->b = b;
            this->d = b;
            this->angle1 = 90;
            this->angle2 = 90;
            this->angle3 = 90;
            this->angle4 = 90;}
        else{std::cout<< "Ошибка ввода\n";
            exit(1);
        }
    }
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

    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = "<< this->Returnd()<< std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3()<< " D = "<< this->Returnangle4() << std::endl;
        std::cout <<std::endl;
    }
};
class rect: public  shape{
protected:
    int angle1,angle2,angle3,angle4;
    int a,b,c,d;
public:
    rect(int num) {
        if(num>0){
            this->name = "Квадрат";
            this->countsides =4;
            this->b = num;
            this->a = num;
            this->c = num;
            this->d = num;
            this->angle4 = 90;
            this->angle1 = 90;
            this->angle2 = 90;
            this->angle3 = 90;} else{
            std::cout<< "Ошибка ввода\n";
            exit(1);
        }
    }
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
    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = "<< this->Returnd()<< std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3()<< " D = "<< this->Returnangle4() << std::endl;
        std::cout <<std::endl;
    }

};
class parallelogram: public shape{
protected:
    int a,b,c,d;
    int angle1,angle2,angle3,angle4;
public:
    parallelogram(int a,int b, int A, int D){
        if(a>0&& b>0&&A>0&&D>0){
            this->countsides = 4;
            this->a = a;
            this->c = a;
            this->b = b;
            this->d = b;
            this->angle1 = A;
            this->angle3 = A;
            this->angle2 = D;
            this->angle4 = D;
            this->name = "Параллелограмм";}
        else{
            std::cout<< "Ошибка ввода\n";
            exit(1);
        }

    }std::string getname(){
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
    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = "<< this->Returnd()<< std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3()<< " D = "<< this->Returnangle4() << std::endl;
        std::cout <<std::endl;
    }

};
class rhombus: public shape {
protected:
    int a,b,c,d;
    int angle1,angle2,angle3,angle4;
public:
    rhombus(int a, int A, int B)
    { if (a>0&& A>0&& B>0){
            this->countsides = 4;
            this->name = "Ромб";
            this->a = a;
            this->c = a;
            this->b = a;
            this->d = a;
            this->angle1 = A;
            this->angle3 = A;
            this->angle2 = B;
            this->angle4 = B;} else{
            std::cout<< "Ошибка ввода\n";
            exit(1);
        }
    }
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
    void print_info() override{
        std::cout  <<this->getname() << "\n";
        std::cout << "Количество сторон: "<<this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
                  << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = "<< this->Returnd()<< std::endl;
        std::cout <<"Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3()<< " D = "<< this->Returnangle4() << std::endl;
        std::cout <<std::endl;
    }
};

void treug(){


    triangle* b= new triangle(10,20,30,50,60,70);
    b->print_info();

    righttriangle* c= new righttriangle(10,20,30,50,60);

    c->print_info();
    isoscelestriangle* d= new isoscelestriangle(10,15,40,50);
    d->print_info();

    equilateraltriangle* e= new  equilateraltriangle(10);
    e->print_info();

    delete b;
    delete c;
    delete d;
    delete e;
}

void qwadr(){


    rectangle * b = new rectangle(30,20);
    b->print_info();

    rect * c = new rect(20);
    c->print_info();

    parallelogram * d = new parallelogram(10,30,15,40);
    d->print_info();

    rhombus * e = new rhombus(10,23,40);
    e->print_info();

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