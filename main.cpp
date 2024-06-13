#include <iostream>

// main function.
int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::string patchset = "new Patchset";
    printf( "CW main(): %s\n", patchset.data() );
    fflush( stdout );

    return 0;
}
