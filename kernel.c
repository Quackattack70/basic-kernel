#include "include/screen.h"

kmain(){
    clear();
    print("Basic Kernel", 0x09, 1);
    print("~~~~~~~~~~~~~~~~", 0x0d, 0);
    wait();
    nextline();
    print("created by Bhavin Patel", 0x02, 1);
}
