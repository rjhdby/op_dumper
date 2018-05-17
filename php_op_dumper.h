/* op_dumper extension for PHP */

#ifndef PHP_OP_DUMPER_H
# define PHP_OP_DUMPER_H

extern zend_module_entry op_dumper_module_entry;
# define phpext_op_dumper_ptr &op_dumper_module_entry

# define PHP_OP_DUMPER_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_OP_DUMPER)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_OP_DUMPER_H */
