<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'Ariane 5 Flight 501',
  'when' => 'June 4, 1996',
  'industry' => 'aerospace',
  'result' => 'rocket/payload loss',
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 370e6
  ),
  'causes' => array(
    'improper conversion' => 1,
    'arithmetic overflow' => 1,
    'safety checks disabled' => null,
    'overreliance on automation' => 3,
  ),
  'refs' => array(
    array(
      'title'     => 'Ariane 5 Flight 501',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Ariane_5_Flight_501',
    ),
    array(
      'title'     => 'ARIANE 5',
      'subtitle'  => 'FLIGHT 501 FAILURE',
      'author'    => 'Wikipedia',
      'url'       => 'http://homepages.inf.ed.ac.uk/perdita/Book/ariane5rep.html',
    ),
    array(
      'title'     => 'The Role of Software in Recent Aerospace Accidents',
      'author'    => 'Nancy G. Leveson',
      'url'       => 'http://sunnyday.mit.edu/accidents/issc01.pdf',
    ),
  ),
);

