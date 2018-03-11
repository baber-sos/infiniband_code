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
	{ 0x3fc9886d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa1c70ef5, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0xa82963ff, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x38375b62, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x6f138315, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x4b8c995d, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcc88e0bc, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xf65b2d94, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x23b5d3dd, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcef8de2e, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0xc37b0175, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0x133a4e7b, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xa7ca94c3, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x675ed3d3, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0xa58b06be, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x3255ce12, __VMLINUX_SYMBOL_STR(ib_query_gid) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x5a7d2060, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x818d8b27, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x441b8966, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0xfeba64bd, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "304D222FA7DEA024E652076");
