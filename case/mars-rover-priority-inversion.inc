<?php
# ex: set ts=2 et:

$Bugs['mars-pathfinder-priority-inversion'] = array(
  'title' => 'Mars Pathfinder Priority Inversion',
  'when' => '1997',
  'industry' => 'aerospace',
  'result' => array(
    'hard error' => 1,
    'reboot cycle' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
    'delay-days' => 1,
  ),
  'causes' => array(
    'higher data rates than anticipated' => 1,
    'priority inversion' => 1,
    'inadequate testing' => 1,
    'error seen in testing' => 1,
    'deadline pressure' => 1,
  ),
  'mitigating' => array(
    'built-in logging and remote update features allowed diagnosis and correction ' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'What Really Happened On Mars?',
      'author'    => 'Glenn E Reeves',
      'url'       => 'http://research.microsoft.com/en-us/um/people/mbj/Mars_Pathfinder/Authoritative_Account.html',
    ),
    array(
      'title'     => 'Mars Pathfinder',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Mars_Pathfinder',
    ),
  ),
);

