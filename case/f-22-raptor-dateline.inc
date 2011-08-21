<?php
# ex: set ts=2 et:

$Bugs['f-22-raptor-dateline'] = array(
  'title' => 'F-22 Raptor International Dateline Crossing',
  'when' => 'Feb 11, 2007',
  'industry' => 'military',
  'result' => array(
    'navigation system crash and reboot' => null,
    'mission aborted' => null,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'lives-at-risk' => 12,
    'dollars' => null,
  ),
  'causes' => array(
    'date/time mishandling' => 1,
  ),
  'mitigating' => array(
    'navigation system crash not critical' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'Lockheed Martin F-22 Raptor',
      'subtitle'  => 'Notable Accidents',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Lockheed_Martin_F-22_Raptor#Notable_accidents',
    ),
    array(
      'title'     => 'International Date Line Bug Caused Fighter Aircraft Systems Crash',
      'author'    => 'Jennifer Moebius',
      'url'       => 'http://blog.utest.com/international-date-line-bug-caused-fighter-aircraft-systems-crash/2010/02/',
    ),
  ),
);

