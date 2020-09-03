/*
* start.c - Illustration of multi filed modules
*/
#include <linux/kernel.h>
#include <linux/module.h>
/* We're doing kernel work */
/* Specifically, a module */

int init_module(void)
{
	pr_info("Hello, world - this is the kernel speaking\n");
	return 0;
}
