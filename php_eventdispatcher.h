#ifndef PHP_EVENTDISPATCHER_H
#define PHP_EVENTDISPATCHER_H

#include "php.h"

extern zend_module_entry eventdispatcher_module_entry;
#define phpext_eventdispatcher_ptr &eventdispatcher_module_entry

#ifdef PHP_WIN32
#define PHP_EVENTDISPATCHER_API __declspec(dllexport)
#else
#define PHP_EVENTDISPATCHER_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_METHOD(EventDispatcher, __construct);
PHP_METHOD(EventDispatcher, addListener);
PHP_METHOD(EventDispatcher, dispatch);

#endif