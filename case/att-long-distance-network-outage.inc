<?php
# ex: set ts=2 et:

$Bugs['att-long-distance-network-outage'] = array(
  'title' => 'AT&T Long-Distance Network Outage',
  'when' => 'Jan 15, 1990',
  'industry' => 'communication',
  'result' => array(
    '9-hour nationwide network outage' => null,
    '70 million calls lost' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 75e6 
  ),
  'causes' => array(
    'inadequate testing' => null,
    'inadequate disaster recovery plan' => null,
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
  ),
);

