/* op_dumper extension for PHP */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_op_dumper.h"

zend_function_entry op_dumper_functions[] = {
		ZEND_FE_END
};

PHP_RINIT_FUNCTION(op_dumper)
{
#if defined(ZTS) && defined(COMPILE_DL_OP_DUMPER)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}

zend_module_entry op_dumper_module_entry = {
	STANDARD_MODULE_HEADER,
	"op_dumper",					/* Extension name */
	op_dumper_functions,               			/* zend_function_entry */
	NULL,							/* PHP_MINIT - Module initialization */
	NULL,							/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(op_dumper),			/* PHP_RINIT - Request initialization */
	NULL,							/* PHP_RSHUTDOWN - Request shutdown */
	NULL,			/* PHP_MINFO - Module info */
	PHP_OP_DUMPER_VERSION,		    /* Version */
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_OP_DUMPER
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(op_dumper)
#endif


