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

int binarySearch(std::vector<int> input, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        //verificam daca elemntul cautat se afla la mijloc
        if (input[mid] == x)
        {
            return mid;
        }
        //daca elementul cautat este mai mic
        // chemam recursiv functia cu idexi de la stanga pana la mijloc (paretea stanga)
        if (input[mid] > x)
            return binarySearch(input, l, mid - 1, x);

        //in caz contrar se afla in partea dreapta ( mai mare)
        else
        {
            return binarySearch(input, mid + 1, r, x);
        }
    }
    //daca am ajuns pana aici inseamna ca elementul nu exista
    return -1;
}



int main()
{
    std::vector<int> data{1, 2, 5, 44, 57, 99};

    int cautare = 99;
    //std::cout << "Elementul " << cautare << " se afla la indexul " << linear_search(data, cautare);
    std::cout << "Elementul " << cautare << " se afla la indexul " << binarySearch(data, 0, data.size(), cautare);

}
