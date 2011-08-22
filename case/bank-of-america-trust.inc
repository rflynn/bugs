<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'Bank of American Trust System Conversion',
  'when' => '1987',
  'industry' => 'financial',
  'summary' => '',
  'result' => array(
    'new system never worked' => null,
    'trust group dissolved' => 1,
    'accounts transferred to other banks' => null,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => array_sum(array_values(
      array(
        'development cost' => 20e6,
        'initial error' => 23e6,
        'correction attempt cost' => 60e6,
        'given away' => 34e9 * 0.05,
      ))),
    'jobs' => 250,
  ),
  'causes' => array(
    'inadequate planning' => 2,
    'inadequate testing' => 2,
    'inadequate disaster recovery plan' => 2,
  ),
  'mitigating' => array(
  ),
  'refs' => array(
    array(
      'title'     => 'B OF A ABANDONS COSTLY COMPUTER FOR TRUST CLIENTS',
      'author'    => '',
      'url'       => 'http://catless.ncl.ac.uk/Risks/5.16.html#subj1.1',
      'reprint'   => 'Los Angeles Times, Tuesday, January 26, 1988',
    ),
    array(
      'title'     => 'B OF A ABANDONS COSTLY COMPUTER FOR TRUST CLIENTS',
      'author'    => '',
      'url'       => 'http://catless.ncl.ac.uk/Risks/6.16.html#subj4.1',
      'reprint'   => 'Los Angeles Times, Tuesday, January 26, 1988',
    ),
  ),
);

