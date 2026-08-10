#include <iostream>
using namespace std;

int c = 1;
int f(){    //ERROR
    return c;
}

int main(){
    f() = 0;
    cout<<c;
    return 0;
}


#include <iostream>
using namespace std;

int c = 1;
int &f(){            //NO ERROR
    return c;
}

int main(){
    f() = 0;
    cout<<c;
    return 0;
}

#include <iostream>
using namespace std;

int c = 1;
int &f(){            //NO ERROR
    return c;
}

int main(){
    f() = c++;
    cout<<c;
    return 0;
}