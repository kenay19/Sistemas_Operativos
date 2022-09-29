#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(void) {
	pid_t childpid;
	childpid = fork();
	
	for (int i = 0; i <25; i++) {
		cout << "This is process: " << getpid() << endl;
		
		sleep(2);
	}
	return 0;
}
