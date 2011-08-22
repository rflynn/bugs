<?php
# ex: set ts=2 et:

$Bugs[basename(__FILE__)] = array(
  'title' => 'Bank of New York Overdraft',
  'when' => 'Dec 13, 1985',
  'industry' => 'financial',
  'summary' => '',
  'result' => array(
    '32,000 transactions corrupted' => 1,
    '$23.6B loan required' => 1,
    '90 minute service disruption' => 1,
    'reputation damaged' => 1,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' =>
      32e9 + /* original mistake */
      5e6 /* interest */,
  ),
  'causes' => array(
    'inadequate disaster recovery plan' => null,
    'inadequate testing' => null,
    'unspecified software error' => 1,
  ),
  'mitigating' => array(
  ),
  'refs' => array(
    array(
      'title'     => 'Computer Snarled N.Y. Bank',
      'subtitle'  => '$32 Billion Overdraft Resulted From Snafu',
      'author'    => 'John M. Berry',
      'url'       => 'http://catless.ncl.ac.uk/Risks/1.31.html#subj4',
      'reprint'   => 'Washington Post, 13 December 1985, p. D7',
    ),
  ),
);

