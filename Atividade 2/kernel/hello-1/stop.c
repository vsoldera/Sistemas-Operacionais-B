/*
* stop.c - Illustration of multi filed modules
*/
#include <linux/kernel.h>
#include <linux/module.h>
/* We're doing kernel work */
/* Specifically, a module */
void cleanup_module()
{
	pr_info("Short is the life of a kernel module\n");
}
