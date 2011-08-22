<?php
# ex: set ts=2 et:

$Bugs['therac-25'] = array(
  'title' => 'Therac-25',
  'when' => '1985-1987',
  'industry' => 'medical',
  'result' => 'radiation overdose (10000%)',
  'cost' => array(
    'deaths' => 3,
    'injuries' => 3,
    'dollars' => null
  ),
  'causes' => array(
    'unrealistic risk assessment' => 3,
    'lack of defensive design' => 3,
    'inadequate testing' => 3,
    'arithmetic overflow' => 3,
    'race condition' => 3,
    'complacency' => 3,
  ),
  'refs' => array(
    array(
      'title'     => 'Therac-25',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Therac-25',
    ),
    array(
      'title'     => 'Therac-25',
      'subtitle'  => 'Computerized Radiation Therapy',
      'author'    => 'Troy Gallagher',
      'url'       => 'http://web.archive.org/web/20071212183729/http://neptune.netcomp.monash.edu.au/cpe9001/assets/readings/www_uguelph_ca_~tgallagh_~tgallagh.html',
    ),
    array(
      'title'     => 'Medical Devices: The Therac-25',
      'author'    => 'Nancy G. Leveson',
      'url'       => 'http://sunnyday.mit.edu/papers/therac.pdf',
    ),
    array(
      'title'     => 'An Investigation of the Therac-25 Accidents',
      'author'    => array('Nancy G. Leveson', 'Clark S. Turner'),
      'url'       => 'http://ei.cs.vt.edu/~cs3604/lib/Therac_25/Therac_1.html',
      'reprint'   => 'IEEE Computer, Vol. 26, No. 7, July 1993, pp. 18-41.',
    ),
  ),
);

/*

http://users.csc.calpoly.edu/~jdalbey/SWE/Papers/THERAC25.html


*/

