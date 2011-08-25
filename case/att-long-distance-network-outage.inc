<?php
# ex: set ts=2 et:

$Bugs['att-long-distance-network-outage'] = array(
  'title' => 'AT&T Long-Distance Network Outage',
  'when' => 'Jan 15, 1990',
  'industry' => 'communication',
  'summary' => "One of AT&T's #4ESS toll switching systems in New York City experienced an intermittent failure that caused a major service outage on the AT&T U.S. National Telephone Network.",
  'result' => array(
    '9-hour nationwide network outage' => 1,
    '70 million calls lost' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 75e6 
  ),
  'causes' => array(
    'inadequate testing' => null,
    'inadequate disaster recovery' => null,
    'networked ripple effect' => 2,
  ),
  'mitigating' => array(
  ),
  'refs' => array(
    array(
      'title'     => 'Ghost in The Machine',
      'author'    => 'PHILIP ELMER-DEWITT;THOMAS MCCARROLL/NEW YORK AND PAUL A. WITTEMAN/SAN FRANCISCO',
      'url'       => 'http://www.time.com/time/magazine/article/0,9171,969266,00.html',
    ),
    array(
      'title'     => 'The Crash of the AT&T Network in 1990',
      'author'    => 'Peter G. Neumann',
      'url'       => 'http://www.phworld.org/history/attcrash.htm',
    ),
    array(
      'title'     => 'Application Note -- AT&T Phone Crash',
      'url'       => 'http://www5.in.tum.de/~huckle/attcrash1.htm',
    ),
  ),
);

