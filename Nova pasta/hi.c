#include "headers.h"

static int __init hi_init(void);
static void __exit hi_exit(void);

module_init(hi_init);
module_exit(hi_exit);

static int __init hi_init(void)
{
    printk(KERN_INFO "+++ hi module succefully loaded !\n");
    return 0;
}

static void __exit hi_exit(void)
{
    printk(KERN_INFO "+++ hi module succefully unloaded !\n");
}

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Kernel Module");
MODULE_AUTHOR("neo");
MODULE_VERSION("0.01");

