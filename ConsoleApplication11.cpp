// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
class Counter
{

public:
    void inc() { this->num++; }
    void dec() {this->num--;  }
    int vozvrat() { return (this->num); }
    Counter ()
    {
        this->num = 1;
    };
    Counter(int num)
    {
        this->num = num;
    };
private:
    int num;
};
#include <iostream>

int main()
{
    char simvol;
    std::string str1;
    bool vihod = true;
    setlocale(LC_ALL, "Russian");
    Counter* ptr= new Counter();;
    do
    {
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:";
    std::cin >> str1;
    //std::cout << "Вы ввели число:" << str1<<std::endl;;
    if (str1 == "yes")
    {
        int num;
        std::cout << "Введите начальное значение счётчика:";
        std::cin >> num;
        delete ptr;
        ptr = new Counter(num);
        vihod =false;
    }
    else
    if (str1 =="no")
    {
        ptr = new Counter();
        vihod =false;

    }
    else
    {
        std::cout << "Неправильный ввод. Повторите:";

    }

   


    } while (vihod);


    vihod = true;

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        
        std::cin>>str1;
        if (str1 == "+")
        {
            ptr->inc();

        }
        else 
            if (str1 == "-")
            {
                ptr->dec();

            }
            else
                if (str1 == "=")
                {
                    
                    std::cout<<"Счетчик равен =" << ptr->vozvrat();
                    std::cout << std::endl;

                }
                else 
                    if (str1 == "x")
                    {
                        vihod=false;

                    }
                    else  std::cout << "ВЫ ввели неизвестную команду:";
        

    } while (vihod);
    delete ptr;
    std::cout << "До свидания!";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
