#include <iostream>
#include <vector>

int linear_search(std::vector<int> input,int number)
{
    int index;
    for (index = 0; index < input.size(); index++)
    {
        if (input[index] == number)
        {
            return index;
        }
    }
    return -1;
}


int main()
{
    std::vector<int> data{1, 4, 5, 0, -1, 17};

    int cautare = 29;
    std::cout << "Elementul " << cautare << " se afla la indexul " << linear_search(data, cautare);

}
