#Introduction
linux kernel 4.4.0-57


#kernel tools chain

## Kernel Tools:
1. objdump / readelf

readelf -h hellomod/hellomod.o
readelf -h hellomod/hellomod.ko

2. hexdump

3. nm

4. objcopy

5. ar

## example hellomode

# Process

include/linux/sched.h
struct task_struct {
  ...
}

kernel/fork.c
#ifndef CONFIG_HAVE_COPY_THREAD_TLS
/* For compatibility with architectures that call do_fork directly rather than
 * using the syscall entry points below. */
long do_fork(unsigned long clone_flags,
	      unsigned long stack_start,
	      unsigned long stack_size,
	      int __user *parent_tidptr,
	      int __user *child_tidptr)
{
	return _do_fork(clone_flags, stack_start, stack_size,
			parent_tidptr, child_tidptr, 0);
}
#endif

kernel/sched.c

init/main.c
