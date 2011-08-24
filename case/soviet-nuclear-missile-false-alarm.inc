<?php
# ex: set ts=2 et:

$Bugs['soviet-nuclear-missile-false-alarm'] = array(
  'title' => 'Soviet Nuclear Missile False Alarm',
  'summary' => 'Hastily-deployed Soviet warning system satellite in eccentric orbit mis-interprets reflections of sunlight on clouds and reports 2 false positives incoming American ICBM attacks. Soviet Air Defense officer Stanislav Petrov correctly interpreted data using logic and secondary sources and does not initiate nuclear counter-attack.',
  'when' => 'Sep 26, 1983',
  'industry' => 'military',
  'result' => 'nearly-averted nuclear holocaust',
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 0,
    'near-thermonuclear-war' => true,
    'lives-at-risk' => 500e6,
  ),
  'causes' => array(
    'deadline pressure' => 2,
    'faulty signal analysis' => 1, # mistaking sunlight reflecting off clouds for missile launches
    #'highly elliptical satellite orbit' => 1,
    'false positive' => 1,
  ),
  'mitigating' => array(
    'secondary sources of information' => 1,
    'human in the loop' => 1,
    'false alarm correctly interpreted' => 1,
  ),
  'refs' => array(
    array(
      'title'     => "1983 Soviet nuclear false alarm incident",
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/1983_Soviet_nuclear_false_alarm_incident',
    ),
    array(
      'title'     => "'I Had A Funny Feeling in My Gut'",
      'author'    => 'David Hoffman',
      'url'       => 'http://www.washingtonpost.com/wp-srv/inatl/longterm/coldwar/shatter021099b.htm',
    ),
    array(
      'title'     => 'Stanislav Petrov',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Stanislav_Petrov',
    ),
    array(
      'title'     => 'Molniya orbit',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Molniya_orbit',
    ),
  ),
);

