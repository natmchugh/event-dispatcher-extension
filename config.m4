PHP_ARG_ENABLE(eventdispatcher, whether to enable eventdispatcher support,
[  --enable-eventdispatcher          Enable eventdispatcher support])
r
if test "$PHP_EVENTDISPATCHER" != "no"; then
  PHP_NEW_EXTENSION(eventdispatcher, eventdispatcher.c , $ext_shared)
fi