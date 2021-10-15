#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

module_init(my_init);
module_exit(my_exit);

static int __init my_init(void)
{
    printk(KERN_INFO "+++ module succefully loaded!\n");
    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_INFO "+++ module succefully unloaded!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("X-Shar");
MODULE_VERSION("demo");



