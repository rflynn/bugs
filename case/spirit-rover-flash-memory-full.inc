<?php
# ex: set ts=2 et:

$Bugs['spirit-rover-flash-memory-full'] = array(
  'title' => 'Spirit Mars Rover Flash Drive Full',
  'when' => 'Jan 21, 2004',
  'industry' => 'aerospace',
  'causes' => array(
    'file system full' => 1,
  ),
  'result' => array(
    'system entered fault mode' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
    'delay-days' => 12,
  ),
  'mitigating' => array(
    'interactive debugging allowed diagnosis and correction' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'Spirit Rover',
      'subtitle'  => 'Sol 18 (January 21, 2004) flash memory management anomaly',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Spirit_rover#Sol_18_.28January_21.2C_2004.29_flash_memory_management_anomaly',
    ),
  ),
);

