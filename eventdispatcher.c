
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_eventdispatcher.h"

zend_class_entry *php_eventdispatcher_fc_entry;

#define PHP_EVENTDISPATCHER_FC_NAME "EventDispatcher"
const zend_function_entry eventdispatcher_functions[] = {
    PHP_ME(EventDispatcher, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(EventDispatcher, addListener, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(EventDispatcher, doDispatch, NULL, ZEND_ACC_PUBLIC)
    /* End of functions */
    { NULL, NULL, NULL }
};


#ifdef COMPILE_DL_EVENTDISPATCHER
ZEND_GET_MODULE(eventdispatcher)
#endif

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(eventdispatcher)
{
     zend_class_entry ce;
      INIT_CLASS_ENTRY(ce, PHP_EVENTDISPATCHER_FC_NAME,
                       eventdispatcher_functions);
      php_eventdispatcher_fc_entry =
            zend_register_internal_class(&ce TSRMLS_CC);
    return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(eventdispatcher)
{
    return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(eventdispatcher)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "EventDispatcher functions", "enabled");
    php_info_print_table_end();
}
/* }}} */

/* {{{ eventdispatcher_module_entry
 */
zend_module_entry eventdispatcher_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    "eventdispatcher",
    eventdispatcher_functions,
    PHP_MINIT(eventdispatcher),
    NULL,
    NULL,
    NULL,
    PHP_MINFO(eventdispatcher),
#if ZEND_MODULE_API_NO >= 20010901
    "0.1", /* Replace with version number for your extension */
#endif
    STANDARD_MODULE_PROPERTIES
};
/* }}} */


PHP_METHOD(EventDispatcher, __construct)
{
}

PHP_METHOD(EventDispatcher, addListener)
{
}

PHP_METHOD(EventDispatcher, doDispatch)
{
}