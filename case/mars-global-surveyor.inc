<?php
# ex: set ts=2 et:

$Bugs['mars-global-surveyor'] = array(
  'title' => 'Mars Global Surveyor',
  'when' => 'Nov 2, 2006',
  'industry' => 'aerospace',
  'summary' => '',
  'result' => array(
    'incorrect failure diagnosis' => 1,
    'incorrect adjustment' => 1,
    'loss of spacecraft' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => null,
  ),
  'causes' => array(
    'human error' => 1,
    'memory fault' => 1,
    'patch introduced worse problem' => 2,
  ),
  'mitigating' => array(
    'main mission already completed' => 2,
  ),
  'refs' => array(
    array(
      'title'     => 'Report Reveals Likely Causes of Mars Spacecraft Loss',
      'author'    => 'NASA',
      'url'       => 'http://www.nasa.gov/mission_pages/mgs/mgs-20070413.html',
    ),
    array(
      'title'     => 'Faulty Software May Have Doomed Mars Orbiter',
      'author'    => 'Clinton Parks',
      'url'       => 'http://www.space.com/3344-faulty-software-doomed-mars-orbiter.html/',
    ),
    array(
      'title'     => 'Mars Global Surveyor',
      'subtitle'  => 'Loss of Contact',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Mars_Global_Surveyor#Loss_of_contact',
    ),
  ),
);

