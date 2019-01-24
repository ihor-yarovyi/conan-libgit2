#include <iostream>
#include "git2.h"

int main()
{
    std::cout << "******* Testing libgit2 library *******" << std::endl;

    int err = git_libgit2_init();
    if (err >= 0)
    {
        err = git_libgit2_shutdown();
    }

    if (err >= 0)
    {
        std::cout << "Ok";
    }
    else
    {
        std::cout  << "error: " << err;
    }

    std::cout << std::endl;
    std::cout << "**************************************" << std::endl;

    return 0;
}
