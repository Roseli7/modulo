#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init my_init(void)
{
    printk(KERN_INFO "my module succefully loaded!\n");
    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_INFO "my module succefully unloaded!\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("neo");
MODULE_DESCRIPTION("LKM");
MODULE_VERSION("0.01");



