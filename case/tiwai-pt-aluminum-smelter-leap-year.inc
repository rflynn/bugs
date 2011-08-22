<?php
# ex: set ts=2 et:

$Bugs['tiwai-pt-aluminum-smelter-leap-year'] = array(
  'title' => 'Tiwai Pt Aluminum Smelter Leap Year Glitch',
  'when' => 'Dec 31, 1996',
  'industry' => 'industrial',
  'summary' => '',
  'result' => array(
    '660 process control computers hung up simultaneously at midnight' => 1,
    '5 overheated beyond repair' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 800e3,
    'AUD' => 1e6,
  ),
  'causes' => array(
    'date/time mishandling' => 1,
  ),
  'mitigating' => array(
    'problem fixed next day' => 1,
  ),
  'refs' => array(
    array(
      'title'     => 'Leap-Year software bug gives "Million-dollar glitch"',
      'author'    => 'Jim Towler <jtowler@csi.co.nz>',
      'url'       => 'http://catless.ncl.ac.uk/Risks/18.74.html#subj5',
      'reprint'   => 'Million-dollar glitch ("The Dominion" -- Wellington, New Zealand, 8 Jan 1997) via NZPA [New Zealand Press Assoc.]',
    ),
  ),
);

