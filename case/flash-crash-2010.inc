<?php
# ex: set ts=2 et:

$Bugs['flash-crash-2010'] = array(
  'title' => 'Stock Market Flash Crash',
  'summary' => 'Unusually large single sale triggered a flurry of selling via  automated high-frequency trading software causing the Dow Jones Industrial Average plunged 900 points (~9%) in 5 minutes leading to the largest one-day point decline in history.',
  'when' => 'May 6, 2010',
  'industry' => 'financial',
  'causes' => array(
    'overreliance on automation' => 1,
    'edge case' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 1e12,
  ),
  'result' => array(
    'largest one-day point decline in history' => null,
    'trading curb' => null,
  ),
  'mitigating' => array(
    'losses recovered within 20 minutes' => 1,
  ),
  'refs' => array(
    array(
      'title'     => '2010 Flash Crash',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/2010_Flash_Crash',
    ),
  ),
);

