#ifndef OFFSETS_H
#define OFFSETS_H

#define KERNEL_BASE                          0xffffffc008000000

#define CALL_USERMODEHELPER_EXEC_WORK_OFF    0x000d4168
#define NOOP_LLSEEK_OFF                      0x0039cfd8
#define COPY_SPLICE_READ_OFF                 0x003eab0c
#define CONFIGFS_READ_ITER_OFF               0x0046a684
#define CONFIGFS_BIN_WRITE_ITER_OFF          0x0046abb4
#define ASHMEM_IOCTL_OFF                     0x00d271e0
#define ASHMEM_COMPAT_IOCTL_OFF              0x00d27b18
#define ASHMEM_MMAP_OFF                      0x00d27b70
#define ASHMEM_OPEN_OFF                      0x00d27d90
#define ASHMEM_RELEASE_OFF                   0x00d27e18
#define ASHMEM_SHOW_FDINFO_OFF               0x00d27f38
#define ANON_PIPE_BUF_OPS_OFF                0x011f9890
#define ASHMEM_FOPS_OFF                      0x013b6548
#define SLIDE_NFULNL_LOGGER_NAME_OFF         0x016b45c0
#define KMALLOC_CACHES_OFF                   0x0177cb38
#define SYSTEM_UNBOUND_WQ_OFF                0x0229ae60
#define LOGGERS_OFF                          0x022a2928
#define SLIDE_NFULNL_LOGGER_OBJECT_OFF       0x022a29e0
#define INIT_TASK_OFF                        0x022af700
#define ASHMEM_MISC_FOPS_OFF                 0x00a4337f0
#define ROOT_TASK_GROUP_OFF                  0x024c3d40
#define SELINUX_ENFORCING_OFF                0x025982a0
#define SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_OFF 0x023ede30
#define SLIDE_SYSCTL_BOOTID_OFF              0x0267af58

#endif
