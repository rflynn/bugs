<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'Jurassic Park Dinosaur Count',
  'when' => '1990',
  'industry' => 'entertainment',
  'summary' => "Major facility relies on a single disgruntled engineer who implements animal population count as Pop >= N instead of Pop == N",
  'correction' => array(
    '== instead of >=' => null,
  ),
  'causes' => array(
    'inadequate disaster recovery' => null,
    'inadequate review' => null,
    'inadequate documentation' => null,
    'unexpected results undetected' => null,
    'corner case' => null,
    'edge case' => null,
    'logic error' => null,
  ),
  'result' => array(
    'population breeds unchecked' => 1,
    'facility a total loss' => 1,
  ),
  'cost' => array(
    'deaths' => count(array('Nedry', 'Regis', 'Muldoon', 'Wu', 'Arnold', 'Hammond')),
    'injuries' => count(array('Malcolm')),
    'dollars' => 100e6,
    'fiction' => true,
  ),
  'mitigating' => array(
    'fictional' => 1,
    'entertaining' => 1,
    'involves dinosaurs' => 1,
  ),
  'refs' => array(
    array(
      'title'     => 'Tales From the Crucible-Secrets of a High-Tech Expert',
      'author'    => 'Warren S. Reid',
      'url'       => 'http://www5.in.tum.de/~huckle/trenches.htm',
    ),
    array(
      'title'     => 'Jurassic Park (novel)',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Jurassic_Park_(novel)#Plot_summary',
    ),
  ),
);

