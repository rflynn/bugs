<?php
# ex: set ts=2 et:

$Bugs['y2k'] = array(
  'title' => 'Y2K',
  'when' => 'Jan 1, 2000',
  'industry' => 'business',
  'summary' => '',
  'result' => array(
    'large-scale engineering effort' => null,
    'widespread problems' => null,
  ),
  'cost' => array(
    'deaths' => 0,
    'injuries' => 0,
    'dollars' => 300e9
  ),
  'causes' => array(
    'short-sighted temporal requirements' => null, # no one expected their software to last more than a few years
    'premature optimization' => null,
    'arithmetic overflow' => null,
  ),
  'mitigating' => array(
    'most problems were minor' => null,
    'diagnosed with sufficient lead time' => null,
    'correction effort widely successful' => null,
    'economic boon for COBOL programmers who contributed to the problem in the first place' => null,
  ),
  'refs' => array(
    array(
      'title'     => 'Year 2000 Problem',
      'author'    => 'Wikipedia',
      'url'       => 'http://en.wikipedia.org/wiki/Year_2000_problem',
    ),
  ),
);

