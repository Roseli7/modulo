#include "headers.h"

static int __init my_init(void)
{
    printk(KERN_INFO "module succefully loaded!\n");
    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_INFO "module succefully unloaded!\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("neo");
MODULE_DESCRIPTION("LKM");
MODULE_VERSION("0.01");


