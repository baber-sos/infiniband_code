#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x21c14206, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x705b9758, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x944b719d, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x62cca26b, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x9b6ffa4b, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0xad83d6fb, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd5e91c1, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xa483c1ac, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1c2af61d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x78688170, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0x74b21d15, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0x19a3aa5e, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xd1ef2ee8, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x830e0481, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x605c87cd, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0xaa7e06cb, __VMLINUX_SYMBOL_STR(ib_query_gid) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x82c5fa0a, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xd08affa4, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x52a4c672, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0x4fa43819, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "D63110C1A6C0F3FB50D83CC");
