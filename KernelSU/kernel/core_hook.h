#ifndef __KSU_H_KSU_CORE
#define __KSU_H_KSU_CORE

#include <linux/init.h>
#include <linux/cred.h>
#include <linux/dcache.h>
#include <linux/fs.h>

void __init ksu_core_init(void);
void ksu_core_exit(void);

#ifdef CONFIG_KSU
int ksu_legacy_task_prctl(int option, unsigned long arg2,
                          unsigned long arg3, unsigned long arg4,
                          unsigned long arg5);
int ksu_legacy_task_fix_setuid(struct cred *new, const struct cred *old,
                               int flags);
int ksu_legacy_inode_rename(struct inode *old_inode,
                            struct dentry *old_dentry,
                            struct inode *new_inode,
                            struct dentry *new_dentry);
#endif

#endif
