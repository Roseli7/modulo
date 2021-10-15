#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

module_init(rootkit_init);
module_exit(rootkit_exit);

static int __init rootkit_init(void)
{
    printk(KERN_INFO "+++ Rootkit module succefully loaded !\n");
}
static void __exit rootkit_exit(void)
{
    printk(KERN_INFO "+++ Rootkit module succefully unloaded !\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("neo");
MODULE_DESCRIPTION("LKM rootkit");
MODULE_VERSION("ALL");

