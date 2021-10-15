#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init my_init(void);
static void __exit my_exit(void);

module_init(my_init);
module_exit(my_exit);

static int __init my_init(void)
    {
    printk(KERN_INFO "my module succefully loaded!\n");
    return 0;
    }

static void __exit my_exit(void)
    {
    printk(KERN_INFO "my module succefully unloaded!\n");
    }

MODULE_LICENSE("GPL");
MODULE_AUTHOR("neo");
MODULE_DESCRIPTION("my");
MODULE_VERSION("0.01");

