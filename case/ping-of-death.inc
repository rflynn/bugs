<?php
# ex: set ts=2 et:

$Bugs['ping-of-death'] = array(
  'title' => 'Ping of Death',
  'when' => '1995-1996',
  'industry' => 'software',
  'result' => 'millions of remote vulnerabilities',
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null
  ),
  'causes' => array(
    'incomplete implementation of complex standard' => 1,
    'buffer overflow' => 1,
    'non-isolated memory' => 1,
    'inadequate testing' => 1,
  ),
  'mitigating' => array(
    'firewalls offer protection' => 1,
  ),
  'refs' => array(
    array(
      'title'     => 'Ping of Death',
      'subtitle'  => '',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Ping_of_death',
    ),
  ),
);

