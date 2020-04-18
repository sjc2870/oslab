#include <unistd.h>
#include <linux/kernel.h>

int sys_whoami(){
    printk("You are the best man in the world!\n");
    return 0;
}
