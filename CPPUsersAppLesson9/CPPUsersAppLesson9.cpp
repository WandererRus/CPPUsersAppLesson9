// CPPUsersAppLesson9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Animal
{
    std::string Name = "Barbos";    
    std::string Class = "dog";
    std::string PseudoName = "Crusher";

    Animal(std::string name, std::string classname, std::string pseudo)
    {
        Name = name;
        Class = classname;
        PseudoName = pseudo;
    }
    std::string PetSay()
    {
        if (Class == "dog")
            return "Woof";
        if (Class == "cat")
            return "Meaw";
        if (Class == "frog")
            return "Cra-a-a-a-ak";
    }

    friend std::ostream& operator<<(std::ostream& out, Animal animal)
    {
        out << "This pet have name is " << animal.Name << " with alternative name " << animal.PseudoName << "\n";
        out << "This pet is " << animal.Class << " and this pet say " << animal.PetSay();
        return out;
    }
};

int main()
{
    Animal animal{ "Boris","dog","britva" };
    Animal animal2{ "Matroskin","cat","VDV" };
    Animal animal3{ "AxelF","frog","DJ" };

    std::cout << animal << "\n";
    std::cout << animal2 << "\n";
    std::cout << animal3 << "\n";
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
