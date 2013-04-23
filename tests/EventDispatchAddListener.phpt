--TEST--
Test we can add a listener
--INI--
--FILE--
<?php

$dispatcher = new EventDispatcher();
$dispatcher->addListener('ping.action', function (Event $event) {
    echo 'ping';
});
echo $dispatcher->dispatch('ping.action');
--EXPECT--
ping