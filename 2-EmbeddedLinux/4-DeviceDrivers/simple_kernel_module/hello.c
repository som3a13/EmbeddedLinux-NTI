#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


int xlol=10;
EXPORT_SYMBOL(xlol); //can be used by other modules
static int __init helloworld_init(void)
{
    printk(KERN_INFO "Hello World\n");
    return 0;
}

static void __exit helloworld_exit(void)
{
    printk(KERN_INFO "Goodbye World\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mohamed Ismail");
MODULE_DESCRIPTION("A simple Hello World kernel module");
MODULE_VERSION("0.1");
