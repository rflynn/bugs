<?php
# ex: set ts=2 et:

$Bugs['patriot-missile-clock-drift'] = array(
  'title' => 'Patriot Missile Clock Drift',
  'when' => 'Feb 25, 1991',
  'summary' => "100-hour uptime and time rounding error lead to a 0.36 second drift in the system clock drift, resulted in 600m miscalculation leading to failure to intercept an incoming missile.",
  'industry' => 'military',
  'result' => array(
    'failure to intercept incoming missile' => null,
  ),
  'causes' => array(
    'short-sighted temporal requirements' => 2, # meant only to be operational for a few hours at a time
    'rounding error' => 1,
    'clock drift' => 1,
  ),
  'cost' => array(
    'deaths'   => 28,
    'injuries' => 98,
    'dollars'  => null,
  ),
  'compounding' => array(
    'software fix delivered the next day' => 2,
  ),
  'mitigating' => array(),
  'refs' => array(
    array(
      'title'     => 'MIM-104 Patriot',
      'subtitle'  => 'Failure at Dhahran',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/MIM-104_Patriot#Failure_at_Dhahran',
    ),
    array(
      'title'     => 'Patriot Missile Defense: Software Problem Led to System Failure at Dhahran, Saudi Arabia',
      'author'    => 'United State Government Accountability Office',
      'url'       => 'http://www.gao.gov/products/IMTEC-92-26',
    ),
  ),
);

