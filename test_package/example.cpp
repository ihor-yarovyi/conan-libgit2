#include <iostream>
#include "git2.h"

using namespace std;

int main(int argc, char **argv){

	cout << "******* Testing libgit2 library *******" << endl;

	int err = git_libgit2_init();
	if(err >= 0){
		err = git_libgit2_shutdown();
	}

	if(err >= 0){
		cout << "Ok";
	}
	else{
		cout  << "error: " << err;
	}

	cout << endl;
	cout << "**************************************" << endl;

    return 0;
}
