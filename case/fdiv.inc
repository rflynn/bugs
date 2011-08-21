<?php
# ex: set ts=2 et:

$Bugs['fdiv'] = array(
  'title' => 'Pentium FDIV Bug',
  'summary' => "The newly built-in Pentium FPU used a radix 4 SRT algorithm for division in the name of performance. This algorithm relied on a lookup table which was incompletely entered resulting in small but pervasive division errors.",
  'when' => '1994',
  'industry' => 'electronics',
  'result' => array(
    'costly PR disaster' => 4,
    'product recall' => 4,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 475e6
  ),
  'causes' => array(
    'off-by-one' => 3,
    'inadequate testing' => 2,
    'complacency' => 4
  ),
  'mitigating' => array(
    'actual damages unknown, likely minor' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'FDIV Replacement Program',
      'subtitle'  => 'White Paper: Statistical Analysis of Floating Point Flaw',
      'author'    => 'Intel',
      'url'       => 'http://www.intel.com/support/processors/pentium/fdiv/wp/',
    ),
    array(
      'title'     => 'The Pentium Problem',
      'author'    => 'Mark Janeba',
      'url'       => 'http://www.willamette.edu/~mjaneba/pentprob.html',
    ),
    array(
      'title'     => 'Pentium FDIV Bug',
      'author'    => 'Dusko Koncaliev',
      'url'       => 'http://www.cs.earlham.edu/~dusko/cs63/fdiv.html',
    ),
    array(
      'title'     => 'Pentium FDIV Bug',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Pentium_FDIV_bug',
    ),
  ),
);

