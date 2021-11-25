
#include <iostream>

int main()
{

    std::cout << "Hello World!\n";
    std::cout << "1 Task\n";
    std::cout << "'N' seconds passed from the begining of the day.\n";
    std::cout << "How many second passed from the begining of last minute?.\n";
    std::cout << "Please enter 'N' ";
    int N;
    std::cin >> N;
    N %= 60;
    std::cout << "The answer is " << N << "\n";

    std::cout << "2 Task\n";
    std::cout << "This year started from January 1-st Mon\n";
    std::cout << "Which day of the week will be the 'K' day of the year?\n";
    std::cout << "Please enter 'K' ";
    int K;
    std::cin >> K;
    K %= 7;
    std::cout << "The answer is ";
    switch (K)
    {
    case(0):
    {std::cout << "Sunday (0)\n";
    break; }
    case(1):
    {std::cout << "Monday (1)\n";
    break; }
    case(2):
    {std::cout << "Tuesday (2)\n";
    break; }
    case(3):
    {std::cout << "Wednesday (3)\n";
    break; }
    case(4):
    {std::cout << "Thursday (4)\n";
    break; }
    case(5):
    {std::cout << "Friday (5)\n";
    break; }
    case(6):
    {std::cout << "Saturday (6)\n";
    break; }
    }

    std::cout << "3 Task\n";
    std::cout << "This year started from January 1-st 'N'\n";
    std::cout << "Which day of the week will be the 'K' day of the year?\n";
    std::cout << "0 - Sunday; 1 - Monday; 2 - Tuesday; 3 - Wednesday;\n      4 - Thursday; 5 - Friday; 6 - Saturday\n";
    std::cout << "Please enter which day of the week was January 1-st ";
    int N1;
    std::cin >> N1;
    std::cout << "Please enter 'K' ";
    int K1;
    std::cin >> K1;
    K1 = K1 + N1 - 1;
    K1 %= 7;
    std::cout << "The answer is ";
    switch (K1)
    {
    case(0):
    {std::cout << "Sunday (0)\n";
    break; }
    case(1):
    {std::cout << "Monday (1)\n";
    break; }
    case(2):
    {std::cout << "Tuesday (2)\n";
    break; }
    case(3):
    {std::cout << "Wednesday (3)\n";
    break; }
    case(4):
    {std::cout << "Thursday (4)\n";
    break; }
    case(5):
    {std::cout << "Friday (5)\n";
    break; }
    case(6):
    {std::cout << "Saturday (6)\n";
    break; }
    }

    std::cout << "4 Task\n";
    std::cout << "There is a rectangle size of AxB\n";
    std::cout << "How many squars size of CxC can it fit and how much space'll left?\n";
    std::cout << "Please enter A = ";
    int a;
    std::cin >> a;
    std::cout << "             B = ";
    int b;
    std::cin >> b;
    std::cout << "             C = ";
    int c;
    std::cin >> c;
    std::cout << "The answer is \n";
    std::cout << trunc(a / c) * trunc(b / c) << " squars\n";
    std::cout << a * b - trunc(a / c) * trunc(b / c) * c * c << " space\n";

    std::cout << "5 Task\n";
    std::cout << "This program will answer which century is during 'L's year\n";
    std::cout << "Please enter the year ";
    int l;
    std::cin >> l;
    std::cout << "The answer is " << trunc((l - 1) / 100) + 1;
}


