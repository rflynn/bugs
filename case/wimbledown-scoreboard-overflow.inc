<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'Wimbledon Scoreboard Overflow',
  # On the second day of play, the courtside scoreboard stood still at 47–47 and later went dark.
  # IBM programmers said it was only programmed to go to 47–47 but would be fixed by the next day.
  'when' => 'June 23, 2010',
  'industry' => 'sports/entertainment',
  'result' => '?',
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 0, 
  ),
  'causes' => array(
    'arithmetic overflow' => 1,
    'inadequate planning for unlikely event' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'Isner–Mahut match at the 2010 Wimbledon Championships',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Isner%E2%80%93Mahut_match_at_the_2010_Wimbledon_Championships',
    ),
    array(
      'title'     => 'Logistics Are Put to the Test at Wimbledon',
      'author'    => 'John Martin',
      'url'       => 'http://straightsets.blogs.nytimes.com/2010/06/23/logistics-are-put-to-the-test-at-wimbledon/',
    ),
  ),
);

