--TEST--
Test we can instanciate the object
--FILE--
<?php

$dispatcher = new EventDispatcher();

var_dump($dispatcher);
--EXPECT--
object(EventDispatcher)#1 (0) {
}
