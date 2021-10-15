#include "headers.h"

static int __init rootkit_init(void);
static void __exit rootkit_exit(void);

module_init(rootkit_init);
module_exit(rootkit_exit);

static int __init rootkit_init(void)
{
    printk(KERN_INFO "+++ Rootkit module proc_hide succefully loaded !\n");
    return 0;
}

static void __exit rootkit_exit(void)
{
    printk(KERN_INFO "+++ Rootkit module proc_hide succefully loaded !\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("X-Shar");
MODULE_VERSION("demo");
