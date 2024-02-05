#include <iostream>

int main (int argc, char * argv[])
{
    int num_elements;
    std::cin >> num_elements;
    int inX[num_elements];
    int inY[num_elements];

    int max_distance = -1;
    int distance;

    for (int i = 0; i < num_elements; i++)
    {
        std::cin >> inX[i];
    }
    for (int i = 0; i < num_elements; i++)
    {
        std::cin >> inY[i];
        for (int n = 0; n < i; n++)
        {
            distance = (inX[n] - inX[i]) * (inX[n] - inX[i]) + (inY[n] - inY[i]) * (inY[n] - inY[i]);
            if (distance > max_distance) max_distance = distance;
        }
    }
    
    std::cout << max_distance << std::endl;

}