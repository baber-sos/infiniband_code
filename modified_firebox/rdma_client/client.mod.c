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
	{ 0x5fe29fef, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x59066121, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x60be858d, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0xd3250950, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x7b21abb2, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0xbe5d8175, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x4a70cb78, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xa7b1870f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x78e8be6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2f473ac1, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0xccda74ec, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0xc724c501, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xb0c44c94, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x91e9d796, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0xb6ca3e4b, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0xd63252c8, __VMLINUX_SYMBOL_STR(ib_query_gid) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x50c45a48, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x2cea28b9, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x6290a049, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0xb1006b5c, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "D63110C1A6C0F3FB50D83CC");
