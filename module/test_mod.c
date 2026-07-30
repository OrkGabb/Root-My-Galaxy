#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("OrkGabb");
MODULE_DESCRIPTION("GKI Test Module for M54");
MODULE_VERSION("1.0");

static int __init test_init(void) {
    pr_info("[+] OrkGabb GKI Module loaded successfully!\n");
    return 0;
}

static void __exit test_exit(void) {
    pr_info("[-] OrkGabb GKI Module unloaded.\n");
}

module_init(test_init);
module_exit(test_exit);
