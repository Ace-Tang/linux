#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("thm");
MODULE_DESCRIPTION("test module");
MODULE_VERSION("0.1");

static int __init init_func(void) {
	printk(KERN_INFO, "hello, kernel");
	return 0;
}

static void __exit exit_func(void) {
	printk(KERN_INFO, "bye, kernel");
}

module_init(init_func);
module_exit(exit_func);
