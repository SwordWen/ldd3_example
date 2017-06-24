#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/tty.h>

void tty_write_message1(struct ttyp_struct *, char *);

static int my_init(void)
{
  char *msg="Hello tty!";
  printk("Hello, from the kenerl...\n");
  printk("parent pid = %d(%s)\n", current->parent->pid, current->parent->comm);
  printk("current pid=%d(%s)\n", current->pid, current->comm);
}
